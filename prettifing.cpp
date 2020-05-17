#include "prettifing.h"
#include "ui_prettifing.h"
#include<QMessageBox>
#include <QTextStream>
#include <QFile>
#include <mainwindow.h>
#include<features.h>

Prettifing::Prettifing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prettifing)
{

    setWindowFlags(windowFlags() | Qt::CustomizeWindowHint |
                                   Qt::WindowMinimizeButtonHint |
                                   Qt::WindowMaximizeButtonHint |
                                   Qt::WindowCloseButtonHint);

    ui->setupUi(this);
}

Prettifing::~Prettifing()
{
    delete ui;
}

void Prettifing::on_fromatting_clicked()
{
    QFile file ("C:/Users/user/Documents/build-test-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/FinalOutput.txt");

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
       QMessageBox::warning(this,"title","file not open");
    }

    QTextStream in (&file);
    QString text = in.readAll();
    ui->fromatting_2->setPlainText(text);
    file.close();
}
