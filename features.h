#ifndef FEATURES_H
#define FEATURES_H

#include <QDialog>

namespace Ui {
class Features;
}

class Features : public QDialog
{
    Q_OBJECT

public:
    explicit Features(QWidget *parent = nullptr);
    ~Features();

private slots:
    void on_Prettifing_clicked();

    void on_toolButton_clicked();

    void on_toolButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Features *ui;
};

#endif // FEATURES_H
