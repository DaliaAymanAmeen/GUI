#ifndef QUERIES_H
#define QUERIES_H

#include <QDialog>

namespace Ui {
class Queries;
}

class Queries : public QDialog
{
    Q_OBJECT

public:
    explicit Queries(QWidget *parent = nullptr);
    ~Queries();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Queries *ui;
};

#endif // QUERIES_H
