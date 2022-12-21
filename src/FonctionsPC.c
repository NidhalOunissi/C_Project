#include "FonctionsPC.h"
#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>


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
        fprintf(f,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,p.DateNaissance.jours,p.DateNaissance.mois,p.DateNaissance.annee,p.ID,p.mdp,p.genre,p.role[0],p.role[1],p.role[2],p.role[3],p.BV,p.v.vote);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifierUtilisateur( char * filename, char id [], Utilisateur aux)
{
    int tr=0;
    int conv=0;
    char ax [30];
    Utilisateur p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,&p.DateNaissance.jours,&p.DateNaissance.mois,&p.DateNaissance.annee,p.ID,p.mdp,&p.genre,&p.role[0],&p.role[1],&p.role[2],&p.role[3],&p.BV,&p.v.vote)!=EOF)
        {

            if(strcmp(p.ID,id)==0)
            {
                //aux=SaisirUtilisateur();
                fprintf(f2,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",aux.nom,aux.prenom,aux.CIN,aux.DateNaissance.jours,aux.DateNaissance.mois,aux.DateNaissance.annee,aux.ID,aux.mdp,aux.genre,aux.role[0],aux.role[1],aux.role[2],aux.role[3],aux.BV,aux.v.vote);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,p.DateNaissance.jours,p.DateNaissance.mois,p.DateNaissance.annee,p.ID,p.mdp,p.genre,p.role[0],p.role[1],p.role[2],p.role[3],p.BV,p.v.vote);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}

int supprimerUtilisateur(char * filename, char id [])
{
    int tr=0;
    Utilisateur p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,&p.DateNaissance.jours,&p.DateNaissance.mois,&p.DateNaissance.annee,p.ID,p.mdp,&p.genre,&p.role[0],&p.role[1],&p.role[2],&p.role[3],&p.BV,&p.v.vote)!=EOF)
        {
            if(strcmp(p.ID,id)==0)
                tr=1;
            else
                fprintf(f2,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",p.nom,p.prenom,p.CIN,p.DateNaissance.jours,p.DateNaissance.mois,p.DateNaissance.annee,p.ID,p.mdp,p.genre,p.role[0],p.role[1],p.role[2],p.role[3],p.BV,p.v.vote);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}

int chercherUtilisateur(char * filename, char id [])
{
    Utilisateur t;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0 && (fscanf(f,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",t.nom,t.prenom,t.CIN,&t.DateNaissance.jours,&t.DateNaissance.mois,&t.DateNaissance.annee,t.ID,t.mdp,&t.genre,&t.role[0],&t.role[1],&t.role[2],&t.role[3],&t.BV,&t.v.vote)!=EOF))
        {
            if(strcmp(t.ID,id)==0)
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


int VerifierConnexion (char * filename, Credentials c, int i)
{
    Utilisateur t;
    int Verif=0;
    int choix;
  
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {

                //c.Idt_Role==choix)
                //strcmp(c.Idt_Id,t.ID)&&strcmp(c.Idt_Mdp,t.mdp)&&(1)

        while ((Verif==0) && (fscanf(f,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",t.nom,t.prenom,t.CIN,&t.DateNaissance.jours,&t.DateNaissance.mois,&t.DateNaissance.annee,t.ID,t.mdp,&t.genre,&t.role[0],&t.role[1],&t.role[2],&t.role[3],&t.BV,&t.v.vote)!=EOF))
        {
                switch (i)
                {
                case 0:
                choix=t.role[0];
                break;
    
                case 1:
                choix=t.role[1];
                break;
    
                case 2:
                choix=t.role[2];
                break;

                case 3:
                choix=t.role[3];
                break;
                }



                
            if((strcmp(c.Idt_Id,t.ID)==0)&&(strcmp(c.Idt_Mdp,t.mdp)==0)&&(c.Idt_Role==choix))
                Verif=1;
        }
    }

    fclose(f);

    return Verif;
}

enum
    {
        CIN,
        NOM,
        PRENOM,
        ID,
        COLUMNS
    };


void AfficherUtl (GtkWidget *liste)
{
    GtkCellRenderer *renderer;
    GtkTreeViewColumn *column;
    GtkTreeIter iter;

    GtkListStore * store;

    FILE *f;

    Utilisateur utl;

    store=gtk_tree_view_get_model(liste);
    if(store ==NULL)
    {
        renderer=gtk_cell_renderer_text_new();
        column=gtk_tree_view_column_new_with_attributes("Cin",renderer,"text",CIN,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

        renderer=gtk_cell_renderer_text_new();
        column=gtk_tree_view_column_new_with_attributes("Nom",renderer,"text",NOM,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

        renderer=gtk_cell_renderer_text_new();
        column=gtk_tree_view_column_new_with_attributes("Prenom",renderer,"text",PRENOM,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

        renderer=gtk_cell_renderer_text_new();
        column=gtk_tree_view_column_new_with_attributes("ID",renderer,"text",ID,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

        store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

        f=fopen("Utilisateur.txt","r");

        if(f==NULL)
        {
            return;
        }
        else
        {
            f=fopen("Utilisateur.txt", "a+");
                while(fscanf(f,"%s %s %s %d %d %d %s %s %d %d %d %d %d %d %d \n",utl.nom,utl.prenom,utl.CIN,&utl.DateNaissance.jours,&utl.DateNaissance.mois,&utl.DateNaissance.annee,utl.ID,utl.mdp,&utl.genre,&utl.role[0],&utl.role[1],&utl.role[2],&utl.role[3],&utl.BV,&utl.v.vote)!=EOF)
                {
                    gtk_list_store_append(store,&iter);

                    gtk_list_store_set(store,&iter,CIN,utl.CIN,NOM,utl.nom,PRENOM,utl.prenom,ID,utl.ID,-1);
                }
                fclose(f);
            gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
            g_object_unref(store);
        }

    }

}
