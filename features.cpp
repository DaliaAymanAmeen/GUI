#include "features.h"
#include "ui_features.h"
#include <mainwindow.h>
#include <prettifing.h>
#include<QMessageBox>
#include <QTextStream>
#include <QFile>

Features::Features(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Features)
{
    setWindowFlags(windowFlags() | Qt::CustomizeWindowHint |
                                   Qt::WindowMinimizeButtonHint |
                                   Qt::WindowMaximizeButtonHint |
                                   Qt::WindowCloseButtonHint);


    ui->setupUi(this);
    QPixmap bkgnd(":/img/img/photo-1483401757487-2ced3fa77952.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


}

Features::~Features()
{
    delete ui;
}






void Features::on_pushButton_clicked()
{

    Prettifing Prettifing ;
    Prettifing.setModal(true);
    Prettifing.exec();
}

void Features::on_pushButton_2_clicked() //Qu
{
     QMessageBox::about(this, "Test","test" );
}


void Features::on_pushButton_4_clicked()
{
    QMessageBox::about(this, "Test","test" );
}
