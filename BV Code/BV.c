#include "BV.h"
#include<stdio.h>
int ajouter(BureauDeVote BV , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %s %s %d\n",BV.id,BV.capElecteurs,BV.capObservateurs,BV.salle,BV.adresse, BV.idAgent);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id, BureauDeVote nouv, char * filename)
{
BureauDeVote BV;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %s %s %d",&BV.id,&BV.capElecteurs,&BV.capObservateurs,BV.salle, BV.adresse, &BV.idAgent)!=EOF)
{
if(BV.id!=id)
        fprintf(f2,"%d %d %d %s %s %d\n",BV.id,BV.capElecteurs,BV.capObservateurs,BV.salle,BV.adresse, BV.idAgent);
else

  fprintf(f2,"%d %d %d %s %s %d\n",nouv.id,nouv.capElecteurs,nouv.capObservateurs,nouv.salle, nouv.adresse, nouv.idAgent);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(int id, char * filename)
{
BureauDeVote BV;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %s %s %d",&BV.id,&BV.capElecteurs,&BV.capObservateurs,BV.salle, BV.adresse, &BV.idAgent)!=EOF)
{
if(BV.id!=id)
        fprintf(f2,"%d %d %d %s %s %d\n",BV.id,BV.capElecteurs,BV.capObservateurs,BV.salle,BV.adresse, BV.idAgent);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

BureauDeVote chercher(int id, char * filename)
{
BureauDeVote BV; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %d %d %s %s %d",&BV.id,&BV.capElecteurs,&BV.capObservateurs,BV.salle, BV.adresse, &BV.idAgent)!=EOF && tr==0)
{if(id==BV.id)
tr=1;
}
}
if(tr==0)
BV.id=-1;
return BV;

}

