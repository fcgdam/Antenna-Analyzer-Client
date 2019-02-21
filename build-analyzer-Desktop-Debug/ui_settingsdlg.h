/********************************************************************************
** Form generated from reading UI file 'settingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDLG_H
#define UI_SETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *SettingsTabs;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *swr_bw_max;
    QSpacerItem *verticalSpacer;
    QDoubleSpinBox *Z_Target;
    QDoubleSpinBox *swr_max;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDlg)
    {
        if (SettingsDlg->objectName().isEmpty())
            SettingsDlg->setObjectName(QString::fromUtf8("SettingsDlg"));
        SettingsDlg->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/128/antenna-charge-radio-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDlg->setWindowIcon(icon);
        SettingsDlg->setModal(true);
        verticalLayout = new QVBoxLayout(SettingsDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SettingsTabs = new QTabWidget(SettingsDlg);
        SettingsTabs->setObjectName(QString::fromUtf8("SettingsTabs"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        swr_bw_max = new QDoubleSpinBox(tab);
        swr_bw_max->setObjectName(QString::fromUtf8("swr_bw_max"));
        swr_bw_max->setDecimals(1);
        swr_bw_max->setMinimum(1.000000000000000);
        swr_bw_max->setMaximum(9.900000000000000);
        swr_bw_max->setSingleStep(0.100000000000000);
        swr_bw_max->setValue(1.500000000000000);

        gridLayout->addWidget(swr_bw_max, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(357, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 3);

        Z_Target = new QDoubleSpinBox(tab);
        Z_Target->setObjectName(QString::fromUtf8("Z_Target"));
        Z_Target->setMaximum(9999.989999999999782);
        Z_Target->setValue(50.000000000000000);

        gridLayout->addWidget(Z_Target, 2, 1, 1, 1);

        swr_max = new QDoubleSpinBox(tab);
        swr_max->setObjectName(QString::fromUtf8("swr_max"));
        swr_max->setDecimals(1);
        swr_max->setMinimum(3.000000000000000);
        swr_max->setMaximum(100.000000000000000);
        swr_max->setSingleStep(0.100000000000000);
        swr_max->setValue(10.000000000000000);

        gridLayout->addWidget(swr_max, 0, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        SettingsTabs->addTab(tab, QString());

        verticalLayout->addWidget(SettingsTabs);

        buttonBox = new QDialogButtonBox(SettingsDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDlg, SLOT(reject()));

        SettingsTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDlg);
    } // setupUi

    void retranslateUi(QDialog *SettingsDlg)
    {
        SettingsDlg->setWindowTitle(QApplication::translate("SettingsDlg", "Settings", nullptr));
        label_2->setText(QApplication::translate("SettingsDlg", "Target Impedence", nullptr));
        label_3->setText(QApplication::translate("SettingsDlg", "\316\251", nullptr));
        label->setText(QApplication::translate("SettingsDlg", "SWR Bandwidth Limit", nullptr));
        label_4->setText(QApplication::translate("SettingsDlg", "SWR Max", nullptr));
        SettingsTabs->setTabText(SettingsTabs->indexOf(tab), QApplication::translate("SettingsDlg", "General", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDlg: public Ui_SettingsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDLG_H
