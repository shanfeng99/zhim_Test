#include "dialog.h"
#include "ui_dialog.h"
#include "form.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // 连接语言管理器信号更新UI
    connect(LanguageManager::instance(), &LanguageManager::languageChanged, this, &Dialog::updateUI);

    // 创建 Form 界面
    this->ppage2 = new Form;

    // 页面切换
    connect(ui->pb1, &QPushButton::clicked, [=](){
        this->hide();
        this->ppage2->show();
    });

    connect(this->ppage2, &Form::back, [=](){
        this->ppage2->hide();
        this->show();
    });


    //后续添加调试
    connect(LanguageManager::instance(), &LanguageManager::languageChanged, this, &Dialog::updateUI);
    qDebug() << "Connected to languageChanged signal in Dialog";


    // 在 Dialog 构造函数中连接信号和槽就是同步选项语言切换
    connect(LanguageManager::instance(), &LanguageManager::languageChanged, this, &Dialog::updateComboBox);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_comboBox_activated(int index)
{
    LanguageManager::instance()->loadLanguage(index);  // 切换语言
}

void Dialog::updateComboBox(int index)
{
    ui->comboBox->setCurrentIndex(index);
}


void Dialog::updateUI()
{
    ui->retranslateUi(this);  // 更新 Dialog 界面
}
