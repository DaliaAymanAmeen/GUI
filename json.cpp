#include "json.h"
#include "ui_json.h"
#include <mainwindow.h>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include<features.h>

JSON::JSON(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JSON)
{

    setWindowFlags(windowFlags() | Qt::CustomizeWindowHint |
                                   Qt::WindowMinimizeButtonHint |
                                   Qt::WindowMaximizeButtonHint |
                                   Qt::WindowCloseButtonHint);

    ui->setupUi(this);
}

JSON::~JSON()
{
    delete ui;
}

void JSON::on_pushButton_clicked()
{
    QFile file ("json.txt");

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
       QMessageBox::warning(this,"title","file not open");
    }

    QTextStream in (&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}
