#include "introduction.h"
#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Calculator");
    w.setWindowIcon(QIcon("img/Icon.png"));
    //w.setWindowIcon(QIcon(":/resources/img/Icon.png"));
    w.show();
    return a.exec();
}
