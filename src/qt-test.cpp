/*
 * This file is part of MXE.
 * See index.html for further information.
 */

#include <QApplication>
#include <QtPlugin>
#include "ui_qt-test.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow w;
    Ui::MainWindow u;
    u.setupUi(&w);
    w.show();
    return a.exec();
}
