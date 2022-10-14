#include <stdio.h>
#include <stdlib.h>
#include "FonctionsEx6.h"



void main()
{
    int n,T1[50],T2[50];
    n=saisirTaille();
    remplissageTableau(T1,n);
    affichageTableau(T1,n);
    transfert(T1,T2,n);
    affichageTableau(T2,n);

}
