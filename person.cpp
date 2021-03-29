#include "person.h"
#include <QString>
#include <QLineEdit>
#include <iostream>
#include "mainwindow.h"
#include "QMessageLoger.h"

using namespace std;

person::person(QString first_name, QString second_name)
{
    //first_name = "FN";
    //second_name = "SN";
    QString full_name =  first_name + " " + second_name ;
    qInfo(logInfo()) << full_name;




    //qInfo(logInfo()) << first_name ;

    //
    //Написать 3 метода
    //first_name()
    //second_name()
    //full_name()
    //
    //first и second отдают данные
    //
    //full формирует полное имяпольз (имя+фамилия)
    //
}
