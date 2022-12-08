#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AppQt1.h"
#include "pile.h"

class AppQt1 : public QMainWindow
{
	Q_OBJECT

public:
	AppQt1(QWidget *parent = nullptr);
	~AppQt1();

private:
	Ui::AppQt1Class ui;
	pile_entier * pile;

public slots:
	void onDisplayMessageButtonClicked(); // Création de la pile

	void DisplayMessageEmpiler(); // Empiler la pile

	void DisplayMessageDepiler(); // Dépiler la pile

	void DisplayMessageSupprimer(); // Supprimer la pile
};