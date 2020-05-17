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
    QPixmap bkgnd(":/img/img/background-ppt-background-2003905.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


}

Features::~Features()
{
    delete ui;
}



void Features::on_Prettifing_clicked()
{
    Prettifing Prettifing ;
    Prettifing.setModal(true);
    Prettifing.exec();

}
