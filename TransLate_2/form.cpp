#include "form.h"
#include "ui_form.h"
#include "languagemanager.h"


#include <QDebug>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    //创建Formd界面
    this->ppage3 =new Formd;

    //页面切换
    connect(ui->pb4,&QPushButton::clicked,[=](){
        this->hide();
        this->ppage3->show();
    });

//    connect(this->ppage3, &Form::back, [=](){
//        this->ppage3->hide();
//        this->show();
//    });
    connect(this->ppage3, &Formd::back, this, &Form::back);



    // 连接返回按钮信号
    connect(ui->pb3, &QPushButton::clicked, this, &Form::back);





    // 连接语言切换下拉框
    connect(ui->comboBox, QOverload<int>::of(&QComboBox::activated), this, &Form::on_comboBox_activated);


    // 在 Form 构造函数中
    connect(LanguageManager::instance(), &LanguageManager::languageChanged, this, &Form::retranslateUi);
    qDebug() << "Connected to languageChanged signal in Form";

    // 在 Form 构造函数中连接信号和槽
    connect(LanguageManager::instance(), &LanguageManager::languageChanged, this, &Form::updateComboBox);

    // dialog.cpp



}

Form::~Form()
{
    delete ui;
}

void Form::retranslateUi()
{
    // 更新界面中的静态文本
    ui->retranslateUi(this);
}

void Form::on_comboBox_activated(int index)
{
    // 调用全局语言管理器切换语言
    LanguageManager::instance()->loadLanguage(index);
    // 手动更新界面
    retranslateUi();

}

void Form::updateComboBox(int index)
{
    ui->comboBox->setCurrentIndex(index);
}

