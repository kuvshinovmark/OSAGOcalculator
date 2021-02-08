#include "introduction.h"
#include "ui_introduction.h"
#include <iostream>



Introduction::Introduction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Introduction)
{
    ui->setupUi(this);
}

Introduction::~Introduction()
{
    delete ui;
}

void Introduction::on_pushButton_clicked()
{
    close();
}
