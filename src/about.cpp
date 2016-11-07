#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////ABOUT///////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox about;
    about.setText("ubunsys");
    about.setInformativeText("Copyright 2016\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com\n\nv2016.11.07");
    about.setStandardButtons(QMessageBox::Ok);
    //about.setIconPixmap(QPixMap(":/pics/image.jpg"));   // to add
    //about.setIcon(":/pics/image.jpg");   // not working
    about.setDefaultButton(QMessageBox::Ok);
    about.show();
    about.exec();
}