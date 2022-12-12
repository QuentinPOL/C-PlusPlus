#include <iostream>
#include <conio.h>

#include "functions.h"

/*

////////// TD1 Exo 1

// Constructeur
pile_entier::pile_entier(int Taille)
{
	std::cout << "\nConstruction de la pile\n";

	this->taille = Taille;
	this->pile = new int[Taille];
	this->hauteur = 0;
}

// Destructeur
pile_entier::~pile_entier()
{
	std::cout << "\nDestruction de la pile\n";

	delete pile;
}

void pile_entier::operator<(int n)
{

	if (pleine() != 1)
	{
		this->pile[hauteur] = n;
		this->hauteur++;
	}
	else
	{
		std::cout << "\nLa pile est pleine !\n";
	}
}

void pile_entier::operator>(int &n)
{

	if (vide() != 1)
	{
		n = pile[--hauteur];
	}
	else
	{
		std::cout << "\nLa pile est vide !\n";
	}
}

int pile_entier::pleine()
{
	return (hauteur == taille);
}

int pile_entier::vide()
{
	return (hauteur == 0);
}


void pile_entier::affiche()
{
	for (int i = 0; i < taille; i++)
	{
		std::cout << pile[i] << std::endl;
	}
}
*/

////////// TD1 Exo 2

 // Classe vecteur
// Surdefinition de l'operateur + par une fonction AMIE

vecteur::vecteur(float abs, float ord)
{
	x = abs; 
	y = ord;
}

void vecteur::affiche()
{
	std::cout << "x = " << x << " y = " << y << "\n";
}

/*
vecteur vecteur::operator+(float z)
{
	vecteur res;

	res.x = z + x;
	res.y = z + y;

	return res;
}
*/

int vecteur::operator==(vecteur &w)
{

	if (x == w.x && y == w.y)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

/*
vecteur operator+(float z, vecteur &w)
{
	vecteur res;

	res.x = z + w.x;
	res.y = z + w.y;

	return res;}*/