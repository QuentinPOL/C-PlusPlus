#include "pile.h"

// Constructeur
pile_entier::pile_entier(int Taille)
{
	this->taille = Taille;
	this->pile = new int[Taille];
	this->hauteur = 0;
}

// Destructeur
pile_entier::~pile_entier()
{
	delete pile;
}

int pile_entier::empile(int AddElement)
{
	if (pleine() != 1)
	{
		this->pile[hauteur] = AddElement;
		this->hauteur++;

		return 1;
	}
	else
	{
		return 0;
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
	if (pile == nullptr || hauteur == 0 )
	{
		return 1;
	}
	else if (hauteur != 0)
	{
		return 0;
	}
}