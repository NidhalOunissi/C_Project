#include "BV.h"
#include<stdio.h>
int main()
{
BureauDeVote BV;
BureauDeVote BV1={1, 2000,10,"35E0","Rue Taieb Mhiri, Rohia Silyana",1} ,BV2={2, 1500,7,"35E1","Rue Al Kods, Rohia Silyana",2};
ajouter(BV1,"BureauDeVote.txt");

BV= chercher(2,"BureauDeVote.txt");
if(BV1.id==1)
printf("inexistant");
else
printf("%d %d %d %s %s %d\n",BV.id,BV.capElecteurs,BV.capObservateurs,BV.salle,BV.adresse, BV.idAgent);

}

