#include "vect.h"
#include <stdlib.h>

vect::vect(int nElem)
{
	adr = new int;
	for (int i = 0; i < nElem; i++)
	{
		*adr = i;
	}
}

vect::~vect()
{
	free(adr);
}

int& vect::operator[](int index)
{
	return adr[index];
}
