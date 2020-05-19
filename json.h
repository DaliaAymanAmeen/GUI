#ifndef JSON_H
#define JSON_H

#include <QDialog>

namespace Ui {
class JSON;
}

class JSON : public QDialog
{
    Q_OBJECT

public:
    explicit JSON(QWidget *parent = nullptr);
    ~JSON();

private slots:
    void on_pushButton_clicked();

private:
    Ui::JSON *ui;
};

#endif // JSON_H
