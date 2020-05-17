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

private:
    Ui::Features *ui;
};

#endif // FEATURES_H
