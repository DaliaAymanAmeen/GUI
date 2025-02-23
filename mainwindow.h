#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <xml_tree.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);    
    ~MainWindow();

private slots:
    void on_Prettifying_clicked();

    void on_Run_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

extern int num;
extern xml_tree tree;
extern int num_of_errors;
int SetNumber(xml_tree tree,vector<Node*> &NoOFSynsets);

#endif // MAINWINDOW_H
