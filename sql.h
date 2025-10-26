#ifndef SQL_H
#define SQL_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDateTime>
#include "sha1.h"

class SQL
{
public:
    SQL();
    QString hashToHex(const Hash& hash);
    bool connectToDatabase();                       // подключние к БД
    void addUser(string &username, Hash password);  // добавление в БД пользователя
    void addChatMes(string sender, string text);    // добавление сообщения в БД
    void addPrivateChatMes(string sender, string receiver, string text);    // добавление сообщения приватного в БД
private:
    QSqlDatabase db;
};

#endif // SQL_H
