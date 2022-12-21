#ifndef FONCTIONSPC_H_INCLUDED
#define FONCTIONSPC_H_INCLUDED

#include<gtk/gtk.h>

typedef struct
{
    int jours;
    int mois;
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
    char CIN [10];
    Date DateNaissance;
    char ID [30];
    char mdp [30];
    int genre;
    int role [4];
    int BV;
    Vote v;
    int nationalite;

}Utilisateur;

typedef struct
{
    char Idt_Id [30];
    char Idt_Mdp[30];
    int Idt_Role;

}Credentials;



Utilisateur SaisirUtilisateur ();
int ajouterUtilisateur (char * filename, Utilisateur p);
int modifierUtilisateur( char * filename, char id [], Utilisateur aux);
int supprimerUtilisateur(char * utilisateurs, char id []);
int chercherUtilisateur(char * filename, char id []);
int VerifierConnexion (char * filename, Credentials c, int i);
void AfficherUtl (GtkWidget *liste);



#endif // FONCTIONSPC_H_INCLUDED
