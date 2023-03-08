#include "TCPIPQT.h"

TCPIPQT::TCPIPQT(QWidget *parent) // Constructeur
    : QMainWindow(parent)
{
    ui.setupUi(this);
	socket = new QTcpSocket(this); // Creation du socket
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
}

TCPIPQT::~TCPIPQT() // Destructeur
{
	delete socket;
}

void TCPIPQT::onConnectButtonClicked() // Bouton de connexion
{
	QString ip = ui.IPEdit->text(); // Recupere l'IP
	QString port = ui.PortEdit->text(); // Recupere le Port

	// Conversion du port de string en int
	bool ok;
	int portAsInt = port.toInt(&ok);
	if (ok) // si la conversion en entier a réussie
	{
		// Tentative de connexion au serveur
		socket->connectToHost(ip, portAsInt);
	}
}

void TCPIPQT::onSocketConnected()
{
	ui.label_status->setText("Status connexion : Connecter");
}

void TCPIPQT::onSocketDisconnected()
{
	ui.label_status->setText("Status connexion : Deconnecter");
}

void TCPIPQT::onSendMessageButtonClicked()
{
	if (socket->state() == QTcpSocket::ConnectedState)
	{
		socket->write("TESTT 1234 !!\n"); // Envoie du message au serveur
	}
}