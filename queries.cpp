#include "queries.h"
#include "ui_queries.h"
#include <mainwindow.h>
#include <QMessageBox>
#include <vector>
#include <QString>
#include <string>
#include <QPlainTextEdit>
#include <QTextEdit>


Queries::Queries(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Queries)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/img/img/photo-1483401757487-2ced3fa77952.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


}

Queries::~Queries()
{
    delete ui;
}




string WordDefinition(xml_tree tree,vector<Node*> &NoOFSynsets,string word) {
    string def;
    int flag = 0;
    for (int i = 0; i < NoOFSynsets.size(); i++) {
        vector<Node*>child = tree.get_children(NoOFSynsets[i]);
        Node* words;
        for (int j = 0; j < child.size(); j++) {
            if (tree.get_tag(child[j]) == "word") {
                if (tree.get_data(child[j]) == word ) {
                    flag = 1;
                    break;

                }
            }
        }
        if (flag) {
            for (int j = 0; j < child.size(); j++) {
                if (tree.get_tag(child[j]) == "def") {
                    def = tree.get_data(child[j]);
                    break;
                }
            }

            break;

        }

    }
    return def;

}

void HypernymsOfAWord(xml_tree tree,vector<Node*> &NoOFSynsets,string word , vector<string> &Hypernyms) {
    vector<string>refs(0);
    Hypernyms.resize(0);
    int flag=0;
    for (int i = 0; i < NoOFSynsets.size(); i++) {

        vector<Node*>child = tree.get_children(NoOFSynsets[i]);
        //getting the word;


        for (int j = 0; j < child.size(); j++) {
            if (tree.get_tag(child[j]) == "word") {
                if (tree.get_data(child[j]) == word) {
                    flag = 1;
                    break;

                }
            }
        }
        //getting the hypernyms refs
        if (flag) {
            for (int j = 0; j < child.size(); j++) {

                if (tree.get_data(child[j]) == "Hypernym") {

                    string s = tree.get_attributes(child[j]);
                    int i = s.find("n");
                    int fin = s.find(">");
                    s = s.substr(i, fin - i + 1);

                    while (s.find("n") != std::string::npos) {
                        int i = s.find("n");
                        int j = s.find(" ");
                        int w = s.find(">");
                        int l;
                        if (j != std::string::npos && (j + 1 != w)) {
                            l = j - i;
                        }
                        else {
                            l = w - i - 1;
                        }

                        refs.push_back(s.substr(i, l));
                        s.erase(i, l + 1);


                    }






                }
            }

            break;

        }

    }

    flag = 0;

    //getting hypernyms
    for (int i = 0; i < refs.size(); i++) {

        for (int j = 0; j < NoOFSynsets.size(); j++) {
            string id = tree.get_attributes(NoOFSynsets[j]);
            if (id.find(refs[i]) != std::string::npos) {

                vector<Node*>child = tree.get_children(NoOFSynsets[j]);
                Node* words;
                for (int k = 0; k < child.size(); k++) {
                    if (tree.get_tag(child[k]) == "word") {
                        Hypernyms.push_back(tree.get_data(child[k]));

                    }
                }
            }

        }
    }


}





vector<Node*> NoOFSynset;
vector<string>Hypernyms(10);

void Queries::on_pushButton_clicked() //num of synset

{
    ui->textEdit->insertPlainText(QString::number(num));
    //QMessageBox::about(this, "test", QString::number(num));
}



void Queries::on_pushButton_2_clicked() //def
{
    QString word_def =ui->lineEdit->text();
    int x = SetNumber( tree, NoOFSynset);
    string def = WordDefinition(tree, NoOFSynset , word_def.toStdString() );
    ui->textEdit_2->insertPlainText(QString::fromUtf8(def.c_str()));
    //QMessageBox::about(this, "test", QString::fromUtf8(def.c_str()));

}


void Queries::on_pushButton_3_clicked() //hy
{
     QString word_hy =ui->lineEdit_2->text();
     HypernymsOfAWord(tree, NoOFSynset , word_hy.toStdString() , Hypernyms) ;
     //QMessageBox::about(this, "test", QString::fromUtf8(Hypernyms[0].c_str()));
     //QMessageBox::about(this, "test", QString::fromUtf8(Hypernyms[1].c_str()));
     for (int i = 0 ; i< 10 ; i++)
     {
         ui->textEdit_3->insertPlainText(QString::fromUtf8(Hypernyms[i].c_str()));
         ui->textEdit_3->insertPlainText("\n");

     }

}
