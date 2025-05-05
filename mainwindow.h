#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_generate_clicked();

    void on_pushButton_copy_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_color_clicked();

private:
    Ui::MainWindow *ui;

    // цвет модулей
    QColor currentColor = Qt::black;

    QImage get_graphicsView_result_scene_image();
};
#endif // MAINWINDOW_H
