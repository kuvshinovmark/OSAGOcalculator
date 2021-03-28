/********************************************************************************
** Form generated from reading UI file 'introduction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCTION_H
#define UI_INTRODUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Introduction
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Introduction)
    {
        if (Introduction->objectName().isEmpty())
            Introduction->setObjectName(QString::fromUtf8("Introduction"));
        Introduction->resize(599, 385);
        Introduction->setStyleSheet(QString::fromUtf8("background-color: #e6ebff;"));
        verticalLayout = new QVBoxLayout(Introduction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Introduction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 16px Verdana;\n"
"color: #335e89;"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(Introduction);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #89a3bc;\n"
"border-radius: 10px;\n"
"height: 50px;\n"
"color: #e6ebff;\n"
"font: 16px Verdana;\n"
""));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Introduction);

        QMetaObject::connectSlotsByName(Introduction);
    } // setupUi

    void retranslateUi(QDialog *Introduction)
    {
        Introduction->setWindowTitle(QCoreApplication::translate("Introduction", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Introduction", "<style>\n"
"h1{\n"
"font:Verdana;\n"
"font-weight:500;\n"
"}\n"
"p{\n"
"\n"
"}\n"
"</style>\n"
"\n"
"\n"
"<h1 align=\"center\">Calculator OSAGO</h1><br>\n"
"<p align=\"center\">\320\224\320\273\321\217 \320\277\320\276\320\264\321\201\321\207\320\265\321\202\320\260 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\320\270 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\320\272\320\270 OSAGO<br>\320\262\320\260\320\274 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\273\321\217 \321\200\320\260\321\201\321\207\320\265\321\202\320\260 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\320\276\320\262,<br> \320\264\320\273\321\217 \320\262\320\260\321\210\320\265\320\263\320\276 \321\203\320\264\320\276\320\261\321\201\321\202\320\262\320\260 \320\262 \320\277\320\276\320\273\321\217\321\205 \320\262\320\262\320"
                        "\276\320\264\320\260 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\321\213 \320\277\321\200\320\270\320\274\320\265\321\200\321\213 \320\264\320\260\320\275\320\275\321\213\321\205.<br>\320\237\320\276\321\201\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\320\264\321\201\321\207\320\270\321\202\320\260\320\265\321\202 \320\262\320\260\320\274 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\320\272\320\270. </p>\n"
"", nullptr));
        pushButton->setText(QCoreApplication::translate("Introduction", "\320\234\321\213 \320\276\320\267\320\275\320\260\320\272\320\276\320\274\320\270\320\273\320\270\321\201\321\214!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Introduction: public Ui_Introduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCTION_H
