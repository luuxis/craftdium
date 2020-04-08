#-------------------------------------------------
#
# Project created by QtCreator 2020-02-27T21:53:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = craftdium
TEMPLATE = app


SOURCES += main.cpp\
        craftdium.cpp \


HEADERS  += craftdium.h \
    downlaod.h

FORMS    += craftdium.ui \

RESOURCES += \
    image.qrc





win32:CONFIG(release, debug|release): LIBS += -L$$PWD/curl/lib/ -lcurl
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/curl/lib/ -lcurl
else:unix: LIBS += -L$$PWD/curl/lib/ -lcurl

INCLUDEPATH += $$PWD/curl/include
DEPENDPATH += $$PWD/curl/include
