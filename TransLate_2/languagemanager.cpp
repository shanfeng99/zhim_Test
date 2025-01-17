#include "languagemanager.h"
#include <QDebug>

LanguageManager *LanguageManager::m_instance = nullptr;

LanguageManager::LanguageManager(QObject *parent)
    : QObject(parent), m_translator(new QTranslator(this))
{
}

LanguageManager::~LanguageManager()

{
    delete m_translator;
}

LanguageManager *LanguageManager::instance()
{
    if (!m_instance) {
        m_instance = new LanguageManager;
    }
    return m_instance;
}

void LanguageManager::loadLanguage(int index)
{
    QString langFile;
    switch(index)
    {
    case 0:  // 中文
        langFile = "Tranlate_CN.qm";
        break;
    case 1:  // 英文
        langFile = "Tranlate_EN.qm";
        break;
    default:
        return;
    }

    if (m_translator->load(langFile)) {
        qApp->installTranslator(m_translator);
        emit languageChanged(index);  // 发出语言变化信号，并携带语言索引
    } else {
        qDebug() << "Translation file loading failed!";
    }
}
