

#ifndef BV_H_INCLUDED
#define BV_H_INCLUDED

typedef struct
{
int id;
int idAgent;
int capObservateurs;
int capElecteurs;
char salle [20];
char adresse[50];
}BureauDeVote;

int ajouter(BureauDeVote BV , char filename []);
int modifier(int id, BureauDeVote nouv, char * filename);
int supprimer(int id, char * filename);
BureauDeVote chercher(int id, char * filename);

#endif // BV_H_INCLUDED

