#ifndef CRAFTDIUM_H
#define CRAFTDIUM_H

#include <QMainWindow>
#include <QtGui>
#include <ctime>
#include <cstdlib>

QT_BEGIN_NAMESPACE
namespace Ui { class craftdium; }
QT_END_NAMESPACE

class craftdium : public QMainWindow
{
    Q_OBJECT

public:
    craftdium(QWidget *parent = nullptr);
    ~craftdium();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::craftdium *ui;
};
#endif // CRAFTDIUM_H
