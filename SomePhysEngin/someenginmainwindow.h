#ifndef SOMEENGINMAINWINDOW_H
#define SOMEENGINMAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "enginviewer.h"
#include "scenegeneratortest.h"
#include "essentialpara.h"
#include "essentialparaedit.h"
#include "materialparaedit.h"

namespace Ui {
class SomeEnginMainWindow;
class EnginViewer;
class SceneGeneratorTest;
}

class SomeEnginMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SomeEnginMainWindow(QWidget *parent = 0);
    ~SomeEnginMainWindow();

private slots:
    void on_load_scene_triggered();

    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::SomeEnginMainWindow *ui;
    QTimer *m_timer;
    EssentialPara essentialPara;
    bool MaterialChoice[7];
};

#endif // SOMEENGINMAINWINDOW_H
