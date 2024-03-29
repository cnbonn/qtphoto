/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H


#include <QtWidgets/QMainWindow>
#ifndef QT_NO_PRINTER
#include <QtPrintSupport/Qprinter>
#endif


QT_BEGIN_NAMESPACE
class QAction;
class QLabel;
class QMenu;
class QScrollArea;
class QScrollBar;
QT_END_NAMESPACE

//! [0]
class ImageViewer : public QMainWindow
{
    Q_OBJECT

public:
    ImageViewer();

private slots:
    //file menu
    void newAlbum();
    void print();
    void open();
    //void close();
    void save();
    void saveAs();
    //edit menu
    void addPhoto();
    void deletephoto();
    void editDescript();
    void pageForward();
    void pageBackward();

    void zoomIn();
    void zoomOut();
    void normalSize();
    void fitToWindow();

    void about();

private:
    void createActions();
    void createMenus();
    void createToolBars();
    void updateActions();
    void scaleImage(double factor);
    void adjustScrollBar(QScrollBar *scrollBar, double factor);

    QLabel *imageLabel;
    QScrollArea *scrollArea;
    double scaleFactor;

#ifndef QT_NO_PRINTER
    QPrinter printer;
#endif

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *imageMenu;
    QMenu *moveMenu;
    QMenu *helpMenu;

    //QAction *newAlbumAct;
    QAction *openAct;
    QAction *printAct;
    //QAction *closeAct;
    //QAction *saveAct;
    //QAction *saveAsAct;
    QAction *exitAct;

    //QAction *addPhotoAct;
    //QAction *deletePhotoAct;
    //QAction *editDescriptAct;
    QAction *pageForwardAct;
    QAction *pageBackwardAct;

    QAction *zoomInAct;
    QAction *zoomOutAct;
    QAction *normalSizeAct;
    QAction *fitToWindowAct;

    QAction *aboutAct;
    QAction *aboutQtAct;

    QToolBar *fileToolBar;
    QToolBar *zoomToolBar;
    QToolBar *editToolBar;
    QToolBar *moveToolBar;
    QToolBar *helpToolBar;

    QIcon *aboutIcon;




};
//! [0]

#endif
