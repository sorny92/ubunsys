#-------------------------------------------------
#
# Project created by QtCreator 2014-12-17T12:13:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ubunsys
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    toolbartab.cpp \
    repairtab.cpp \
    systemtab.cpp \
    tweakstab.cpp \
    tweakstab-test.cpp \
    installtab.cpp \
    about.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    ubunsys.qrc

DISTFILES +=
