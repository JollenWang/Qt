#include "widget.h"
#include "mydlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    myDlg my1;
    int ret = 0;

    if (my1.exec() == QDialog::Accepted) {
        w.show();
        ret = a.exec();
    }

    return ret;
}
