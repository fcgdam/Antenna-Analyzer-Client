/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "graphcanvas.h"
#include "graphcursor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_QT;
    QAction *actionDevices;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionAbout_Analyzer;
    QAction *actionSettings;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabScan;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *DataAreaWD;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *fstart_disp;
    QComboBox *band_cb;
    QDoubleSpinBox *fspan;
    QLabel *fstep_disp;
    QLabel *label_5;
    QLabel *fend_disp;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *fcentre;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_13;
    QLabel *label_11;
    QSpinBox *point_count;
    QCheckBox *useraw_chk;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *scanBtn;
    QPushButton *scanDummyBtn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QWidget *widget_5;
    QWidget *widget_4;
    QWidget *widget_6;
    QWidget *widget_3;
    QCheckBox *checkBox;
    QCheckBox *plotz_chk;
    QCheckBox *plotr_chk;
    QCheckBox *plotx_chk;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *GraphAreaVL;
    GraphCanvas *scanGraph;
    GraphCursor *scanCursor;
    QWidget *scanStatusBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLabel *swr_min_disp;
    QSpacerItem *horizontalSpacer;
    QLabel *cursor_disp;
    QWidget *tabMonitor;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter_2;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QLabel *label_23;
    QLabel *label_26;
    QLabel *label_15;
    QDoubleSpinBox *freqMon;
    QSpinBox *monInterval;
    QSpinBox *monPoints;
    QCheckBox *monRaw;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *monstartBtn;
    QPushButton *monstopBtn;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QWidget *widget_11;
    QCheckBox *monplotz_chk;
    QWidget *widget_12;
    QCheckBox *monplotx_chk;
    QWidget *widget_9;
    QWidget *widget_10;
    QCheckBox *checkBox_2;
    QCheckBox *monplotr_chk;
    QSpacerItem *verticalSpacer_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *monitorGraphVL;
    GraphCanvas *monitorGraph;
    GraphCursor *monitorCursor;
    QWidget *monitorStatusBar;
    QLabel *monStatus;
    QLabel *monCursor;
    QWidget *tabDataTable;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *scan_data;
    QVBoxLayout *verticalLayout_5;
    QPushButton *copyBtn;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabNotes;
    QFormLayout *formLayout;
    QLabel *label_14;
    QPlainTextEdit *notes_txt;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuLink;
    QMenu *menuDevice;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1179, 668);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/128/antenna-charge-radio-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout_QT = new QAction(MainWindow);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        actionDevices = new QAction(MainWindow);
        actionDevices->setObjectName(QString::fromUtf8("actionDevices"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout_Analyzer = new QAction(MainWindow);
        actionAbout_Analyzer->setObjectName(QString::fromUtf8("actionAbout_Analyzer"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabScan = new QWidget();
        tabScan->setObjectName(QString::fromUtf8("tabScan"));
        verticalLayout_4 = new QVBoxLayout(tabScan);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter = new QSplitter(tabScan);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        DataAreaWD = new QWidget(splitter);
        DataAreaWD->setObjectName(QString::fromUtf8("DataAreaWD"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DataAreaWD->sizePolicy().hasHeightForWidth());
        DataAreaWD->setSizePolicy(sizePolicy);
        DataAreaWD->setMaximumSize(QSize(260, 16777215));
        verticalLayout = new QVBoxLayout(DataAreaWD);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fstart_disp = new QLabel(DataAreaWD);
        fstart_disp->setObjectName(QString::fromUtf8("fstart_disp"));

        gridLayout->addWidget(fstart_disp, 4, 1, 1, 1);

        band_cb = new QComboBox(DataAreaWD);
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->addItem(QString());
        band_cb->setObjectName(QString::fromUtf8("band_cb"));

        gridLayout->addWidget(band_cb, 0, 1, 1, 2);

        fspan = new QDoubleSpinBox(DataAreaWD);
        fspan->setObjectName(QString::fromUtf8("fspan"));
        fspan->setDecimals(6);
        fspan->setMinimum(0.100000000000000);
        fspan->setMaximum(60.000000000000000);
        fspan->setValue(5.000000000000000);

        gridLayout->addWidget(fspan, 2, 1, 1, 1);

        fstep_disp = new QLabel(DataAreaWD);
        fstep_disp->setObjectName(QString::fromUtf8("fstep_disp"));

        gridLayout->addWidget(fstep_disp, 6, 1, 1, 1);

        label_5 = new QLabel(DataAreaWD);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        fend_disp = new QLabel(DataAreaWD);
        fend_disp->setObjectName(QString::fromUtf8("fend_disp"));

        gridLayout->addWidget(fend_disp, 5, 1, 1, 1);

        label_10 = new QLabel(DataAreaWD);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_10, 2, 2, 1, 1);

        label_4 = new QLabel(DataAreaWD);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_6 = new QLabel(DataAreaWD);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        label_9 = new QLabel(DataAreaWD);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_9, 6, 2, 1, 1);

        label_7 = new QLabel(DataAreaWD);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_7, 4, 2, 1, 1);

        label_8 = new QLabel(DataAreaWD);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_8, 5, 2, 1, 1);

        fcentre = new QDoubleSpinBox(DataAreaWD);
        fcentre->setObjectName(QString::fromUtf8("fcentre"));
        fcentre->setDecimals(6);
        fcentre->setMaximum(60.000000000000000);
        fcentre->setValue(27.204999999999998);

        gridLayout->addWidget(fcentre, 1, 1, 1, 1);

        label_3 = new QLabel(DataAreaWD);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_2 = new QLabel(DataAreaWD);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(DataAreaWD);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_13 = new QLabel(DataAreaWD);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        label_11 = new QLabel(DataAreaWD);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        point_count = new QSpinBox(DataAreaWD);
        point_count->setObjectName(QString::fromUtf8("point_count"));
        point_count->setMinimum(1);
        point_count->setMaximum(999);
        point_count->setValue(100);

        gridLayout->addWidget(point_count, 3, 1, 1, 1);

        useraw_chk = new QCheckBox(DataAreaWD);
        useraw_chk->setObjectName(QString::fromUtf8("useraw_chk"));
        useraw_chk->setChecked(true);

        gridLayout->addWidget(useraw_chk, 7, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        scanBtn = new QPushButton(DataAreaWD);
        scanBtn->setObjectName(QString::fromUtf8("scanBtn"));

        horizontalLayout_3->addWidget(scanBtn);

        scanDummyBtn = new QPushButton(DataAreaWD);
        scanDummyBtn->setObjectName(QString::fromUtf8("scanDummyBtn"));

        horizontalLayout_3->addWidget(scanDummyBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(DataAreaWD);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMaximumSize(QSize(24, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        widget_5->setPalette(palette);
        widget_5->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_5, 1, 1, 1, 1);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(24, 16777215));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        widget_4->setPalette(palette1);
        widget_4->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_4, 0, 1, 1, 1);

        widget_6 = new QWidget(groupBox);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMaximumSize(QSize(24, 16777215));
        QPalette palette2;
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        widget_6->setPalette(palette2);
        widget_6->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_6, 3, 1, 1, 1);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(24, 16777215));
        QPalette palette3;
        QBrush brush4(QColor(0, 170, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        widget_3->setPalette(palette3);
        widget_3->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_3, 2, 1, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(false);
        checkBox->setChecked(true);

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        plotz_chk = new QCheckBox(groupBox);
        plotz_chk->setObjectName(QString::fromUtf8("plotz_chk"));
        plotz_chk->setChecked(true);

        gridLayout_2->addWidget(plotz_chk, 1, 0, 1, 1);

        plotr_chk = new QCheckBox(groupBox);
        plotr_chk->setObjectName(QString::fromUtf8("plotr_chk"));
        plotr_chk->setChecked(true);

        gridLayout_2->addWidget(plotr_chk, 2, 0, 1, 1);

        plotx_chk = new QCheckBox(groupBox);
        plotx_chk->setObjectName(QString::fromUtf8("plotx_chk"));
        plotx_chk->setChecked(true);

        gridLayout_2->addWidget(plotx_chk, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(DataAreaWD);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        GraphAreaVL = new QVBoxLayout(verticalLayoutWidget);
        GraphAreaVL->setSpacing(3);
        GraphAreaVL->setContentsMargins(11, 11, 11, 11);
        GraphAreaVL->setObjectName(QString::fromUtf8("GraphAreaVL"));
        GraphAreaVL->setContentsMargins(0, 0, 0, 0);
        scanGraph = new GraphCanvas(verticalLayoutWidget);
        scanGraph->setObjectName(QString::fromUtf8("scanGraph"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        scanGraph->setPalette(palette4);
        scanGraph->setFrameShape(QFrame::Panel);
        scanGraph->setFrameShadow(QFrame::Sunken);
        scanGraph->setLineWidth(2);
        scanCursor = new GraphCursor(scanGraph);
        scanCursor->setObjectName(QString::fromUtf8("scanCursor"));
        scanCursor->setGeometry(QRect(0, 0, 120, 80));

        GraphAreaVL->addWidget(scanGraph);

        scanStatusBar = new QWidget(verticalLayoutWidget);
        scanStatusBar->setObjectName(QString::fromUtf8("scanStatusBar"));
        scanStatusBar->setMaximumSize(QSize(16777215, 20));
        horizontalLayout = new QHBoxLayout(scanStatusBar);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(scanStatusBar);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout->addWidget(label_12);

        swr_min_disp = new QLabel(scanStatusBar);
        swr_min_disp->setObjectName(QString::fromUtf8("swr_min_disp"));

        horizontalLayout->addWidget(swr_min_disp);

        horizontalSpacer = new QSpacerItem(379, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cursor_disp = new QLabel(scanStatusBar);
        cursor_disp->setObjectName(QString::fromUtf8("cursor_disp"));

        horizontalLayout->addWidget(cursor_disp);


        GraphAreaVL->addWidget(scanStatusBar);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_4->addWidget(splitter);

        tabWidget->addTab(tabScan, QString());
        tabMonitor = new QWidget();
        tabMonitor->setObjectName(QString::fromUtf8("tabMonitor"));
        verticalLayout_8 = new QVBoxLayout(tabMonitor);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        splitter_2 = new QSplitter(tabMonitor);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        widget_8 = new QWidget(splitter_2);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        sizePolicy.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy);
        widget_8->setMaximumSize(QSize(260, 16777215));
        verticalLayout_6 = new QVBoxLayout(widget_8);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_23 = new QLabel(widget_8);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_23, 0, 0, 1, 1);

        label_26 = new QLabel(widget_8);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_26, 1, 0, 1, 1);

        label_15 = new QLabel(widget_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        freqMon = new QDoubleSpinBox(widget_8);
        freqMon->setObjectName(QString::fromUtf8("freqMon"));
        freqMon->setDecimals(6);
        freqMon->setMaximum(60.000000000000000);
        freqMon->setValue(14.000000000000000);

        gridLayout_3->addWidget(freqMon, 0, 1, 1, 1);

        monInterval = new QSpinBox(widget_8);
        monInterval->setObjectName(QString::fromUtf8("monInterval"));
        monInterval->setMinimum(100);
        monInterval->setMaximum(5000);
        monInterval->setSingleStep(100);
        monInterval->setValue(500);

        gridLayout_3->addWidget(monInterval, 1, 1, 1, 1);

        monPoints = new QSpinBox(widget_8);
        monPoints->setObjectName(QString::fromUtf8("monPoints"));
        monPoints->setMinimum(1);
        monPoints->setMaximum(1000);
        monPoints->setValue(100);

        gridLayout_3->addWidget(monPoints, 2, 1, 1, 1);

        monRaw = new QCheckBox(widget_8);
        monRaw->setObjectName(QString::fromUtf8("monRaw"));
        monRaw->setChecked(true);

        gridLayout_3->addWidget(monRaw, 3, 0, 1, 2);


        verticalLayout_6->addLayout(gridLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        monstartBtn = new QPushButton(widget_8);
        monstartBtn->setObjectName(QString::fromUtf8("monstartBtn"));

        horizontalLayout_4->addWidget(monstartBtn);

        monstopBtn = new QPushButton(widget_8);
        monstopBtn->setObjectName(QString::fromUtf8("monstopBtn"));

        horizontalLayout_4->addWidget(monstopBtn);


        verticalLayout_6->addLayout(horizontalLayout_4);

        groupBox_2 = new QGroupBox(widget_8);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        widget_11 = new QWidget(groupBox_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMaximumSize(QSize(24, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        widget_11->setPalette(palette5);
        widget_11->setAutoFillBackground(true);

        gridLayout_4->addWidget(widget_11, 1, 1, 1, 1);

        monplotz_chk = new QCheckBox(groupBox_2);
        monplotz_chk->setObjectName(QString::fromUtf8("monplotz_chk"));
        monplotz_chk->setChecked(true);

        gridLayout_4->addWidget(monplotz_chk, 1, 0, 1, 1);

        widget_12 = new QWidget(groupBox_2);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMaximumSize(QSize(24, 16777215));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        widget_12->setPalette(palette6);
        widget_12->setAutoFillBackground(true);

        gridLayout_4->addWidget(widget_12, 2, 1, 1, 1);

        monplotx_chk = new QCheckBox(groupBox_2);
        monplotx_chk->setObjectName(QString::fromUtf8("monplotx_chk"));
        monplotx_chk->setChecked(true);

        gridLayout_4->addWidget(monplotx_chk, 3, 0, 1, 1);

        widget_9 = new QWidget(groupBox_2);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMaximumSize(QSize(24, 16777215));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        widget_9->setPalette(palette7);
        widget_9->setAutoFillBackground(true);

        gridLayout_4->addWidget(widget_9, 0, 1, 1, 1);

        widget_10 = new QWidget(groupBox_2);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMaximumSize(QSize(24, 16777215));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        widget_10->setPalette(palette8);
        widget_10->setAutoFillBackground(true);

        gridLayout_4->addWidget(widget_10, 3, 1, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setEnabled(false);
        checkBox_2->setChecked(true);

        gridLayout_4->addWidget(checkBox_2, 0, 0, 1, 1);

        monplotr_chk = new QCheckBox(groupBox_2);
        monplotr_chk->setObjectName(QString::fromUtf8("monplotr_chk"));
        monplotr_chk->setChecked(true);

        gridLayout_4->addWidget(monplotr_chk, 2, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_2);

        verticalSpacer_3 = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        splitter_2->addWidget(widget_8);
        verticalLayoutWidget_2 = new QWidget(splitter_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        monitorGraphVL = new QVBoxLayout(verticalLayoutWidget_2);
        monitorGraphVL->setSpacing(3);
        monitorGraphVL->setContentsMargins(11, 11, 11, 11);
        monitorGraphVL->setObjectName(QString::fromUtf8("monitorGraphVL"));
        monitorGraphVL->setContentsMargins(0, 0, 0, 0);
        monitorGraph = new GraphCanvas(verticalLayoutWidget_2);
        monitorGraph->setObjectName(QString::fromUtf8("monitorGraph"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        monitorGraph->setPalette(palette9);
        monitorGraph->setFrameShape(QFrame::Panel);
        monitorGraph->setFrameShadow(QFrame::Sunken);
        monitorGraph->setLineWidth(2);
        monitorCursor = new GraphCursor(monitorGraph);
        monitorCursor->setObjectName(QString::fromUtf8("monitorCursor"));
        monitorCursor->setGeometry(QRect(0, 0, 120, 80));

        monitorGraphVL->addWidget(monitorGraph);

        monitorStatusBar = new QWidget(verticalLayoutWidget_2);
        monitorStatusBar->setObjectName(QString::fromUtf8("monitorStatusBar"));
        monitorStatusBar->setMaximumSize(QSize(16777215, 20));
        monStatus = new QLabel(monitorStatusBar);
        monStatus->setObjectName(QString::fromUtf8("monStatus"));
        monStatus->setGeometry(QRect(0, 0, 231, 17));
        monCursor = new QLabel(monitorStatusBar);
        monCursor->setObjectName(QString::fromUtf8("monCursor"));
        monCursor->setGeometry(QRect(810, 0, 55, 17));

        monitorGraphVL->addWidget(monitorStatusBar);

        splitter_2->addWidget(verticalLayoutWidget_2);

        verticalLayout_8->addWidget(splitter_2);

        tabWidget->addTab(tabMonitor, QString());
        tabDataTable = new QWidget();
        tabDataTable->setObjectName(QString::fromUtf8("tabDataTable"));
        horizontalLayout_2 = new QHBoxLayout(tabDataTable);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        scan_data = new QTableWidget(tabDataTable);
        if (scan_data->columnCount() < 5)
            scan_data->setColumnCount(5);
        scan_data->setObjectName(QString::fromUtf8("scan_data"));
        scan_data->setColumnCount(5);

        horizontalLayout_2->addWidget(scan_data);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        copyBtn = new QPushButton(tabDataTable);
        copyBtn->setObjectName(QString::fromUtf8("copyBtn"));

        verticalLayout_5->addWidget(copyBtn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_5);

        tabWidget->addTab(tabDataTable, QString());
        tabNotes = new QWidget();
        tabNotes->setObjectName(QString::fromUtf8("tabNotes"));
        formLayout = new QFormLayout(tabNotes);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_14 = new QLabel(tabNotes);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_14);

        notes_txt = new QPlainTextEdit(tabNotes);
        notes_txt->setObjectName(QString::fromUtf8("notes_txt"));

        formLayout->setWidget(0, QFormLayout::FieldRole, notes_txt);

        tabWidget->addTab(tabNotes, QString());

        verticalLayout_3->addWidget(tabWidget);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_3->addWidget(progressBar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1179, 29));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuLink = new QMenu(menuBar);
        menuLink->setObjectName(QString::fromUtf8("menuLink"));
        menuDevice = new QMenu(menuLink);
        menuDevice->setObjectName(QString::fromUtf8("menuDevice"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuLink->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout_QT);
        menuHelp->addAction(actionAbout_Analyzer);
        menuLink->addAction(menuDevice->menuAction());
        menuDevice->addAction(actionDevices);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout_QT->setText(QApplication::translate("MainWindow", "About QT", nullptr));
        actionDevices->setText(QApplication::translate("MainWindow", "devices", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        actionAbout_Analyzer->setText(QApplication::translate("MainWindow", "About Antenna Analyzer", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        fstart_disp->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        band_cb->setItemText(0, QApplication::translate("MainWindow", "Custom", nullptr));
        band_cb->setItemText(1, QApplication::translate("MainWindow", "160m", nullptr));
        band_cb->setItemText(2, QApplication::translate("MainWindow", "80m", nullptr));
        band_cb->setItemText(3, QApplication::translate("MainWindow", "40m", nullptr));
        band_cb->setItemText(4, QApplication::translate("MainWindow", "30m", nullptr));
        band_cb->setItemText(5, QApplication::translate("MainWindow", "25m", nullptr));
        band_cb->setItemText(6, QApplication::translate("MainWindow", "20m", nullptr));
        band_cb->setItemText(7, QApplication::translate("MainWindow", "17m", nullptr));
        band_cb->setItemText(8, QApplication::translate("MainWindow", "15m", nullptr));
        band_cb->setItemText(9, QApplication::translate("MainWindow", "12m", nullptr));
        band_cb->setItemText(10, QApplication::translate("MainWindow", "11m (CB)", nullptr));
        band_cb->setItemText(11, QApplication::translate("MainWindow", "10m", nullptr));
        band_cb->setItemText(12, QApplication::translate("MainWindow", "8m", nullptr));
        band_cb->setItemText(13, QApplication::translate("MainWindow", "6m", nullptr));
        band_cb->setItemText(14, QApplication::translate("MainWindow", "Full (1-60MHz)", nullptr));
        band_cb->setItemText(15, QApplication::translate("MainWindow", "HF (3-30MHz)", nullptr));
        band_cb->setItemText(16, QApplication::translate("MainWindow", "12-10m (25-30MHz)", nullptr));

        fstep_disp->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Points", nullptr));
        fend_disp->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "MHz", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Step", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "MHz", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "KHz", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "MHz", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "MHz", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "End", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QApplication::translate("MainWindow", "Centre", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Band", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Span", nullptr));
        useraw_chk->setText(QApplication::translate("MainWindow", "Use raw bridge data", nullptr));
        scanBtn->setText(QApplication::translate("MainWindow", "Scan", nullptr));
        scanDummyBtn->setText(QApplication::translate("MainWindow", "Test Data", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Plot", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "VSWR", nullptr));
        plotz_chk->setText(QApplication::translate("MainWindow", "Z", nullptr));
        plotr_chk->setText(QApplication::translate("MainWindow", "R", nullptr));
        plotx_chk->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "SWR Min:", nullptr));
        swr_min_disp->setText(QApplication::translate("MainWindow", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabScan), QApplication::translate("MainWindow", "Scan", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Frequency: ", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Interval: ", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "# Points", nullptr));
        freqMon->setSuffix(QApplication::translate("MainWindow", " MHz", nullptr));
        monInterval->setSuffix(QApplication::translate("MainWindow", " ms", nullptr));
        monRaw->setText(QApplication::translate("MainWindow", "Use raw bridge data", nullptr));
        monstartBtn->setText(QApplication::translate("MainWindow", "Start", nullptr));
        monstopBtn->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Plot", nullptr));
        monplotz_chk->setText(QApplication::translate("MainWindow", "Z", nullptr));
        monplotx_chk->setText(QApplication::translate("MainWindow", "X", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "VSWR", nullptr));
        monplotr_chk->setText(QApplication::translate("MainWindow", "R", nullptr));
        monStatus->setText(QApplication::translate("MainWindow", "#: 0  - SWR min: --", nullptr));
        monCursor->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabMonitor), QApplication::translate("MainWindow", "Monitor", nullptr));
        copyBtn->setText(QApplication::translate("MainWindow", "Copy Data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDataTable), QApplication::translate("MainWindow", "Data", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Notes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabNotes), QApplication::translate("MainWindow", "Info", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuLink->setTitle(QApplication::translate("MainWindow", "Link", nullptr));
        menuDevice->setTitle(QApplication::translate("MainWindow", "Device", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
