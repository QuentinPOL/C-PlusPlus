#pragma once

#include <iostream>
#include <conio.h> // objets transmis en argument d'une fonction membre

/*
class point
{
	int x, y; 

public: 

	point(int abs = 1, int ord = 2); // Constructeur
	//~point();

		void copie(point &B);
		void affiche(); // Fonction membre affiche
};

void gotoxy(int x, int y);
*/

////////// EXO 11 P22

/*
class point // Destructeur
{
	float x, y; // Membre donnée privés

public: 

	point(float x, float y); // Constructeur

	void deplace(float dx, float dy); // Fonction membre 1
	void affiche(); // Fonction membre 2 (Méthode 2)

	~point();
};
*/

////////// EXO 12 P24

/*
class point // Destructeur
{
	float x, y; // Membre donnée privés

public:

	point(float x, float y); // Constructeur
	~point();
	float abscisse(); // (Méthode) Fonction membre 1
	float ordonnee(); // (Méthode) Fonction membre 2

	
};
*/

////////// EXO 5 P11

/*

struct essai
{
	int n;
	float x;

	void raz()
	{
		n = 0;
		x = 0;
	}
};

void raz(essai &n);
void raz(essai * x);

*/

////////// TP1

class pile_entier
{
	int *pile, taille, hauteur; // pointeur sur les valeurs de la pile, taille maximum, hauteur actuelle

public:

	pile_entier(int Taille = 20); // constructeur, taille de la pile, 20 par defaut, initialise la hauteur à 0 
	//alloue dynamiquement de la place mémoire
	~pile_entier(); // destructeur- libère la pile

	void empile(int); // ajoute un élement à la pile
	int depile(); // retourne la valeur de l’entier inséré en dernier, la hauteur diminue de 1 unité

	int pleine(); // retourne 1 si la pile est pleine, 0 sinon
	int vide(); // retourne 1 si la pile est vide, 0 sinon

	//void affiche();
};