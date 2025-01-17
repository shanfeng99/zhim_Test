#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTranslator>
#include <QEvent>
#include <QPushButton>

#include "form.h"
#include "formd.h"
//加头文件
#include "languagemanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    //翻译
    void on_comboBox_activated(int index);
    //翻译
    void updateUI();
    //翻译
    void updateComboBox(int index);

private:
    Ui::Dialog *ui;
    //翻译
    LanguageManager *m_languageManager;  // 语言管理器实例


    Form *ppage2=nullptr;
};
#endif // DIALOG_H
