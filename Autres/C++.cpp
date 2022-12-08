#include <iostream>
#include <conio.h>

#include "functions.h"

using namespace std;

/*
void test(int n = 0, float x = 2.5)
{
	std::cout << "Fonction Numero 1 : ";
	std::cout << "n= " << n << " x=" << x << "\n";
}
*/

int main()
{
	/*

	test();

	int a, b;

	std::cout << "saisir une a : ";
	std::cin >> a;

	std::cout << "saisir une b : ";
	std::cin >> b;

	std::cout << "La valeur de a = " << a  << " et b = "<< b << std::endl;
	
	int *ad; // déclaration d’un pointeur sur un entier
	ad = new int; // réservation 1 int en memoire

	*/

	point::point() // constructeur 1
	{
		x = 0; y = 0;
	}
	point::point(int abs) // constructeur 2
	{
		x = abs; y = abs;
	}
	point::point(int abs, int ord) // constructeur 3
	{
		x = abs; y = ord;
	}

	void point::affiche()
	{
		gotoxy(x, y); cout << "Je suis en " << x << " " << y << "\n";
	}


}
