#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "QMessageLoger.h"
#include <QString>
#include "person.h"

#include "person.h"

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

    qInfo(logInfo()) << ui->lineEdit->text() << ui->lineEdit_2->text();

    qDebug(logDebug()) << "Debug Button";//Логирование нажатия кнопки.


    QString first_name = ui->lineEdit->text();
    QString second_name =  ui->lineEdit_2->text();

    person(first_name, second_name);

}

//Прописать сохранение файла через диалоговое окно(по возможности), если нет то как в примере по заданному пути

void MainWindow::on_lineEdit_editingFinished()
{
    //first
    qInfo(logInfo()) << ui->lineEdit->text();
    //QString first_name =ui->lineEdit->text() ;
    qInfo(logInfo()) <<"firstname";
}

void MainWindow::on_lineEdit_2_editingFinished()
{
    //secod
    qInfo(logInfo()) << ui->lineEdit_2->text();
    //QString second_name = ui->lineEdit_2->text();
    qInfo(logInfo()) << "secondname";
}
