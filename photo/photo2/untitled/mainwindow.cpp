#include <QtGui>
#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
/*void MainWindow::open()
{
    QString fileName = QFileDialog::getOpenFileName(
                this, tr("Open File"), QDir::currentPath());

    if (!fileName.isEmpty())
    {
        QImage image(fileName);
        if (!image.isNull())
        {

        }

        imageLabel -> setPixmap(Qpixmap::fromImage(image));

        scaleFactor = 1.0;

        printAct -> setEnabled(true);
        fitToWindow -> setEnabled(true);
        updateActions();

        if(!fitToWindowAct -> isChecked())
            imageLabel -> adjustSize();
    }
}*/

void MainWindow::on_pushButton_pressed()
{
}
void MainWindow::about()
{
    QMessageBox::about(this, tr("About Image Viewer"),
            tr("<p>The <b>Image Viewer</b> example shows how to combine QLabel "
               "and QScrollArea to display an image. QLabel is typically used "
               "for displaying a text, but it can also display an image. "
               "QScrollArea provides a scrolling view around another widget. "
               "If the child widget exceeds the size of the frame, QScrollArea "
               "automatically provides scroll bars. </p><p>The example "
               "demonstrates how QLabel's ability to scale its contents "
               "(QLabel::scaledContents), and QScrollArea's ability to "
               "automatically resize its contents "
               "(QScrollArea::widgetResizable), can be used to implement "
               "zooming and scaling features. </p><p>In addition the example "
               "shows how to use QPainter to print an image.</p>"));
}
void MainWindow::createActions()
{
    aboutAct = new QAction(tr("About"), this);
    connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}


