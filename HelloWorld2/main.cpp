#include <QApplication>
#include <QDialog>
#include "ui_dialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QDialog dd;
    Ui_Dialog ui;

    ui.setupUi(&dd);
    dd.show();

    return app.exec();
}

