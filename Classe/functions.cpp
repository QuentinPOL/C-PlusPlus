#include <iostream>
#include <conio.h>
//#include <windows.h>
#include <time.h>

#include "functions.h"

/*
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
*/

/*
// Constructeur
point::point(int x, int y)
{
	std::cout << "Construction objet point" << std::endl;
	 this->x = x; // A la place de B <=> this
	 this->y = y;  
	 
}
*/

/*
point::~point()
{
	std::cout << "Destruction objet point" << std::endl;
	
}
*/

/*
void point::copie(point &B)
{
	B.x = x;
	B.y = y;
}
*/

/*
void point::affichePoint()
{
	std::cout << "Adresse: " << this << " - Coordonnees: " << x << " " << y << "\n";
}
*/

/*
void point::affiche()
{
	gotoxy(x, y); std::cout << "***************" << "\n";
	//gotoxy(x, y); std::cout << "Je suis en " << x << " " << y << "\n";
	//gotoxy(x, y); std::cout << x << " " << y << "\n";
}
*/

////////// EXO 11 P22

/*
point::point(float x, float y) // Constructeur
{
	std::cout << "Construction objet point\n" << std::endl;

	this->x = x;
	this->y = y;
}

void point::deplace(float dx, float dy)
{
	this->x += dx;
	this->y += dy;
}

void point::affiche() // Fonction(Méthode) mebre affiche
{
	std::cout << "\nX = " << x << " et Y = " << y << "\n";
}

point::~point() // Destructeur
{
	std::cout << "\nDestruction de l'objet point" << std::endl;

}
*/

////////// EXO 12 P24

/*
point::point(float x, float y) // Constructeur
{
	std::cout << "Construction objet point\n" << std::endl;

	this->x = x;
	this->y = y;
}

float point::abscisse()
{

	return x;

}

float point::ordonnee()
{

	return y;
}



point::~point() // Destructeur
{
	std::cout << "\nDestruction de l'objet point" << std::endl;

}

*/

////////// EXO 5 P11

/*
void raz(essai & n)
{
	n.n = 0;
	n.x = 0;
}

void raz(essai * x)
{
	x->n = 0;

}
*/

////////// TP1

// Constructeur
pile_entier::pile_entier(int Taille)
{
	std::cout << "\nConstruction de la pille\n";

	this->taille = Taille;
	this->pile = new int[Taille];
	this->hauteur = 0;
}

// Destructeur
pile_entier::~pile_entier()
{
	std::cout << "\nDestruction de la pille\n";

	delete pile;
}

void pile_entier::empile(int AddElement)
{
	if (pleine() != 1)
	{
		this->pile[hauteur] = AddElement;
		this->hauteur++;
	}
	else
	{
		std::cout << "\nLa pile est pleine !\n";
	}
}

int pile_entier::depile()
{

	if (vide() != 1)
	{
		return pile[--hauteur];
	}
	else
	{
		return 0;
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

/*
void pile_entier::affiche()
{
	for (int i = 0; i < taille; i++)
	{
		std::cout << pile[i] << std::endl;
	}
}
*/