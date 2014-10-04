#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void createActions();
    void about();
    void on_pushButton_pressed();

private:
Ui::MainWindow *ui;

    QAction *aboutAct;
    QAction *aboutQtAct;
};
#endif // MAINWINDOW_H
