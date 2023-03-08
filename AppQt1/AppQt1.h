#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AppQt1.h"
#include "qtcpsocket.h"

class AppQt1 : public QMainWindow
{
	Q_OBJECT

public:
	AppQt1(QWidget *parent = nullptr);
	~AppQt1();

private:
	Ui::AppQt1Class ui;
	QTcpSocket * socket; // Socket pour la connexion TCP/IP

public slots:
	void onDisplayMessageButtonClicked(); // Bouton de connexion
	void onSocketConnected(); // Connexion Status
	void onSocketDisconnected(); // Déconnexion Status
	void OnSendMessageButtonClicked(); // Envoie Message Serveur
};