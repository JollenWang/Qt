#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QDialog dd;
#if 0
    QLabel label;

    label.setParent(&dd);
    label.setText("Hello World!");
#else
    QLabel *label = new QLabel(&dd);
    label->setText("Hello World!");
#endif
    dd.show();

    return app.exec();
}
