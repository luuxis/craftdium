/********************************************************************************
** Form generated from reading UI file 'craftdium.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRAFTDIUM_H
#define UI_CRAFTDIUM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_craftdium
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_5;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *craftdium)
    {
        if (craftdium->objectName().isEmpty())
            craftdium->setObjectName(QString::fromUtf8("craftdium"));
        craftdium->setWindowModality(Qt::NonModal);
        craftdium->setEnabled(true);
        craftdium->resize(1280, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setItalic(false);
        font.setKerning(false);
        craftdium->setFont(font);
        craftdium->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        craftdium->setWindowIcon(icon);
        craftdium->setAutoFillBackground(false);
        craftdium->setStyleSheet(QString::fromUtf8("border-image: url(resource/background.png);"));
        craftdium->setToolButtonStyle(Qt::ToolButtonTextOnly);
        centralwidget = new QWidget(craftdium);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(680, 210, 541, 331));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(resource/background_paladium.png);\n"
"border-radius: 16px"));
        graphicsView_4 = new QGraphicsView(centralwidget);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(474, 30, 331, 91));
        graphicsView_4->setMaximumSize(QSize(16777215, 91));
        graphicsView_4->setStyleSheet(QString::fromUtf8("border-image: url(resource/craftdium.png);\n"
"border-radius: 25px"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(49, 210, 541, 331));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(resource/background_minecraft.png);\n"
"border-radius: 16px"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 290, 221, 221));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(resource/play_paladium.png);\n"
"border-radius: 16px"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 290, 221, 221));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(resource/play_minecraft.png);\n"
"border-radius: 16px"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 640, 231, 51));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(resource/maj.png);\n"
"border-radius: 16px\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(970, 290, 221, 221));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(resource/folder_paladium.png);\n"
"border-radius: 16px"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 290, 221, 221));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(resource/folder_minecraft.png);\n"
"border-radius: 16px"));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(20, 540, 271, 81));
        graphicsView_3->setStyleSheet(QString::fromUtf8("border-image: url(resource/maj_text.png);"));
        graphicsView_5 = new QGraphicsView(centralwidget);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(20, 90, 181, 91));
        graphicsView_5->setStyleSheet(QString::fromUtf8("border-image: url(resource/play_text.png);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1120, 580, 100, 100));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(resource/discord_icon.png);"));
        craftdium->setCentralWidget(centralwidget);

        retranslateUi(craftdium);

        QMetaObject::connectSlotsByName(craftdium);
    } // setupUi

    void retranslateUi(QMainWindow *craftdium)
    {
        craftdium->setWindowTitle(QCoreApplication::translate("craftdium", "craftdium beta 5", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class craftdium: public Ui_craftdium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAFTDIUM_H
