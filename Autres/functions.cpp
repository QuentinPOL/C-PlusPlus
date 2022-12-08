#include <iostream>

#include "functions.h"

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