#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "formd.h"
#include <QPushButton>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

    void retranslateUi();  // 添加此方法以支持动态语言更新
    void updateComboBox(int index);

signals:
    void back();

private slots:
    void on_comboBox_activated(int index);

private:
    Ui::Form *ui;

    Formd *ppage3=nullptr;
};

#endif // FORM_H
