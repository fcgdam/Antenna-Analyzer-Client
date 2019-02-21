#include <stdio.h>

#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QClipboard>

#include "scandata.h"

#include "settingsdlg.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

const Version
    MainWindow::version = Version(0,10,14,"");

ScanData scandata;

/*
 * Main startup function
 *
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setlocale(LC_NUMERIC,"C");  // Make sure that the sscanf does work...
    setlinebuf(stdout);

    Config::read();

    ui->setupUi(this);
    ui->statusBar->addWidget(ui->progressBar);

    setWindowTitle(Config::App);

    connect(ui->actionLoad,           SIGNAL(triggered()), this, SLOT(Slot_Load()));
    connect(ui->actionSave,           SIGNAL(triggered()), this, SLOT(Slot_Save()));
    connect(ui->actionSettings,       SIGNAL(triggered()), this, SLOT(Slot_Settings()));
    connect(ui->actionQuit,           SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(ui->actionAbout_QT,       SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(ui->actionAbout_Analyzer, SIGNAL(triggered()), this, SLOT(Slot_about()));

    connect(ui->menuDevice,           SIGNAL(aboutToShow()), this, SLOT(Slot_menuDevice_Show()));
    connect(ui->menuDevice,           SIGNAL(triggered(QAction *)), this, SLOT(Slot_menuDevice_Select(QAction *)));

    connect(ui->scanGraph,            SIGNAL(cursorMoved(double)), this, SLOT(Slot_cursor_move(double)));
    connect(ui->monitorGraph,         SIGNAL(cursorMoved(double)), this, SLOT(Slot_moncursor_move(double)));

    connect(ui->scanBtn,              SIGNAL(clicked()), this,SLOT(Slot_scanBtn_click()));
    connect(ui->scanDummyBtn,         SIGNAL(clicked()), this,SLOT(Slot_scanDummyBtn_click()));

    connect(ui->copyBtn,              SIGNAL(clicked()), this, SLOT(Slot_copy()));

    connect(ui->band_cb,              SIGNAL(currentIndexChanged(int)), this, SLOT(Slot_band_change(int)));
    connect(ui->fcentre,              SIGNAL(valueChanged(double)), this, SLOT(Slot_fcentre_change(double)));
    connect(ui->fspan,                SIGNAL(valueChanged(double)), this, SLOT(Slot_fspan_change(double)));
    connect(ui->point_count,          SIGNAL(valueChanged(int)), this, SLOT(Slot_point_count_change(int)));

    //connect(ui->freqMon,              SIGNAL(valueChanged(double)), this, SLOT(Slot_freqmon_change(double)));
    //connect(ui->monInterval,          SIGNAL(valueChanged(double)), this, SLOT(Slot_moninterval_change(double)));

    connect(ui->monstartBtn,          SIGNAL(clicked()), this,SLOT(Slot_monstartBtn_click()));
    connect(ui->monstopBtn,           SIGNAL(clicked()), this,SLOT(Slot_monstopBtn_click()));


    QCheckBox *ctrls[] = {ui->plotz_chk,ui->plotx_chk,ui->plotr_chk, NULL};
    for (int i=0; ctrls[i]; i++)
        connect(ctrls[i], SIGNAL(stateChanged(int)), this, SLOT(Slot_plot_change(int)));

    link = new SerialLink("/dev/ttyUSB0",57600);

    ui->band_cb->setCurrentIndex(16);

    // Set the headers for the table view
    ui->scan_data->setHorizontalHeaderLabels(QStringList() << "freq" << "SWR" << "Z" << "R" << "X" << "X2");

    Slot_scanDummyBtn_click();

    ui->scanGraph->cursor = ui->scanCursor;
    ui->monitorGraph->cursor = ui->monitorCursor;

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(1,false);
}


MainWindow::~MainWindow()
{
    delete link;
    delete ui;
}

void MainWindow::RaiseEvent(event_t event,int arg)
{
    switch (event)
    {
      case progress_event:
        ui->progressBar->setValue(arg);
        break;
    }
}

/*
 * populate_table()
 *
 * From the data that is available from the scandata object
 * fills out the scan_data ui table object to be shown to the user.
 *
 * */
void MainWindow::populate_table()
{
    //Populate data table
    for (unsigned int i=0;i<scandata.points.size();i++)
    {
        Sample *point = &scandata.points[i];

        ui->scan_data->setItem(i, 0, new QTableWidgetItem(QString("%1").arg(point->freq/1000000.0,0,'f')));
        ui->scan_data->setItem(i, 1, new QTableWidgetItem(QString("%1").arg(point->swr)));
        ui->scan_data->setItem(i, 2, new QTableWidgetItem(QString("%1").arg(point->Z)));
        ui->scan_data->setItem(i, 3, new QTableWidgetItem(QString("%1").arg(point->R)));
        ui->scan_data->setItem(i, 4, new QTableWidgetItem(QString("%1").arg(point->X)));
        //ui->scan_data->setItem(i, 5, new QTableWidgetItem(QString("%1").arg(point->X2)));
    }
}

/*
 * draw_scanGraph()
 *
 * Draws the collected scandata on the ui scanGraph object
 *
 * */
void MainWindow::draw_scanGraph()
{
    GraphScale *scale;
    //double n;

    scale = ui->scanGraph->xscale;
    scale->vmin = scandata.freq_start;
    scale->vmax = scandata.freq_end;
    scale->SetIncAuto();

    scale = ui->scanGraph->yscale1;
    scale->vmin = 1.0;
    scale->vmax = scandata.points[scandata.swr_max_idx].swr>Config::swr_max ? Config::swr_max : scandata.points[scandata.swr_max_idx].swr;
    scale->SetIncAuto();

    scale = ui->scanGraph->yscale2;
    scale->vmin = 0.0; //scandata.points[scandata.Z_min_idx].Z;
    scale->vmax = 0.0;

    if (ui->scanGraph->ztrace->enabled && scandata.points[scandata.Z_max_idx].Z>scale->vmax)
        scale->vmax=scandata.points[scandata.Z_max_idx].Z;

    //if (ui->scanGraph->xtrace->enabled && scandata.points[scandata.X_max_idx].X>scale->vmax) scale->vmax=scandata.points[scandata.X_max_idx].X;

    if (ui->scanGraph->xtrace->enabled)
        scale->Expand(scandata.points[scandata.X_min_idx].X,scandata.points[scandata.X_max_idx].X);

    if (ui->scanGraph->rtrace->enabled && scandata.points[scandata.R_max_idx].R>scale->vmax)
        scale->vmax=scandata.points[scandata.R_max_idx].R;

    //if (ui->scanGraph->x2trace->enabled && scandata.points[scandata.X2_min_idx].X2<scale->vmin) scale->vmin=scandata.points[scandata.X2_min_idx].X2;

    if (scale->vmax==0.0)
        scale->vmax=1.0;

    scale->SetIncAuto();
    scale->SetMinAuto();

    printf("Data points available: %ld\n" , scandata.points.size() );

    ui->scanGraph->swrtrace->points.resize(scandata.points.size());
    for (unsigned int i=0;i<scandata.points.size();i++) {
        ui->scanGraph->swrtrace->points[i] = scandata.points[i].swr;
//        printf("SWR: %lf\n" , scandata.points[i].swr);
    }

    ui->scanGraph->ztrace->points.resize(scandata.points.size());
    for (unsigned int i=0;i<scandata.points.size();i++) {
        ui->scanGraph->ztrace->points[i] = scandata.points[i].Z;
//        printf("Z:   %lf\n" , scandata.points[i].Z);
    }
    

    ui->scanGraph->xtrace->points.resize(scandata.points.size());
    for (unsigned int i=0;i<scandata.points.size();i++) {
        ui->scanGraph->xtrace->points[i] = scandata.points[i].X;
//        printf("X:   %lf\n" , scandata.points[i].X);
    }

//    ui->scanGraph->x2trace->points.resize(scandata.points.size());
//    for (unsigned int i=0;i<scandata.points.size();i++)
//        ui->scanGraph->x2trace->points[i] = scandata.points[i].X2;

    ui->scanGraph->rtrace->points.resize(scandata.points.size());
    for (unsigned int i=0;i<scandata.points.size();i++) {
        ui->scanGraph->rtrace->points[i] = scandata.points[i].R;
//        printf("R:   %lf\n" , scandata.points[i].R);
    }

    ui->scanGraph->ZTargetline->val = Config::Z_Target;
    ui->scanGraph->SWRTargetline->val = Config::swr_bw_max;

    ui->scanGraph->swrminline->val = scandata.points[scandata.swr_min_idx].freq;

    //printf("Updating canvas...\n");
    ui->scanGraph->update();

    //printf("Canvas updated!\n");

    //Show stats at the bottom of the graph
    ui->swr_min_disp->setText(QString("%1 (f=%2MHz, Z=%3%4, bw=%5MHz)")
            .arg(scandata.points[scandata.swr_min_idx].swr,0,'f',2)
            .arg(scandata.points[scandata.swr_min_idx].freq/1000000)
            .arg(scandata.points[scandata.swr_min_idx].Z,0,'f',2).arg(QChar(0x03A9))
            .arg((scandata.points[scandata.swr_bw_hi_idx].freq-scandata.points[scandata.swr_bw_lo_idx].freq)/1000000,0,'f',2));


    //Populate data grid
    ui->scan_data->setRowCount(scandata.points.size());
}

/*
 * draw_monitorGraph()
 *
 * Draws the collected scandata on the ui monitorGraph object
 *
 * */
void MainWindow::draw_monitorGraph()
{
    GraphScale *scale;
    //double n;

    scale = ui->monitorGraph->xscale;
    //scale->vmin = 1;
    //scale->vmax = scandata.points.size() + 1;

    scale->vmin = 1000000;
    scale->vmax = scandata.freq_end;
    scale->enabled = false;

    //scale->SetIncAuto();

    printf("Points: %ld\n",scandata.points.size());

    scale->SetIncAuto();

    scale = ui->monitorGraph->yscale1;
    scale->vmin = 1.0;
    scale->vmax = scandata.points[scandata.swr_max_idx].swr > Config::swr_max ? Config::swr_max : scandata.points[scandata.swr_max_idx].swr;
    scale->SetIncAuto();

    scale = ui->monitorGraph->yscale2;
    scale->vmin = 0.0; //scandata.points[scandata.Z_min_idx].Z;
    scale->vmax = 0.0;

    if (ui->monitorGraph->ztrace->enabled && scandata.points[scandata.Z_max_idx].Z > scale->vmax)
        scale->vmax=scandata.points[scandata.Z_max_idx].Z;

    //if (ui->monitorGraph->xtrace->enabled && scandata.points[scandata.X_max_idx].X>scale->vmax)
    //    scale->vmax=scandata.points[scandata.X_max_idx].X;

    if (ui->monitorGraph->xtrace->enabled)
        scale->Expand(scandata.points[scandata.X_min_idx].X,scandata.points[scandata.X_max_idx].X);

    if (ui->monitorGraph->rtrace->enabled && scandata.points[scandata.R_max_idx].R > scale->vmax)
        scale->vmax=scandata.points[scandata.R_max_idx].R;

    //if (ui->monitorGraph->x2trace->enabled && scandata.points[scandata.X2_min_idx].X2 <  scale->vmin)
    //    scale->vmin=scandata.points[scandata.X2_min_idx].X2;

    if (scale->vmax==0.0)
        scale->vmax=1.0;

    scale->SetIncAuto();
    scale->SetMinAuto();

    printf("Data points available: %ld\n" , scandata.points.size() );

    ui->monitorGraph->swrtrace->points.resize(scandata.points.size());
    for (unsigned int i=0 ; i < scandata.points.size() ; i++) {
        ui->monitorGraph->swrtrace->points[i] = scandata.points[i].swr;
        //printf("SWR: %lf\n" , scandata.points[i].swr);
        //printf("Freq: %lf\n", scandata.points[i].freq);
    }

    ui->monitorGraph->ztrace->points.resize(scandata.points.size());
    for (unsigned int i=0 ; i < scandata.points.size() ; i++) {
        ui->monitorGraph->ztrace->points[i] = scandata.points[i].Z;
//        printf("Z:   %lf\n" , scandata.points[i].Z);
    }


    ui->monitorGraph->xtrace->points.resize(scandata.points.size());
    for (unsigned int i=0 ; i < scandata.points.size() ; i++) {
        ui->monitorGraph->xtrace->points[i] = scandata.points[i].X;
//        printf("X:   %lf\n" , scandata.points[i].X);
    }

//    ui->monitorGraph->x2trace->points.resize(scandata.points.size());
//    for (unsigned int i=0;i<scandata.points.size();i++)
//        ui->monitorGraph->x2trace->points[i] = scandata.points[i].X2;

    ui->monitorGraph->rtrace->points.resize(scandata.points.size());
    for (unsigned int i=0 ; i < scandata.points.size() ; i++) {
        ui->monitorGraph->rtrace->points[i] = scandata.points[i].R;
//        printf("R:   %lf\n" , scandata.points[i].R);
    }

    ui->monitorGraph->ZTargetline->val = Config::Z_Target;
    ui->monitorGraph->SWRTargetline->val = Config::swr_bw_max;

    //ui->monitorGraph->swrminline->val = scandata.points[scandata.swr_min_idx].freq;

    printf("Updating canvas...\n");
    ui->monitorGraph->update();

    printf("Canvas updated!\n");
    //Show stats at the bottom of the graph
    ui->monStatus->setText(QString("%1 (f=%2MHz, Z=%3%4, bw=%5MHz)")
            .arg(scandata.points[scandata.swr_min_idx].swr,0,'f',2)
            .arg(scandata.points[scandata.swr_min_idx].freq/1000000)
            .arg(scandata.points[scandata.swr_min_idx].Z,0,'f',2).arg(QChar(0x03A9))
            .arg((scandata.points[scandata.swr_bw_hi_idx].freq-scandata.points[scandata.swr_bw_lo_idx].freq)/1000000,0,'f',2));

    printf("Label set.\n");
    //Populate data grid
    ui->scan_data->setRowCount(scandata.points.size());
}


/*
 * Slot_scanBtn_click()
 *
 * Slot handler for when the Scan ui button is pressed.
 *
 * */
void MainWindow::Slot_scanBtn_click()
{
    scandata.freq_start = (ui->fcentre->value()-ui->fspan->value()/2.0)*1000000;
    scandata.freq_end = (ui->fcentre->value()+ui->fspan->value()/2.0)*1000000;
    scandata.SetPointCount(ui->point_count->value());

    if (link->IsUp())
    {
        link->Cmd_Scan((long)(scandata.freq_start),
                  (long)(scandata.freq_end),
                  (long)((scandata.freq_end-scandata.freq_start)/scandata.GetPointCount()),
                  ui->useraw_chk->checkState()==Qt::Checked,
                  this);
        link->Cmd_Off(this);
    } else {
        printf("WARNING: No serial device connected!!!");
    }

    printf("Populating table....\n");
    populate_table();
    printf("Drawing graph....\n");
    draw_scanGraph();
}

/*
 * Slot_scanDummyBtn_click()
 *
 * Slot handler for when the Test button is pressed.
 * The test button will fill up the scnadata object with
 * pre-defined data.
 *
 * */

void MainWindow::Slot_scanDummyBtn_click()
{
    scandata.freq_start = (ui->fcentre->value()-ui->fspan->value()/2.0)*1000000;
    scandata.freq_end = (ui->fcentre->value()+ui->fspan->value()/2.0)*1000000;
    scandata.SetPointCount(ui->point_count->value());

    scandata.dummy_data(this);

    populate_table();
    draw_scanGraph();
    draw_monitorGraph();
}

/* Slot_cursor_move()
 *
 * Called when the user clicks or moves the graph cursor.
 * Shows to the user the current selected sampled value.
 *
 * */
void MainWindow::Slot_cursor_move(double pos)
{
//printf("pos=%lf\n",pos);
    Sample *sample = &scandata.points[pos*(double)(scandata.points.size()-1)];

    ui->cursor_disp->setText(QString("f=%1MHz, swr=%2, Z=%3%4")
            .arg(sample->freq/1000000)
            .arg(sample->swr,0,'f',2)
            .arg(sample->Z,0,'f',2).arg(QChar(0x03A9)));
}

void MainWindow::set_band(double f, double span)
{
    ui->fcentre->setValue(f);
    ui->fspan->setValue(span);
}

void MainWindow::set_scan_disp()
{
    ui->fstart_disp->setText(QString("%1").arg(ui->fcentre->value()-ui->fspan->value()/2.0));
    ui->fend_disp->setText(QString("%1").arg(ui->fcentre->value()+ui->fspan->value()/2.0));
    ui->fstep_disp->setText(QString("%1").arg(ui->fspan->value()*1000.0/(double)ui->point_count->value()));
}

void MainWindow::Slot_band_change(int idx)
{
    ui->band_cb->blockSignals(true);
    ui->fcentre->blockSignals(true);
    ui->fspan->blockSignals(true);

    switch (idx)
    {
        case 0: break;
        case 1: set_band(1.5, 1.0);  break;     //160m
        case 2: set_band(3.5, 3.0);  break;     //80m
        case 3: set_band(6.5, 3.0);  break;     //40m
        case 4: set_band(9.5, 3.0);  break;     //30m
        case 5: set_band(12.0, 2.0);  break;    //25m
        case 6: set_band(15.0, 4.0);  break;    //20m
        case 7: set_band(18.0, 2.0);  break;    //17m
        case 8: set_band(21.0, 4.0);  break;    //15m
        case 9: set_band(24.5, 3.0);  break;    //12m
        case 10: set_band(27.0,	2.0); break;    //11m
        case 11: set_band(29.5,	3.0); break;    //10m
        case 12: set_band(40, 18.0); break;     //8m
        case 13: set_band(51,	4.0); break;    //6m
        case 14: set_band(30.5,	59.0); break;
        case 15: set_band(16.5,	27.0); break;
        case 16: set_band(27.5,	5.0); break;
    }

    ui->band_cb->blockSignals(false);
    ui->fcentre->blockSignals(false);
    ui->fspan->blockSignals(false);
    set_scan_disp();
}

void MainWindow::Slot_fcentre_change(double v)
{
    ui->fcentre->blockSignals(true);

    double n = ui->fspan->value()/2.0;
    if ((v-n)<1.0)   { v=1.0+n; ui->fcentre->setValue(v); }
    if ((v+n)>60.0)  { v=60.0-n; ui->fcentre->setValue(v); }
    ui->band_cb->setCurrentIndex(0);

    ui->fcentre->blockSignals(false);
    set_scan_disp();
}

void MainWindow::Slot_fspan_change(double v)
{
    ui->fspan->blockSignals(true);

    double centre = ui->fcentre->value();
    if ((centre-v/2.0)<1.0)  { v=2.0*(centre-1);    ui->fspan->setValue(v); }
    if ((centre+v/2.0)>60.0) { v=2.0*(60.0-centre); ui->fspan->setValue(v); }
    ui->band_cb->setCurrentIndex(0);

    ui->fspan->blockSignals(false);
    set_scan_disp();
}

void MainWindow::Slot_point_count_change(int)
{
    set_scan_disp();
}

void MainWindow::Slot_plot_change(int)
{
    ui->scanGraph->ztrace->enabled = ui->plotz_chk->checkState()==Qt::Checked;
    ui->scanGraph->xtrace->enabled = ui->plotx_chk->checkState()==Qt::Checked;
    //ui->scanGraph->x2trace->enabled = ui->plotx2_chk->checkState()==Qt::Checked;
    ui->scanGraph->rtrace->enabled = ui->plotr_chk->checkState()==Qt::Checked;
    draw_scanGraph();
//    ui->scanGraph->update();
}

void MainWindow::Slot_Load()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open Layout",Config::dir_data,"Scan Data (*.analyzer)");
    if (!fileName.isEmpty())
    {
        QDomDocument doc( "AnalyzerML" );
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::warning(this, tr("Analyzer"),
                                  tr("Cannot read file %1:\n%2.")
                                  .arg(fileName)
                                  .arg(file.errorString()));
            return;
        }
        if (!doc.setContent(&file))
        {
            file.close();
            return;
        }
        file.close();

        QDomElement root = doc.documentElement();
        if (root.tagName() != "analyzer")
        {
          QMessageBox::warning(this, "Analyzer",
                                    "Cannot load file\nThis is not a valid analyzer file.");
          return;
        }

        fromDom(root);

        //setCurrentFile(fileName);

        //fileName.replace('\\','/');
        //addRecentFile(fileName);
        QFileInfo fi(fileName);
        if (Config::dir_data != fi.dir().path())
        {
          Config::dir_data = fi.dir().path();
          Config::write();
        }

        populate_table();
        draw_scanGraph();

        ui->fcentre->setValue((scandata.freq_end+scandata.freq_start)/2000000.0);
        ui->fspan->setValue((scandata.freq_end-scandata.freq_start)/1000000.0);

        statusBar()->showMessage(tr("Analyzer data loaded"), 5000);
    }
}

void MainWindow::fromDom(QDomElement &e0)
{
    //freq_start = e0.attribute("fstart", "0").toDouble();

    for (QDomNode n1 = e0.firstChild(); !n1.isNull(); n1 = n1.nextSibling())
    {
        if (!n1.isElement()) continue;  // Skip any non-element nodes

        QDomElement e1 = n1.toElement();

        if (e1.tagName() == "scandata")
            scandata.fromDom(e1);
        else if (e1.tagName() == "notes")
            ui->notes_txt->setPlainText(e1.text());
    }
}

void MainWindow::toDom(QDomDocument &doc)
{
  QDomElement element = doc.createElement("analyzer");

  toDom_Text(doc,element,"notes",ui->notes_txt->toPlainText());

  scandata.toDom(doc,element);

  doc.appendChild(element);
}

void MainWindow::Slot_Save()
{
    QString filename = QFileDialog::getSaveFileName(this,"Save Scan Data As",Config::dir_data,"Scan Data (*.analyzer)");
    if (filename.isEmpty())
      return;

//    if (!copy)
//      setCurrentFile(fileName);	// Set filename & layoutname here because layoutname is written to the file.

    QDomDocument doc( "AnalyzerML" );

    toDom(doc);

    QFile file(filename);
    if( !file.open( QIODevice::WriteOnly ) )
      return;

    QTextStream ts( &file );
    ts.setCodec(Config::DOM_ENCODING);  //If we always save as UTF-8 unicode filenames should work. Othewise on windows it saves in some other encoding.
    ts << doc.toString();

    file.close();
    //statusBar()->showMessage(tr("Data saved"), 2000);

    QFileInfo fi(filename);
    if (Config::dir_data != fi.dir().path())
    {
      Config::dir_data = fi.dir().path();
      Config::write();
    }
}

void MainWindow::Slot_menuDevice_Show()
{
  unsigned int i;
  //QDir dir("/dev","ttyUSB*");
  QDir dir("/dev","ttyUSB*;tty.usbserial*;rfcomm*;tty.wchusbserial*",QDir::Name | QDir::IgnoreCase,QDir::System);

printf("dir: %d\n",dir.count());
  ui->menuDevice->clear();
  for (i=0;i<dir.count();i++)
    ui->menuDevice->addAction(dir[i]);
}

void MainWindow::Slot_menuDevice_Select(QAction *act)
{
  if (link)
      delete link;

  link = new SerialLink(QString("/dev/" + act->text()).toLatin1().data(),57600);
}

void MainWindow::Slot_about()
{
      QMessageBox::about(this, "About Antenna Analyzer",
            QString("Antenna Analyzer - scanning &amp; graph plotting program for the SARK100 antenna analyzer<br> or compatiblem home made analysers.<br><br>"
               "Version %1.%2.%3 %4<br><br>"
               "&copy; 2015 jedi98.uk<br>"
               "&copy; 2019 primalcortex.wordpress.com<br>").arg(version.major).arg(version.minor).arg(version.build).arg(version.subversion));
}

void MainWindow::Slot_Settings()
{
    SettingsDlg dlg;

    if (dlg.exec() == QDialog::Accepted)
    {
      scandata.UpdateStats();
      draw_scanGraph();
    }
}

void MainWindow::Slot_copy()
{
  QString txt("Freq\tSWR\tZ\tR\tX\n");

  for (unsigned int i=0;i<scandata.points.size();i++)
     txt += QString("%1\t%2\t%3\t%4\t%5\n")
             .arg(scandata.points[i].freq/1000000.0,0,'f')
             .arg(scandata.points[i].swr)
             .arg(scandata.points[i].Z)
             .arg(scandata.points[i].R)
             .arg(scandata.points[i].X);

  qApp->clipboard()->setText(txt);
  printf("Data was copied to the clipboard!\n");
}

void MainWindow::Slot_freqmon_change(double)
{

}

void MainWindow::Slot_moninterval_change(double)
{

}

void MainWindow::Slot_moncursor_move(double) {

}

void MainWindow::Slot_monstartBtn_click() {
    Sample sample;
    int datapoints, i;

    datapoints = ui->monPoints->value();

    scandata.points.resize(0);
    scandata.freq_start = ui->freqMon->value();
    scandata.freq_end = ui->freqMon->value();

    this->RaiseEvent(EventReceiver::progress_event, 0 );

    // Set the VFO frequency first
    //setVFO(ui->

    for ( i = 0 ; i < datapoints + 1 ; i++ ) {
        double vf,vr,vz,va;
        vf = vr = vz = va = 10;

        //sample.fromRaw(vf,vr,vz,va);
        sample.swr = 1.01 + random() * 30;
        sample.R = 50;
        sample.Z = 50;
        sample.X = 10;
        sample.freq = scandata.freq_start;    // Not really used, but need to fill it up.

        scandata.points.push_back(sample);

        this->RaiseEvent(EventReceiver::progress_event, i );

        scandata.UpdateStats();
        populate_table();

        draw_monitorGraph();
    }
}

void MainWindow::Slot_monstopBtn_click() {

}
