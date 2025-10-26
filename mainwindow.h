#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Database.h"
#include <memory>
#include <QTcpSocket>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int userId, QString userName, std::shared_ptr<Database> dbPtr = nullptr, QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow* createClient(std::shared_ptr<Database> dbPtr = nullptr);
    static int kInstanceCount;

private slots:

    void on_messagelineEdit_returnPressed();
    void on_sendMessageButton_clicked();
    void on_sendMessagePrivateButton_clicked();
    void updateChats();

    void on_actionCreateNewClient_triggered();
    void on_actionCloseClient_triggered();

    void on_connectButtonTCP_clicked();         // соед с сервером
    void on_disconnectButtonTCP_clicked();      // откл от сервера

private:
    Ui::MainWindow *ui;
    std::shared_ptr<Database> m_dbPtr;
    int m_userId;
    QString m_userName;
    QTcpSocket* m_socket;
};

#endif // MAINWINDOW_H
