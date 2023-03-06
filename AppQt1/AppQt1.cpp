#include "AppQt1.h"
#include <time.h>

#include <qdebug.h>

AppQt1::AppQt1(QWidget *parent) // Constructeur
	: QMainWindow(parent)
{
	ui.setupUi(this);
	socket = new QTcpSocket(this); // Creation du socket
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
}

AppQt1::~AppQt1() // Destructeur
{
	delete socket;
}

void AppQt1::onDisplayMessageButtonClicked() // Bouton de connexion
{
	QString ip = ui.valueEdit->text(); // Recupere l'IP
	QString port = ui.valueEdit_2->text(); // Recupere le Port

	// Conversion du port de string en int
	bool ok;
	int portAsInt = port.toInt(&ok);
	if (ok) // si la conversion en entier a réussie
	{
		// Tentative de connexion au serveur
		socket->connectToHost(ip, portAsInt); 
	}
}

void AppQt1::onSocketConnected()
{
	ui.label_status->setText("Status connexion : Connecter");
}

void AppQt1::onSocketDisconnected()
{
	ui.label_status->setText("Status connexion : Déconnecter");
}

void AppQt1::OnSendMessageButtonClicked()
{
	socket->write("Salut mec !\n");

	if (socket->state() == QTcpSocket::ConnectedState)
	{
		socket->write("Salut mec !!!\n");
	}
}

/*
void AppQt1::DisplayMessageEmpiler()
{
	QRegExp re("\\d*");  // a digit (\d), zero or more times (*)
	if (re.exactMatch(ui.valueEdit_2->text())) // Si entier
	{
		int Element = ui.valueEdit_2->text().toInt(); // Valeur qu'on converti en entier
		int reponse = pile->empile(Element); // On ajoute la valeur et on retourne un entier en fonction du résultat

		if (reponse == 1)
		{
			ui.label->setText(QString("Ajout de l'element reussi %1 ! (Hauteur + 1)").arg(Element)); // Message de succés lors de l'ajout de l'élément
		}
		else if (reponse == 0)
		{
			ui.label->setText("Erreur : la pile est pleine !"); // Message d'erreur quand la pile est pleine
		}
	}
}
*/