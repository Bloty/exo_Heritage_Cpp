#include "vectb.h"

vectb::vectb(int nD, int nF) : vect(nF - nD + 1)
{
	nDebut = nD; nFin = nF;
}

int& vectb::operator[](int nI)
{
	return vect::operator [] (nI - nDebut);
}
