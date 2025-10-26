#include "sql.h"

SQL::SQL()
{
    db = QSqlDatabase::addDatabase("QPSQL");
    connectToDatabase();
}

QString SQL::hashToHex(const Hash &hash)
{
    QString hex;
    for (int i = 0; i < 20; ++i) {
        hex += QString("%1").arg(hash.c[i], 8, 16, QLatin1Char('0'));
    }
    return hex;
}

bool SQL::connectToDatabase()
{
    db.setHostName("localhost");
    db.setDatabaseName("Chat");
    db.setUserName("postgres");
    db.setPassword("1320");
    if(!db.open())
    {
        qDebug() << "Ошибка подключения к базе данных: " << db.lastError().text();
        return false;
    }
    qDebug() << "Успешное подключение в базе данных";
    return true;
}

void SQL::addUser(string &username, Hash password)
{
    QString passHash = hashToHex(password);
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password, status, banned) VALUES (:username, :password, :status, :banned)");
    query.bindValue(":username", QString::fromStdString(username));
    query.bindValue(":password", passHash);
    query.bindValue(":status", "");
    query.bindValue("banned", false);
    if(!query.exec())
    {
        qDebug() << "Ошибка добавления пользователя: " << query.lastError().text();
    }
}

void SQL::addChatMes(string sender, string text)
{
    QSqlQuery query;
    query.prepare("INSERT INTO messages (sender, text, time) VALUES (:sender, :text, :time)");
    query.bindValue(":sender", QString::fromStdString(sender));
    query.bindValue(":text", QString::fromStdString(text));
    query.bindValue(":time", QDateTime::currentDateTime());
    if(!query.exec())
    {
        qDebug() << "Ошибка добавления соообщения";
    }

}

void SQL::addPrivateChatMes(string sender, string receiver, string text)
{
    QSqlQuery query;
    query.prepare("INSERT INTO messages (sender, receiver, text) VALUES (:sender, :receiver, :text)");
    query.bindValue(":sender", QString::fromStdString(sender));
    query.bindValue(":receiver", QString::fromStdString(receiver));
    query.bindValue(":text", QString::fromStdString(text));
    query.bindValue(":time", QDateTime::currentDateTime());
    if(!query.exec())
    {
        qDebug() << "Ошибка добавления приватного соообщения";
    }
}
