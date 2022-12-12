#pragma once////////// TD1 Exo 2class vecteur
{
	float x, y;

public: 
	
	vecteur(float x = 0, float y = 0);

	void affiche();
	//vecteur operator+(float z); //retourne le vecteur correspondent à la somme
	int operator==(vecteur &w); //retourne le vecteur correspondent à la somme
	//friend vecteur operator+(float z, vecteur &w); //idem
};