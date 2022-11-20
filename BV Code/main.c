#include "BV.h"
#include<stdio.h>
int main()
{
BureauDeVote BV;
BureauDeVote BV1={1, 2000,10,720,"Rue Taieb Mhiri",1};
BureauDeVote BV2={2, 1500,7,301,"Rue Al Kods",2};
ajouter(BV1,"BureauDeVote.txt");
ajouter(BV2,"BureauDeVote.txt");

BV= chercher(2,"BureauDeVote.txt");
if(BV.id==1)
printf("inexistant");
else
printf("%d %d %d %s %s %d\n",BV.id,BV.capElecteurs,BV.capObservateurs,BV.salle,BV.adresse, BV.idAgent);

}

