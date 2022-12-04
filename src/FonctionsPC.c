#include "FonctionsPC.h"
#include <stdio.h>
#include <string.h>


/*Utilisateur SaisirUtilisateur ()
{
    char confirmation [30];
    Utilisateur p;
    printf("Introduire le nom et le prenom \n");
    scanf("%s%s",p.nom,p.prenom);
    printf("introduire la date de naissance \n");
    scanf("%d%s%d",&p.DateNaissance.jours,p.DateNaissance.mois,&p.DateNaissance.annee);
    printf("Introduire un ID \n");
    scanf("%d",&p.ID);
    printf("Introduire un CIN \n");
    scanf("%d",&p.CIN);
    //do
    //{
    printf("Introduire le genre : (1) Femme (2) Homme \n");
    scanf("%d",&p.genre);
    //}while((p.genre != 1) || (p.genre != 0));
    printf("Introduire le role (1)-Electeur (2)-Agent de bureau (3)-Observateur (4)-Admin \n");
    scanf("%d",&p.role);
    printf("introduire le num du bureau de vote \n");
    scanf("%d",&p.BV);

    do
    {
    printf("Introduire le mot de passe \n");
    scanf("%s",p.mdp);
    printf("Confirmer le mot de passe \n");
    scanf("%s",confirmation);
    }while(strcmp(p.mdp,confirmation)!=0);

    p.vote=-1;
    return p;

}*/




int ajouterUtilisateur (char * filename, Utilisateur p)
{

    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %s %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,p.DateNaissance.jours,p.DateNaissance.mois,p.DateNaissance.annee,p.ID,p.mdp,p.genre,p.role[0],p.role[1],p.role[2],p.role[3],p.BV,p.v.vote);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifierUtilisateur( char * filename, int id, Utilisateur aux, Utilisateur p )
{
    int tr=0;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %s %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,&p.CIN,&p.DateNaissance.jours,p.DateNaissance.mois,&p.DateNaissance.annee,p.ID,p.mdp,&p.genre,&p.role[0],&p.role[1],&p.role[2],&p.role[3],&p.BV,&p.v.vote)!=EOF)
        {
            if(p.ID == id)
            {
                //aux=SaisirUtilisateur();
                fprintf(f2,"%s %s %d %d %s %d %s %s %d %d %d %d %d %d %d \n",aux.nom,aux.prenom,aux.CIN,aux.DateNaissance.jours,aux.DateNaissance.mois,aux.DateNaissance.annee,aux.ID,aux.mdp,aux.genre,aux.role[0],aux.role[1],aux.role[2],aux.role[3],aux.BV,aux.v.vote);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d %s %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,p.DateNaissance.jours,p.DateNaissance.mois,p.DateNaissance.annee,p.ID,p.mdp,p.genre,p.role[0],p.role[1],p.role[2],p.role[3],p.BV,p.v.vote);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimerUtilisateur(char * filename, int id)
{
    int tr=0;
    Utilisateur p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %s %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,&p.CIN,&p.DateNaissance.jours,p.DateNaissance.mois,&p.DateNaissance.annee,p.ID,p.mdp,&p.genre,&p.role[0],&p.role[1],&p.role[2],&p.role[3],&p.BV,&p.v.vote)!=EOF)
        {
            if(p.ID == id)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %s %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,p.DateNaissance.jours,p.DateNaissance.mois,p.DateNaissance.annee,p.ID,p.mdp,p.genre,p.role[0],p.role[1],p.role[2],p.role[3],p.BV,p.v.vote);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}

int chercherUtilisateur(char * filename, int id)
{
    Utilisateur t;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0 && (fscanf(f,"%s %s %d %d %s %d %s %s %d %d %d %d %d %d %d \n",t.nom,t.prenom,&t.CIN,&t.DateNaissance.jours,t.DateNaissance.mois,&t.DateNaissance.annee,t.ID,t.mdp,&t.genre,&t.role[0],&t.role[1],&t.role[2],&t.role[3],&t.BV,&t.v.vote)!=EOF))
        {
            if(t.ID == id)
            {
                tr=1;
                return 1;
            }
        }
    }
    fclose(f);
    if(tr==0)
        return 0;

}
