#pragma once
class vect
{
	int nelem; //nombre d'�l�ments
	int* adr; //adresse zone dynamique contenant les �l�ments

public :
	vect(int); //constructeur (taille du vect)
	~vect(); //destructeur
	int& operator [] (int); //acc�s � un elem par son "indice"
};

