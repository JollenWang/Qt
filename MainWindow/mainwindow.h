#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_N_triggered();

    void on_actionSave_S_triggered();

    void on_actionSave_S_2_triggered();

    void on_actionSave_As_A_triggered();

    void on_actionClose_C_triggered();

    void on_actionExit_E_triggered();

    void on_actionSearch_triggered();

    void on_actionCut_X_triggered();

    void on_actionCopy_C_triggered();

    void on_actionPaste_V_triggered();

    void on_actionSearch_F_triggered();

private:
    Ui::MainWindow *ui;
    bool isSaved;
    QString curFile;
    QLineEdit *find_textLineEdit;

    QLabel *first_statusLabel;
    QLabel *second_statusLabel;

    void do_file_New();
    void do_file_SaveOrNot();
    void do_file_Save();
    void do_file_SaveAs();
    bool saveFile(const QString &fileNmae);

    void do_file_Open();
    bool do_file_Loade(const QString &fileName);

    void show_findText();
    void init_statusBar();
    void do_cursorChanged();
};

#endif // MAINWINDOW_H
