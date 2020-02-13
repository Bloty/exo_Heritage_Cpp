#pragma once
class vect
{
	int nelem; //nombre d'éléments
	int* adr; //adresse zone dynamique contenant les éléments

public :
	vect(int); //constructeur (taille du vect)
	~vect(); //destructeur
	int& operator [] (int); //accès à un elem par son "indice"
};

