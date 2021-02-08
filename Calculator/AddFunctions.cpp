#include <iostream>
#include "AddFunctions.h"
#include "Calculation.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QStyle>



//для использования ui в функции
#include "mainwindow.h"
#include "ui_mainwindow.h"
bool NumbersPerLine(QString Line){//возвращает 1 если в строке есть числа
    bool output = 0;
    if(Line.contains('0'))output = 1;
    if(Line.contains('1'))output = 1;
    if(Line.contains('2'))output = 1;
    if(Line.contains('3'))output = 1;
    if(Line.contains('4'))output = 1;
    if(Line.contains('5'))output = 1;
    if(Line.contains('6'))output = 1;
    if(Line.contains('7'))output = 1;
    if(Line.contains('8'))output = 1;
    if(Line.contains('9'))output = 1;
    return output;
}

void DesignForMess(QMessageBox &masBox){//функция для установки дизайна для вызывающегося qmessagebox
                                        //универсальна для всех ошибок
    masBox.setStyleSheet("QMessageBox"
                         "{"
                         "background-color: #e6ebff;"
                         "font: 18px Verdana;"
                         "text-align: center;"
                         "}"
                         "QPushButton"
                         "{"
                             "background-color: #89a3bc;"
                             "border-radius: 7px;"
                             "height: 30px;"
                             "width: 100px;"
                             "color: #e6ebff;"
                             "font: 16px Verdana;"
                         "}"
                         );
    masBox.setWindowTitle("Внимание!");
    masBox.setWindowIcon(QIcon("img/error.png"));
}


bool CheckCorrectInput(Ui::MainWindow * ui){
    QString LineBT = ui->LineBT->text();
    QString LineKM = ui->LineKM->text();
    QString LineKO = ui->LineKO->text();
    QString LineKC = ui->LineKC->text();
    QString LineKT = ui->LineKT->text();
    QString LineKBM_Now = ui->LineKBM_Now->text();
    if(LineKBM_Now[1]==',')LineKBM_Now.replace(1,1,'.');
    QString LineKBM_Koll = ui->LineKBM_Koll->text();
    QString LineKBC_Age = ui->LineKBC_V->text();
    QString LineKBC_Exp = ui->LineKBC_S->text();
    bool output = 0;
    if((LineKM=="")||(LineBT== "")||(LineKO== "")||(LineKC== "")||(LineKT== "")||(LineKBM_Now== "")||(LineKBM_Koll== "")||(LineKBC_Age== "")||(LineKBC_Exp== "")){
            output = 1;
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Пожалуйста, введите данные во все поля</font>");
            masBox.exec();
        }
        else{
        if(!((LineKM.toDouble() >= 1)&&(LineKM.toDouble() <= 999))){//если в поле что-то такое то вылетает окошко с ошибкой и все к началу отходит
            output = 1;
            ui->LineKM->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KM</font>");
            masBox.exec();
        }
        if(!((LineKO.toInt()>=1)&&(LineKO.toInt()<=10))){
            output = 1;
            ui->LineKO->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KO</font>");
            masBox.exec();
        }
        if(!((LineKC.toInt()>=1)&&(LineKC.toInt()<=100))){
            output = 1;
            ui->LineKC->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KC</font>");
            masBox.exec();
        }
        if((LineKT.contains(' '))||(LineKT.isEmpty())||(NumbersPerLine(LineKT))){
            output = 1;
            ui->LineKT->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KT</font>");
            masBox.exec();
        }
        if((CalculationKT(LineKT) == 10.0)&&!((LineKT.contains(' '))||(LineKT.isEmpty())||(NumbersPerLine(LineKT)))){//если функцияя для расчета не нашла город в файле + есди 1 проверка на воод прошла успешно
            output = 1;
            ui->LineKT->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Извините, такого города нет в базе. Пожалуйста, попробуйте ввести ближайший город или центр региона.</font>");

            masBox.exec();
        }
        if(!((LineKBM_Now.toDouble()>=0.5)&&(LineKBM_Now.toDouble()<=2.45))){
            output = 1;
            ui->LineKBM_Now->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KBM в данный момент</font>");
            masBox.exec();
        }
        if(!((LineKBM_Koll.toInt()>=1)&&(LineKBM_Koll.toInt()<=100))&&!(LineKBM_Koll=='0')){
            output = 1;
            ui->LineKBM_Koll->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KBM количества возмещений</font>");
            masBox.exec();
        }
        if(!((LineKBC_Age.toInt()>=16)&&(LineKBC_Age.toInt()<=150))){
            output = 1;
            ui->LineKBC_V->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KBC возраста</font>");
            masBox.exec();
        }
        if(!((LineKBC_Exp.toInt()>=1)&&(LineKBC_Exp.toInt()<=150))&&!(LineKBC_Exp=='0')){
            output = 1;
            ui->LineKBC_S->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента KBC опыта</font>");
            masBox.exec();
        }
        if(!((LineBT.toInt()>=1)&&(LineBT.toInt()<=100000))){
            output = 1;
            ui->LineBT->clear();
            QMessageBox masBox;
            DesignForMess(masBox);
            masBox.setText("<font color=#335e89 face=Verdana;>Вводятся неверные данные для расчета коэффициента BT</font>");
            masBox.exec();
        }
    }
    return output;
}

void DisplayingAdvice(Ui::MainWindow * ui, double Fsumma){
    QFile file("data/ForKM.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading");
    }
    QString km = ui->LineKM->text();
    double KM_koef_f = CalculationKM(km.toDouble());
    double KM_koef_s = CalculationKM(km.toDouble());
    QString kc = ui->LineKC->text();
    double KC_koef_f = CalculationKC(kc.toInt());
    double KC_koef_s = CalculationKC(kc.toInt());
    int KC = kc.toInt();
    double KM = km.toDouble();
    QTextStream in(&file);
    QString output;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QString Coef;
        line = line.right(line.size()-4);
        line = line.left(3);
        double Diff = KM - line.toDouble();
        if((Diff<=10)&&(KM>line.toDouble())){
            //std::cout<<line.toStdString()<<std::endl;
            output = ("Если вы снизите мощность автомобиля хотя-бы на " + QString::number(Diff) +"лс коэфициент КМ будет заметно ниже."+'\n');
            KM_koef_s = CalculationKM(km.toDouble()-Diff);
            break;
        }
    }
    if((KC>3)&&(KC<=6)){
        output = (output + "Если вы удобно оформить страховку на 3 месяца, вы сильно снизите коэфициент КС."+'\n');
        KC_koef_s = CalculationKC(3);
    }
    double summ = Fsumma/(KM_koef_f*KC_koef_f);
    summ = summ * KM_koef_s * KC_koef_s;
    if(!(output==NULL)){

        output = (output + "Тогда ваша контрольная сумма будет равна "+QString::number(summ)+" рублей");
    }
    ui->AdvaceWindow->setText(output);
    file.close();
}
