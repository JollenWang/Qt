#include "widget.h"
#include "logindlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    loginDlg login;
    int ret = 0;

    if (login.exec() == QDialog::Accepted) {
        w.show();
        ret = a.exec();
    }

    return ret;
}
