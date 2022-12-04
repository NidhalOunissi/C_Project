#ifndef FONCTIONSPC_H_INCLUDED
#define FONCTIONSPC_H_INCLUDED

typedef struct
{
    int jours;
    char mois [10];
    int annee;

}Date;

typedef struct 
{
    int vote;
    char Id_Lst [30];
}Vote;

typedef struct
{
    char nom [30];
    char prenom [30];
    int CIN;
    Date DateNaissance;
    char ID [30];
    char mdp [30];
    int genre;
    int role [4];
    int BV;
    Vote v;
    int nationalite;

}Utilisateur;

Utilisateur SaisirUtilisateur ();
int ajouterUtilisateur (char * filename, Utilisateur p);
int modifierUtilisateur( char * utilisateurs, int id, Utilisateur aux, Utilisateur p );
int supprimerUtilisateur(char * utilisateurs, int id);
int chercherUtilisateur(char * filename, int id);



#endif // FONCTIONSPC_H_INCLUDED
