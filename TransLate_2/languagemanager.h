#ifndef LANGUAGEMANAGER_H
#define LANGUAGEMANAGER_H

#include <QObject>
#include <QTranslator>
#include <QApplication>
#include <QLocale>

class LanguageManager : public QObject
{
    Q_OBJECT

public:
    static LanguageManager *instance(); // 单例实例

    void loadLanguage(int index);       // 加载翻译文件

signals:
    //void languageChanged();             // 语言变化信号
    void languageChanged(int index); // 添加语言更改信号，并携带语言索引

private:
    explicit LanguageManager(QObject *parent = nullptr);
    ~LanguageManager();

    QTranslator *m_translator;          // 翻译器

    static LanguageManager *m_instance; // 静态单例实例
};

#endif // LANGUAGEMANAGER_H
