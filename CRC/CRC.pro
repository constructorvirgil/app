#-------------------------------------------------
#
# Project created by QtCreator 2019-07-25T16:30:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CRC
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    comboxpro.cpp \
    crcpro.cpp \
    crc8.cpp \
    crc16.cpp \
    crc_afactory.cpp \
    crc8_factory.cpp \
    crc16_factory.cpp \
    aboutdlg.cpp

HEADERS  += mainwindow.h \
    comboxpro.h \
    crcpro.h \
    crc8.h \
    crc16.h \
    crc_afactory.h \
    crc8_factory.h \
    crc16_factory.h \
    aboutdlg.h

FORMS    += mainwindow.ui \
    aboutdlg.ui
