#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#include "functions.h"

int main()
{
	/*
	point a, b(1), c(1, 2);

	a.copie(b);
	b.copie(c);
	c.affiche();

	point * pA = new point(3, 3);
	delete pA;
	*/

	/*
	for (int i = 0; i < 100; i++)
	{
		point a(i, i), b(i + 1, i + 1), c(i + 2, i + 2), d(i + 3, i + 3);

		a.affiche();
		b.affiche();
		c.affiche();
		d.affiche();

	}
	*/

	/*
	point a(5), b(3, 15);

	a.affichePoint(); b.affichePoint();
	*/

	////////// EXO 11 P22

	/*
	point A(5, 10); // Init Objet
	A.affiche(); // Affichage

	A.deplace(2.5, 3); // Translation
	A.affiche(); // Affichage
	*/

	////////// EXO 12 P24
	
	/*
	point A(5, 10); // Init Objet

	float abscisse = A.abscisse();
	float ordonnee = A.ordonnee();

	printf("X = %f et Y = %f", abscisse, ordonnee);

	*/


	////////// EXO 5 P11

	/*
	essai x;
	x.n = 5;
	x.x = 2.6;

	raz(&x);
	raz(x);
	
	cout << "N = " << x.n << " X = " << x.x << endl;
	*/

	////////// TP1

	pile_entier Pile1;
	
	int random;
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		random = rand() % 100;
		Pile1.empile(random);
	}

	//Pile1.affiche();

	int lastNumber = Pile1.depile();
	cout << "\nLe dernier nombre de la pile est : " << lastNumber << endl;

	return 0;
}