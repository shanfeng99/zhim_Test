#include "formd.h"
#include "ui_formd.h"
#include "languagemanager.h"

Formd::Formd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formd)
{
    ui->setupUi(this);

    // 连接返回按钮信号
    connect(ui->pb5, &QPushButton::clicked, this, &Formd::back);

    // 连接语言变化信号
    connect(LanguageManager::instance(), &LanguageManager::languageChanged, this, &Formd::updateUI);
}

Formd::~Formd()
{
    delete ui;
}

void Formd::updateUI()
{
    ui->retranslateUi(this); // 更新 Formd 界面
}
