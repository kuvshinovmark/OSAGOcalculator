 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "introduction.h"
#include "Calculation.h"
#include "AddFunctions.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Introduction q; //для вывода вступительного окна
    q.setWindowTitle("Instruction");
    q.setWindowIcon(QIcon("img/Icon.png"));
    //q.setWindowIcon(QIcon(":/resources/img/Icon.png"));
    q.setModal(1);
    q.exec();


    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_ButtonForCount_clicked()
{//Подсчет
    bool q = CheckCorrectInput(ui);//проверка на вменяемость данных, если данные некоректы (пока что только NULL, то подсчет не будет произведенн
    if(q==1){
        std::cout<<"V vivode NULL"<<std::endl;
        ui->ControlSumma->setText("Контрольная сумма");
        ui->ChecksumExplanation->setText("Пояснение контрольной суммы");
        ui->AdvaceWindow->setText("Возможные советы");
    }
    else{//если все введено хорошо
        QString km = ui->LineKM->text();//выборка тескста из LineKM
        double KM = CalculationKM(km.toDouble()); //Создание коэффициента и расчет его через функцию

        QString ko = ui->LineKO->text();
        double KO = CalculationKO(ko.toInt());

        QString kc = ui->LineKC->text();
        double KC = CalculationKC(kc.toInt());

        QString kt = ui->LineKT->text();
        double KT = CalculationKT(kt);

        QString kbm_now = ui->LineKBM_Now->text();
        QString kbm_koll = ui->LineKBM_Koll->text();
        //замена запятой на точку
        if(kbm_now[1]==',')kbm_now.replace(1,1,'.');
        double KBM = CalculationKBM(kbm_now.toDouble(),kbm_koll.toInt());

        QString kbc_age = ui->LineKBC_V->text();
        QString kbc_exp = ui->LineKBC_S->text();
        double KBC = CalculationKBC(kbc_age.toInt(),kbc_exp.toInt());

        QString bt = ui->LineBT->text();
        double BT = bt.toDouble();

        QString Vivod_1,Vivod_2;
        double Summa = BT * KBC * KBM * KT * KC * KO * KM;
        Vivod_1 = QString::number(BT) + " * " + QString::number(KT) + " * " +
                QString::number(KBM) + " * " + QString::number(KM) + " * " +
                QString::number(KO) + " * " + QString::number(KBC) + " * " +
                QString::number(KC) + " = " + QString::number(Summa);
        Vivod_2 = "Коэффициент " + QString::number(KT) + " был получен из значенией КТ." + '\n' +
                "Коэффициент " + QString::number(KBM) + " был получен из значенией KBM." + '\n' +
                "Коэффициент " + QString::number(KM) + " был получен из значенией KM." + '\n' +
                "Коэффициент " + QString::number(KO) + " был получен из значенией KO." + '\n' +
                "Коэффициент " + QString::number(KBC) + " был получен из значенией КВС." + '\n' +
                "Коэффициент " + QString::number(KC) + " был получен из значенией KC.";
        ui->ControlSumma->setText("Итог = " + QString::number(Summa));//вывод в контрольную сумму
        ui->ChecksumExplanation->setText(Vivod_1 + '\n' + '\n' + Vivod_2);//вывод в пояснение для контрольной суммы
        DisplayingAdvice(ui,Summa);
    }
}

void MainWindow::on_ButtonForErasing_clicked()
{//обновление
    ui->LineKT->clear();
    ui->LineKBM_Now->clear();
    ui->LineKBM_Koll->clear();
    ui->LineKM->clear();
    ui->LineKO->clear();
    ui->LineKBC_V->clear();
    ui->LineKBC_S->clear();
    ui->LineKC->clear();
    ui->LineBT->clear();
    ui->ControlSumma->setText("Контрольная сумма");
    ui->ChecksumExplanation->setText("Пояснение контрольной суммы");
    ui->AdvaceWindow->setText("Возможные советы");
}
void MainWindow::on_pushButton_clicked(){}
void MainWindow::on_pushButton_2_clicked(){}
void MainWindow::on_pushButton_3_clicked(){}
