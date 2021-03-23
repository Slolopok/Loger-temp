#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "QMessageLoger.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

   // return  ;
//    char var = ui->lineEdit->text();
    //ui->lineEdit->text().to
    //char nem[256]=ui->lineEdit->text();
    qInfo(logInfo()) << ui->lineEdit->text() << ui->lineEdit_2->text();
    //считать имя
    //считать фамилию
    //Сохранить полученные данные в переменную(в две)
    //Прописать выделение в лог файл обе переменные, чтобы их записало в лог файл

    qDebug(logDebug()) << "Debug Button";//Логирование нажатия кнопки.
}

//Прописать сохранение файла через диалоговое окно(по возможности), если нет то как в примере по заданному пути
