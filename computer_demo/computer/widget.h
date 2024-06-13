#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    // 自定义背景
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_num1_6_clicked();

    void on_pushButton_num2_clicked();

    void on_pushButton_num3_clicked();

    void on_pushButton_num4_clicked();

    void on_pushButton_num5_clicked();

    void on_pushButton_num6_clicked();

    void on_pushButton_num7_clicked();

    void on_pushButton_num8_clicked();

    void on_pushButton_num9_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_multi_clicked();

    void on_pushButton_divid_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_res_clicked();

    void on_pushButton_num0_clicked();

    // 辅助函数声明
    int Piritory(char ch);
private:
    Ui::Widget *ui;

    QString results;
};
#endif // WIDGET_H
