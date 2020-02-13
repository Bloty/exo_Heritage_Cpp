#pragma once
#include "vect.h"

class vectb : public vect
{
    int nDebut;
    int nFin;
public:
    vectb(int, int);

    int& operator [] (int );
};
