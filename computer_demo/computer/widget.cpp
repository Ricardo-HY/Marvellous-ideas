#include "widget.h"
#include "ui_widget.h"

#include <QPainter>
#include <QStack>
#include <QByteArray>
#include <string.h>




Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 自定义设置标题
    this->setWindowTitle("01_计算机");
    // 自定义字体
    QFont f("仿宋",13);
    ui->lineEdit_view->setFont(f);

    // 指定按钮上使用图片
    // QIcon con("图片路径");
    // ui->pushButton_sub->setIcon(con);

    // 设置按钮背景色
    ui->pushButton_res->setStyleSheet("background:blue");

}

Widget::~Widget()
{
    delete ui;
}

// 实现背景自定义
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter paninter(this);
    paninter.drawPixmap(0,0,width(),height(),QPixmap(":/new/prefix1/image/22.jpg"));
}


// 计算机上按键响应
void Widget::on_pushButton_num0_clicked()
{
    results += "0";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num1_6_clicked()
{
    results += "1";
    ui->lineEdit_view->setText(results);
}

void Widget::on_pushButton_num2_clicked()
{
    results += "2";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num3_clicked()
{
    results += "3";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num4_clicked()
{
    results += "4";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num5_clicked()
{
    results += "5";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num6_clicked()
{
    results += "6";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num7_clicked()
{
    results += "7";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num8_clicked()
{
    results += "8";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_num9_clicked()
{
    results += "9";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_add_clicked()
{
    results += "+";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_sub_clicked()
{
    results += "-";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_multi_clicked()
{
    results += "*";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_divid_clicked()
{
    results += "/";
    ui->lineEdit_view->setText(results);
}


void Widget::on_pushButton_delete_clicked()
{
    // 清空全部
    // results.clear();
    // ui->lineEdit_view->clear();
    // 逐渐删去
    results.chop(1);  // 每次删去最后一个字符
    ui->lineEdit_view->setText(results);

}


void Widget::on_pushButton_res_clicked()
{
    QStack <int> s_num,s_opt;
    int i=0,temp=0,num1,num2;
    char opt[128]={0};
    // qstring 转为 char
    QByteArray db;
    db.append(results.toUtf8());
    strcpy(opt,db.data());

    while(opt[i]!='\0'|| s_opt.empty()!=true){
        // 数据处理
        if (opt[i]>='0'&&opt[i]<='9'){
            temp=temp*10+opt[i]-'0';
            i++;
            if(opt[i]<'0'||opt[i]>'9'){
                s_num.push(temp);
                temp=0;
            }
        }
        else{  // 操作符
            if(s_opt.empty()==true||Piritory(opt[i])>Piritory(s_opt.top())||(s_opt.top()=='('&&opt[i]!=')')){

                s_opt.push(opt[i]);
                i++;
                continue;
            }
            if (s_opt.top()=='('&&opt[i]==')'){  // 括号匹配出栈
                s_opt.pop();
                i++;
                continue;
            }
            if(Piritory(opt[i])<=Piritory(s_opt.top())||opt[i]==')'&&s_opt.top()!='('||(opt[i]=='/0'&&s_opt.empty()!=true)){
                char ch =s_opt.top();
                s_opt.pop();  // 将获取的运算符号出栈
                switch(ch){
                    case '+':{
                        num1=s_num.top();
                        s_num.pop();
                        num2=s_num.top();
                        s_num.pop();
                        s_num.push(num1+num2);
                    }break;
                    case '-':{
                        num1=s_num.top();
                        s_num.pop();
                        num2=s_num.top();
                        s_num.pop();
                        s_num.push(num1-num2);
                    }break;
                    case '*':{
                        num1=s_num.top();
                        s_num.pop();
                        num2=s_num.top();
                        s_num.pop();
                        s_num.push(num1*num2);
                    }break;
                    case '/':{
                        num1=s_num.top();
                        s_num.pop();
                        num2=s_num.top();
                        s_num.pop();
                        s_num.push(num1/num2);
                    }break;
                }
            }
        }
        ui->lineEdit_view->setText(QString::number(s_num.top()));    // 显示最后的结果 number将数字转为字符串
    }
}

// 辅助函数获取首字符进行优先级比较，即将符号用数字代替进行比较大小进行判定
int Widget::Piritory(char ch){
    switch(ch){
        case'+':
            return 1;
        break;
        case'-':
            return 1;
        break;
        case'*':
            return 2;
        break;
        case'/':
            return 2;
        break;
    }
}
























