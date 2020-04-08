#include "craftdium.h"
#include "ui_craftdium.h"
#include <QtWidgets>
#include <QtGui>
#include <qlabel.h>
#include <qpixmap.h>
#include <QApplication>


craftdium::craftdium(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::craftdium)
{
    ui->setupUi(this);
}

craftdium::~craftdium()
{
    delete ui;
}


void craftdium::on_pushButton_clicked()
{
    system("cd minecraft & cd paladium & start paladium.bat");
}

void craftdium::on_pushButton_2_clicked()
{
    system("start /B /MIN minecraft\\minecraft\\Minecraft\\Minecraft.exe --workDir minecraft\\minecraft\\AppData\\.minecraft");
}

void craftdium::on_pushButton_3_clicked()
{
    system("Start update.bat");
}

void craftdium::on_pushButton_4_clicked()
{
    system("cd minecraft & cd paladium & Start .paladium");
}

void craftdium::on_pushButton_5_clicked()
{
    system("cd minecraft & cd minecraft & cd AppData & Start .minecraft");
}

void craftdium::on_pushButton_6_clicked()
{
    system("start https://discord.craftdium.ml");
}
