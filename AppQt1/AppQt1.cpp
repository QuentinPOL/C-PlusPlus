#include "AppQt1.h"
#include <time.h>

#include <qdebug.h>

AppQt1::AppQt1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

AppQt1::~AppQt1()
{
	delete pile; // Suppresion de la pile
}

void AppQt1::onDisplayMessageButtonClicked()
{

	QRegExp re("\\d*");  // a digit (\d), zero or more times (*)

	if (re.exactMatch(ui.valueEdit->text())) // Si entier
	{
		int val = ui.valueEdit->text().toInt(); // Valeur qu'on converti en entier
		pile = new pile_entier(val); // Créationde la pile d'une taille valeur

		ui.label->setText("Pile creer !"); // Message de succés lorsque la pilce est créer
	}
}

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

void AppQt1::DisplayMessageDepiler()
{
	int lastCase = pile->depile(); // On dépile et on renvoie la valeur de la dernière case de la pile sinon on renvoie 0

	if (lastCase != 0)
	{
		ui.label->setText(QString("La derniere case = %1").arg(lastCase)); // Renvoie la valeur de la dernière case et diminue de 1 la hauteur après
	}
	else if (lastCase == 0)
	{
		ui.label->setText("Erreur : La pile est vide"); // Message d'erreur quand la pile est vide
	}
}

void AppQt1::DisplayMessageSupprimer()
{
	delete pile;
	ui.label->setText("Pile supprimer !"); // Message d'erreur quand la pile est vide
}