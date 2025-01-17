#ifndef FORMD_H
#define FORMD_H

#include <QWidget>

namespace Ui {
class Formd;
}

class Formd : public QWidget
{
    Q_OBJECT

public:
    explicit Formd(QWidget *parent = nullptr);
    ~Formd();

    void updateUI(); // 添加 updateUI 方法的声明

//private slots:
//    void back();

signals:
    void back();


private:
    Ui::Formd *ui;
};

#endif // FORMD_H
