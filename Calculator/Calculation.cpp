#include <iostream>
#include "Calculation.h"
#include <QFile>
#include <QTextStream>

//#include <QTextCodec>
double CalculationKM(double Power){
    QFile file("data/ForKM.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading"); // если файл не найден, то выводим предупреждение и завершаем выполнение программы
        return 1;
    }
    QTextStream in(&file);// Создаем входящий поток, из которого будут считываться данные, и связываем его с нашим файлом
    // Считываем файл строка за строкой
    double output;
    while (!in.atEnd()) { // метод atEnd() возвращает true, если в потоке больше нет данных для чтения
        //Считываем одну строку, которая состоит из 3 чисел, в цикле получаем эти числа это 1,2 коэффициент и множитель(который мы выведим
        //потом сравниваем, если вводимое число входит в границы, то мы нашли коэффициент!!!
        QString line = in.readLine(); // метод readLine() считывает одну строку из потока
        QString Coef1, Coef2, Mnoz;
        int a1 = 0;
        int chetchik = 0;
        for(int a = 0; a < line.length(); a++){//Цикл для Ввода Coef1 Coef2 и Mnoz
            if(line[a]==' '){
                if(chetchik==0){
                    Coef1 = line.left(a);
                    a1 = a;
                    chetchik++;
                }
                else if(chetchik==1){
                    Coef2 = line.mid(a1+1, a1);
                    a1 = a;
                    chetchik++;
                }
                if(chetchik==2){
                    Mnoz = line.mid(a1+1,a);
                }
            }
        }
        double coef1 = Coef1.toDouble();
        double coef2 = Coef2.toDouble();
        double mnoz = Mnoz.toDouble();
        if((Power>=coef1)&&(Power<=coef2)){
            output = mnoz;
        }
        //использовал для теста
        //std::cout<<" Stroka = "<<line.toStdString()<<std::endl;
        //std::cout<<"Corf1 ="<<Coef1.toStdString()<<", Coef2 ="<<Coef2.toStdString()<<", Mnoz ="<<Mnoz.toStdString()<<"."<<std::endl;
    }
    file.close(); // Закрываем файл
    return output;
}

double CalculationKO(int Koll){
    double output;
    if (Koll != 1){
        output = 1.94;
    }
    else{
       output = 1;
    }
    return output;
}

double CalculationKC(int KollMonths){
    QFile file("data/ForKC.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading"); // если файл не найден, то выводим предупреждение и завершаем выполнение программы
        return 1;
    }
    double output = 1;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        QString Koll, Mnoz;
        Koll = line.left(2);
        Mnoz = line.right(4);
        int koll = Koll.toInt();
        double mnoz = Mnoz.toDouble();
        if(koll == KollMonths){
            output = mnoz;
            break;
        }
        if(koll > 10){
            break;
        }
        //std::cout<<"String = "<<line.toStdString()<<std::endl;
        //std::cout<<"Koll ="<<Koll.toStdString()<<". "<<"Mnoz ="<<Mnoz.toStdString()<<"."<<std::endl;
    }
    return output;
}

double CalculationKT(QString City){
    QFile file("data/ForKT.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading"); // если файл не найден, то выводим предупреждение и завершаем выполнение программы
        return 1;
    }
    City = City.toLower();
    double output = 10;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        QString Gorod, Mnoz;
        Gorod = line.left(line.size()-5);
        Mnoz = line.right(4);
        if(City == Gorod){
            output = Mnoz.toDouble();
        }
        //std::cout<<"String = "<<line.toStdString()<<std::endl;
        //std::cout<<"Gorod ="<<Gorod.toStdString()<<". "<<"Mnoz ="<<Mnoz.toStdString()<<"."<<std::endl;
    }
    return output;
}

double CalculationKBM(double Now, int Koll){
    QFile file("data/ForKBM.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading"); // если файл не найден, то выводим предупреждение и завершаем выполнение программы
        return 1;
    }
    double output = 10;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        QString NowInFile = line.left(4);
        if(NowInFile.toDouble()==Now){
            QString kf0, kf1, kf2, kf3, kf4;
            line = line.right(line.size()-5);
            kf0 = line.left(4);
            line = line.right(line.size()-5);
            kf1 = line.left(4);
            line = line.right(line.size()-5);
            kf2 = line.left(4);
            line = line.right(line.size()-5);
            kf3 = line.left(4);
            line = line.right(line.size()-5);
            kf4 = line.left(4);
            switch (Koll) {
                case 0:
                    output = kf0.toDouble();
                break;
                case 1:
                    output = kf1.toDouble();
                break;
                case 2:
                    output = kf2.toDouble();
                break;
                case 3:
                    output = kf3.toDouble();
                break;
                default:
                    output = kf4.toDouble();

            }
            //std::cout<<"Now:"<<NowInFile.toStdString()<<". KF0:"<<kf0.toStdString()<<". KF1:"<<kf1.toStdString()<<". KF2:"<<kf2.toStdString()<<". KF3:"<<kf3.toStdString()<<". KF4:"<<kf4.toStdString()<<"."<<std::endl;
            break;
        }
    }
    //std::cout<<"Out:"<<output<<"."<<std::endl;
    return output;
}

double CalculationKBC(int Age, int Experience){
    QFile file("data/ForKBC.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading"); // если файл не найден, то выводим предупреждение и завершаем выполнение программы
        return 1;
    }
    int ExpNumber;//номер столбца в таблице для рассчета коеф
    switch (Experience) {
    case 0:
        ExpNumber=0;
        break;
    case 1:
        ExpNumber=1;
        break;
    case 2:
        ExpNumber=2;
        break;
    case 3:
        ExpNumber=3;
        break;
    case 4:
        ExpNumber=3;
        break;
    case 5:
        ExpNumber=4;
        break;
    case 6:
        ExpNumber=4;
        break;
    case 7:
        ExpNumber=5;
        break;
    case 8:
        ExpNumber=5;
        break;
    case 9:
        ExpNumber=5;
        break;
    case 10:
        ExpNumber=6;
        break;
    case 11:
        ExpNumber=6;
        break;
    case 12:
        ExpNumber=6;
        break;
    case 13:
        ExpNumber=6;
        break;
    case 14:
        ExpNumber=6;
        break;
    default:
        ExpNumber=7;
        break;
    }
    double output = 10;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        QString age1,age2;
        age1 = line.left(2);
        line = line.right(line.size()-3);
        age2 = line.left(2);
        line = line.right(line.size()-3);
        if(age2=="00")age2="150";
        //std::cout<<"Str: Age1:"<<age1.toStdString()<<". Age2:"<<age2.toStdString()<<"."<<std::endl;
        if((Age>=age1.toInt())&&(Age<=age2.toInt())){
            for(int a=0;a<=8;a++){
                QString koef = line.left(4);
                line=line.right(line.size()-5);
                //std::cout<<"Koef"<<a<<":"<<koef.toStdString()<<"."<<std::endl;
                if(ExpNumber==a){
                    output=koef.toDouble();
                    break;
                }
            }
            break;
        }
    }

    //std::cout<<"Out:"<<output<<"."<<std::endl;
    return output;
}
