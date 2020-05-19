#ifndef PRETTIFING_H
#define PRETTIFING_H

#include <QDialog>


namespace Ui {
class Prettifing;
}

class Prettifing : public QDialog
{
    Q_OBJECT

public:
    explicit Prettifing(QWidget *parent = nullptr);
    ~Prettifing();

private slots:
    void on_fromatting_clicked();

private:
    Ui::Prettifing *ui;
};


#endif // PRETTIFING_H
