/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *ControlSumma;
    QTextBrowser *ChecksumExplanation;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *ButtonForErasing;
    QPushButton *ButtonForCount;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *Layout_BT;
    QLabel *LabelBT;
    QLineEdit *LineBT;
    QHBoxLayout *Layout_KT;
    QLabel *LabelKT;
    QListWidget *listWidget;
    QHBoxLayout *Layout_KBM_Now;
    QLabel *LabelKBM_Now;
    QLineEdit *LineKBM_Now;
    QHBoxLayout *Layout_KBM_Koll;
    QLabel *LabelKBM_Koll;
    QLineEdit *LineKBM_Koll;
    QHBoxLayout *Layout_KM;
    QLabel *LabelKM;
    QLineEdit *LineKM;
    QHBoxLayout *Layout_KO;
    QLabel *LabelKO;
    QLineEdit *LineKO;
    QHBoxLayout *Layout_KBC_V;
    QLabel *LabelKBC_V;
    QLineEdit *LineKBC_V;
    QHBoxLayout *Layout_KBC_S;
    QLabel *LabelKBC_S;
    QLineEdit *LineKBC_S;
    QHBoxLayout *Layout_KC;
    QLabel *LabelKC;
    QLineEdit *LineKC;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *AdvaceWindow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(934, 516);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #e6ebff;\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QFont font;
        font.setKerning(true);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ControlSumma = new QLabel(groupBox_2);
        ControlSumma->setObjectName(QString::fromUtf8("ControlSumma"));
        ControlSumma->setStyleSheet(QString::fromUtf8("font: 16px Verdana;\n"
"color: #335e89;"));

        verticalLayout_3->addWidget(ControlSumma);

        ChecksumExplanation = new QTextBrowser(groupBox_2);
        ChecksumExplanation->setObjectName(QString::fromUtf8("ChecksumExplanation"));
        ChecksumExplanation->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        verticalLayout_3->addWidget(ChecksumExplanation);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ButtonForErasing = new QPushButton(groupBox_2);
        ButtonForErasing->setObjectName(QString::fromUtf8("ButtonForErasing"));
        ButtonForErasing->setStyleSheet(QString::fromUtf8("background-color: #89a3bc;\n"
"border-radius: 7px;\n"
"height: 30px;\n"
"color: #e6ebff;\n"
"font: 16px Verdana;\n"
""));

        horizontalLayout_5->addWidget(ButtonForErasing);

        ButtonForCount = new QPushButton(groupBox_2);
        ButtonForCount->setObjectName(QString::fromUtf8("ButtonForCount"));
        ButtonForCount->setStyleSheet(QString::fromUtf8("background-color: #89a3bc;\n"
"border-radius: 7px;\n"
"height: 30px;\n"
"color: #e6ebff;\n"
"font: 16px Verdana;\n"
""));

        horizontalLayout_5->addWidget(ButtonForCount);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Layout_BT = new QHBoxLayout();
        Layout_BT->setObjectName(QString::fromUtf8("Layout_BT"));
        LabelBT = new QLabel(groupBox);
        LabelBT->setObjectName(QString::fromUtf8("LabelBT"));
        LabelBT->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_BT->addWidget(LabelBT);

        LineBT = new QLineEdit(groupBox);
        LineBT->setObjectName(QString::fromUtf8("LineBT"));
        LineBT->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_BT->addWidget(LineBT);


        verticalLayout->addLayout(Layout_BT);

        Layout_KT = new QHBoxLayout();
        Layout_KT->setObjectName(QString::fromUtf8("Layout_KT"));
        LabelKT = new QLabel(groupBox);
        LabelKT->setObjectName(QString::fromUtf8("LabelKT"));
        LabelKT->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KT->addWidget(LabelKT);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        Layout_KT->addWidget(listWidget);


        verticalLayout->addLayout(Layout_KT);

        Layout_KBM_Now = new QHBoxLayout();
        Layout_KBM_Now->setObjectName(QString::fromUtf8("Layout_KBM_Now"));
        LabelKBM_Now = new QLabel(groupBox);
        LabelKBM_Now->setObjectName(QString::fromUtf8("LabelKBM_Now"));
        LabelKBM_Now->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KBM_Now->addWidget(LabelKBM_Now);

        LineKBM_Now = new QLineEdit(groupBox);
        LineKBM_Now->setObjectName(QString::fromUtf8("LineKBM_Now"));
        LineKBM_Now->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_KBM_Now->addWidget(LineKBM_Now);


        verticalLayout->addLayout(Layout_KBM_Now);

        Layout_KBM_Koll = new QHBoxLayout();
        Layout_KBM_Koll->setObjectName(QString::fromUtf8("Layout_KBM_Koll"));
        LabelKBM_Koll = new QLabel(groupBox);
        LabelKBM_Koll->setObjectName(QString::fromUtf8("LabelKBM_Koll"));
        LabelKBM_Koll->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KBM_Koll->addWidget(LabelKBM_Koll);

        LineKBM_Koll = new QLineEdit(groupBox);
        LineKBM_Koll->setObjectName(QString::fromUtf8("LineKBM_Koll"));
        LineKBM_Koll->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_KBM_Koll->addWidget(LineKBM_Koll);


        verticalLayout->addLayout(Layout_KBM_Koll);

        Layout_KM = new QHBoxLayout();
        Layout_KM->setObjectName(QString::fromUtf8("Layout_KM"));
        LabelKM = new QLabel(groupBox);
        LabelKM->setObjectName(QString::fromUtf8("LabelKM"));
        LabelKM->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KM->addWidget(LabelKM);

        LineKM = new QLineEdit(groupBox);
        LineKM->setObjectName(QString::fromUtf8("LineKM"));
        LineKM->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_KM->addWidget(LineKM);


        verticalLayout->addLayout(Layout_KM);

        Layout_KO = new QHBoxLayout();
        Layout_KO->setObjectName(QString::fromUtf8("Layout_KO"));
        LabelKO = new QLabel(groupBox);
        LabelKO->setObjectName(QString::fromUtf8("LabelKO"));
        LabelKO->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KO->addWidget(LabelKO);

        LineKO = new QLineEdit(groupBox);
        LineKO->setObjectName(QString::fromUtf8("LineKO"));
        LineKO->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_KO->addWidget(LineKO);


        verticalLayout->addLayout(Layout_KO);

        Layout_KBC_V = new QHBoxLayout();
        Layout_KBC_V->setObjectName(QString::fromUtf8("Layout_KBC_V"));
        LabelKBC_V = new QLabel(groupBox);
        LabelKBC_V->setObjectName(QString::fromUtf8("LabelKBC_V"));
        LabelKBC_V->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KBC_V->addWidget(LabelKBC_V);

        LineKBC_V = new QLineEdit(groupBox);
        LineKBC_V->setObjectName(QString::fromUtf8("LineKBC_V"));
        LineKBC_V->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_KBC_V->addWidget(LineKBC_V);


        verticalLayout->addLayout(Layout_KBC_V);

        Layout_KBC_S = new QHBoxLayout();
        Layout_KBC_S->setObjectName(QString::fromUtf8("Layout_KBC_S"));
        LabelKBC_S = new QLabel(groupBox);
        LabelKBC_S->setObjectName(QString::fromUtf8("LabelKBC_S"));
        LabelKBC_S->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KBC_S->addWidget(LabelKBC_S);

        LineKBC_S = new QLineEdit(groupBox);
        LineKBC_S->setObjectName(QString::fromUtf8("LineKBC_S"));
        LineKBC_S->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_KBC_S->addWidget(LineKBC_S);


        verticalLayout->addLayout(Layout_KBC_S);

        Layout_KC = new QHBoxLayout();
        Layout_KC->setObjectName(QString::fromUtf8("Layout_KC"));
        LabelKC = new QLabel(groupBox);
        LabelKC->setObjectName(QString::fromUtf8("LabelKC"));
        LabelKC->setStyleSheet(QString::fromUtf8("font: 14px Verdana;\n"
"color: #335e89;"));

        Layout_KC->addWidget(LabelKC);

        LineKC = new QLineEdit(groupBox);
        LineKC->setObjectName(QString::fromUtf8("LineKC"));
        LineKC->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        Layout_KC->addWidget(LineKC);


        verticalLayout->addLayout(Layout_KC);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_2);

        AdvaceWindow = new QTextBrowser(groupBox_3);
        AdvaceWindow->setObjectName(QString::fromUtf8("AdvaceWindow"));
        AdvaceWindow->setStyleSheet(QString::fromUtf8("font: 12px Verdana;\n"
"color: #335e89;"));

        verticalLayout_4->addWidget(AdvaceWindow);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 934, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QString());
        ControlSumma->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214\320\275\320\260\321\217 \321\201\321\203\320\274\320\274\320\260", nullptr));
        ChecksumExplanation->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">\320\237\320\276\321\217\321\201\320\275\320\265\320\275\320\270\320\265 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\214\320\275\320\276\320\271 \321\201\321\203\320\274\320\274\321\213 </span></p></body></html>", nullptr));
        ButtonForErasing->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        ButtonForCount->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\321\207\320\265\321\202", nullptr));
        groupBox->setTitle(QString());
        LabelBT->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\202\320\260\321\200\320\270\321\204 (BT)", nullptr));
        LineBT->setText(QString());
        LineBT->setPlaceholderText(QCoreApplication::translate("MainWindow", "2700", nullptr));
        LabelKT->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\200\321\200\320\270\321\202\320\276\321\200\320\270\321\217 (\320\232\320\242) ", nullptr));
        LabelKBM_Now->setText(QCoreApplication::translate("MainWindow", "\320\232\320\221\320\234 \320\262 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 (\320\232\320\221\320\234)", nullptr));
        LineKBM_Now->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.65", nullptr));
        LabelKBM_Koll->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\321\213\321\205 \320\262\320\276\320\267\320\274\320\265\321\211\320\265\320\275\320\270\320\271 (\320\232\320\221\320\234)", nullptr));
        LineKBM_Koll->setPlaceholderText(QCoreApplication::translate("MainWindow", "1", nullptr));
        LabelKM->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217 (\320\232\320\234)", nullptr));
        LineKM->setPlaceholderText(QCoreApplication::translate("MainWindow", "79", nullptr));
        LabelKO->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\273\320\270\321\206 \320\262 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\320\272\320\265 (\320\232\320\236)", nullptr));
        LineKO->setPlaceholderText(QCoreApplication::translate("MainWindow", "2", nullptr));
        LabelKBC_V->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202 (\320\232\320\222\320\241)", nullptr));
        LineKBC_V->setText(QString());
        LineKBC_V->setPlaceholderText(QCoreApplication::translate("MainWindow", "23", nullptr));
        LabelKBC_S->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\266 (\320\232\320\222\320\241)", nullptr));
        LineKBC_S->setText(QString());
        LineKBC_S->setPlaceholderText(QCoreApplication::translate("MainWindow", "4", nullptr));
        LabelKC->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\320\272\320\270 (\320\232\320\241)", nullptr));
        LineKC->setPlaceholderText(QCoreApplication::translate("MainWindow", "12", nullptr));
        groupBox_3->setTitle(QString());
        AdvaceWindow->setMarkdown(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\320\274\320\276\320\266\320\275\321\213\320\265 \321\201\320\276\320\262\320\265\321\202\321\213\n"
"\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
