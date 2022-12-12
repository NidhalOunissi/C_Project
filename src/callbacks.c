#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "FonctionsPC.h"
#include <string.h>


Utilisateur utl;
Utilisateur aux;
Credentials c;

int i;
int verifSupp=-1;

int flag_Mod;

int id_modif;

char convINT [30];


void
on_Ajout_Utilisateur_clicked           (GtkButton *button, gpointer user_data)
{
    //flag_Mod=0;
    

    /*GtkWidget * Nom_Utilisateur;
    GtkWidget * Prenom_Utilisateur;
    GtkWidget * Genre_Femme;
    GtkWidget * Genre_Homme; 
    GtkWidget * AdminCmb;
    GtkWidget * AgentBureauCmb;
    GtkWidget * ElecteurCmb;
    GtkWidget * ObservateurCmb;
    GtkWidget * Obs_Presse;
    GtkWidget * Obs_PartiePolitique;
    GtkWidget * Obs_SV;
    GtkWidget * Obs_Autre;*/

    char confirmationMDP [30];


    GtkWidget * Nom;
    GtkWidget * Prenom;
    GtkWidget * Genre_F;
    GtkWidget * Genre_H; 
    GtkWidget * AdminCb;
    GtkWidget * AgentBureauCb;
    GtkWidget * ElecteurCb;
    GtkWidget * ObservateurCb;
    GtkWidget * Obs_Presse;
    GtkWidget * Obs_PartiePolitique;
    GtkWidget * Obs_SV;
    GtkWidget * Obs_Autre;
    GtkWidget * Id;
    GtkWidget * mdp;
    GtkWidget * C_Mdp;
    GtkWidget * Cin;
    GtkWidget * ComboBV;

    GtkWidget * Calendar;



    GtkWidget * GestionUtilisateur;

    GestionUtilisateur=lookup_widget(button,"GestionUtilisateur");
    

    Nom=lookup_widget(button, "Nom_Utilisateur");
    Prenom=lookup_widget(button, "Prenom_Utilisateur");
    Id=lookup_widget(button,"ID_utilisateur");
    Cin=lookup_widget(button,"CIN_Utilisateur");
    mdp=lookup_widget(button,"Mdp_Utilisateur");
    C_Mdp=lookup_widget(button,"V_Mdp_Utilisateur");

    ComboBV=lookup_widget(button,"combobox1");

    Calendar=lookup_widget(button,"calendar1");

    gtk_calendar_get_date(Calendar,&utl.DateNaissance.jours,&utl.DateNaissance.mois,&utl.DateNaissance.annee);




    /*strcpy(utl.nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
    strcpy(utl.prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
    strcpy(utl.ID,gtk_entry_get_text(GTK_ENTRY(Id)));
    strcpy(utl.CIN,gtk_entry_get_text(GTK_ENTRY(Cin)));
    strcpy(utl.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
    strcpy(confirmationMDP,gtk_entry_get_text(GTK_ENTRY(C_Mdp)));*/


    
    if(flag_Mod==0)
    {
        strcpy(utl.nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
        strcpy(utl.prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
        strcpy(utl.ID,gtk_entry_get_text(GTK_ENTRY(Id)));
        strcpy(utl.CIN,gtk_entry_get_text(GTK_ENTRY(Cin)));
        strcpy(utl.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
        strcpy(confirmationMDP,gtk_entry_get_text(GTK_ENTRY(C_Mdp)));
        utl.v.vote=-1;

        if(strcmp("Arrondissement 1",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            utl.BV=1;
        }
        else if(strcmp("Arrondissement 2",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            utl.BV=2;
        }
        else if(strcmp("Arrondissement 3",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            utl.BV=3;
        }
        else if(strcmp("Arrondissement 4",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            utl.BV=4;
        }
        else if(strcmp("Arrondissement 5",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            utl.BV=5;
        }
        else if(strcmp("Arrondissement 6",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            utl.BV=6;
        }

        ajouterUtilisateur("Utilisateur.txt",utl);
    }
    else if (flag_Mod==1)
    {   
        strcpy(aux.nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
        strcpy(aux.prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
        strcpy(aux.ID,gtk_entry_get_text(GTK_ENTRY(Id)));
        strcpy(aux.CIN,gtk_entry_get_text(GTK_ENTRY(Cin)));
        strcpy(aux.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
        strcpy(confirmationMDP,gtk_entry_get_text(GTK_ENTRY(C_Mdp)));
        modifierUtilisateur("Utilisateur.txt",convINT,aux);
        flag_Mod=0;
    }






}


void
on_Annuler_Utilisateur_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * GestionUtilisateur;
    GtkWidget * Raz_GestionUtilisateur;

    /*gtk_widget_hide(GestionUtilisateur);
    Raz_GestionUtilisateur=create_GestionUtilisateur();
    gtk_widget_show(Raz_GestionUtilisateur);*/

    GtkWidget * Nom;
    GtkWidget * Prenom;

    GestionUtilisateur=lookup_widget(button,"GestionUtilisateur");
    gtk_widget_hide(GestionUtilisateur);
    Raz_GestionUtilisateur=create_GestionUtilisateur();
    gtk_widget_show(Raz_GestionUtilisateur);

    /*Nom=lookup_widget(button, "Nom_Utilisateur");
    Prenom=lookup_widget(button, "Prenom_Utilisateur");

    Nom=gtk_entry_new();
    //Prenom=gtk_entry_new();

    gtk_entry_set_text(GTK_ENTRY(Nom),"");*/
    

}


void
on_Btn_Exit_leave                      (GtkButton       *button,
                                        gpointer         user_data)
{
    gtk_main_quit();

}


void
on_Btn_MenuPrincipal_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * GestionUtilisateur;
    GtkWidget * Acceuil_Admin;

    GestionUtilisateur=lookup_widget(button,"GestionUtilisateur");
    gtk_widget_hide(GestionUtilisateur);
    Acceuil_Admin=create_Accueil_Admin();
    gtk_widget_show(Acceuil_Admin);

}


void
on_Genre_Femme_toggled                 (GtkRadioButton  *radiobutton,
                                        gpointer         user_data)

{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(radiobutton)))
    {
        utl.genre=1;
        /*if(flag_Mod==0)
            utl.genre=1;
        else
            utl.genre=0;

        if(flag_Mod==1)
            aux.genre=1;
        else 
            aux.genre=0*/
    }


}


void
on_Genre_Homme_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        utl.genre=2;
        /*if(flag_Mod==0)
            utl.genre=2;
        else
            utl.genre=0;

        if(flag_Mod==1)
            aux.genre=2;
        else
            aux.genre=0;*/
    }

}


void
on_Utl_Tunisie_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        utl.nationalite=1;
        /*if(flag_Mod==0)
            utl.nationalite=1;
        else
            utl.nationalite=0;

        if(flag_Mod==1)
            aux.nationalite=1;
        else
            aux.nationalite=0;*/
    }

}


void
on_Utl_Etranger_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        utl.nationalite=2;
        /*if(flag_Mod==0)
            utl.nationalite=2;
        else if(flag_Mod==1)
            aux.nationalite=2;*/
    }

}


void
on_AdminCmb_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(togglebutton))
    {
        utl.role[0]=1;
        /*if(flag_Mod==0)
            utl.role[0]=1;
        else if(flag_Mod==1)
            aux.role[0]=1;*/
    }
    else 
        utl.role[0]=1;

}


void
on_AgentBureauCmb_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(togglebutton))
    {
        utl.role[1]=1;
        /*if(flag_Mod==0)
            utl.role[1]=1;
        else if(flag_Mod==1)
            aux.role[1]=1;*/
    }
    else
        utl.role[1]=0;

}


void
on_ElecteurCmb_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    
    if(gtk_toggle_button_get_active(togglebutton))
    {
        utl.role[2]=1;
        /*if(flag_Mod==0)
            utl.role[2]=1;
        else if(flag_Mod==1)
            aux.role[2]=1;*/
    }
    else
    {utl.role[2]=0;}

}


void
on_ObservateurCmb_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

    if(flag_Mod==1)
    {
        if(gtk_toggle_button_get_active(togglebutton))
        {
        utl.role[3]=1;
        /*if(flag_Mod==0)
            utl.role[3]=1;
        else if(flag_Mod==1)
            aux.role[3]=1;*/
        }   
        else
        {
            utl.role[3]=0;
        }
    }
    else
    {
        if (gtk_toggle_button_get_active(togglebutton))
            utl.role[3]=1;
        else
            utl.role[3]=0;
    }

}


void
on_Obs_Presse_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
   

}


void
on_Obs_PartiePolitique_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_Obs_SV_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_Obs_Autre_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}




void
on_GestionUtilisateur_Btn_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * GestionUtilisateur;
    GtkWidget * Acceuil_Admin;

    Acceuil_Admin=lookup_widget(button,"Accueil_Admin");
    gtk_widget_hide(Acceuil_Admin);
    GestionUtilisateur=create_GestionUtilisateur();
    gtk_widget_show(GestionUtilisateur);

}


void
on_Modifier_Utilisateur_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

    


    flag_Mod=1;
    
    //char convINT [30];

    GtkWidget * Id_mod;
    GtkWidget * Notebook;

    //gint PageNum;

    //PageNum = gtk_notebook_get_current_page(GTK_NOTEBOOK(Notebook));


    Id_mod=lookup_widget(button,"ID_Modif");
    Notebook=lookup_widget(button,"notebook1");
    strcpy(convINT,gtk_entry_get_text(GTK_ENTRY(Id_mod)));

    //id_modif = atoi(convINT);
    gtk_notebook_prev_page(Notebook);
    gtk_notebook_prev_page(Notebook);

  

    

    /*GtkWidget * Nom_Aux;
    GtkWidget * Prenom_Aux; */




    //modifierUtilisateur("Utilisateur.txt",id,aux,utl);



}


void
on_Btn_Connecter_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
    int verif=0;

    GtkWidget * Ident;
    GtkWidget * MotDePasse;

    GtkWidget * Accueil_Admin;
    GtkWidget * Acceuil_Agent_Bureau;
    GtkWidget * Acceuil_obs;
    GtkWidget * Acceuil_Electeur;

    GtkWidget * Identification;

    Identification=lookup_widget(button,"Identification");


    Ident=lookup_widget(button,"id_ID");
    MotDePasse=lookup_widget(button,"id_Mdp");


    //gtk_entry_set_visibility(GTK_ENTRY(MotDePasse),FALSE);


    strcpy(c.Idt_Id,gtk_entry_get_text(GTK_ENTRY(Ident)));
    strcpy(c.Idt_Mdp,gtk_entry_get_text(GTK_ENTRY(MotDePasse)));

                //TEst w barra 
                /*Identification=lookup_widget(button,"Identification");
                gtk_widget_hide(Identification);
                Accueil_Admin=create_Accueil_Admin();
                gtk_widget_show(Accueil_Admin);*/
                //Test w barra

    verif=VerifierConnexion("Utilisateur.txt",c,i);
        if(verif)
       {
            switch (i)
            {
            case 0:
                Identification=lookup_widget(button,"Identification");
                gtk_widget_hide(Identification);
                Accueil_Admin=create_Accueil_Admin();
                gtk_widget_show(Accueil_Admin);
                break;
                

            case 1:
                Identification=lookup_widget(button,"Identification");
                gtk_widget_hide(Identification);
                Acceuil_Agent_Bureau=create_Accueil_Agent_Bureau();
                gtk_widget_show(Acceuil_Agent_Bureau);
                break;
            
            case 2:
                Identification=lookup_widget(button,"Identification");
                gtk_widget_hide(Identification);
                Acceuil_Electeur=create_Accueil_Electeur();
                gtk_widget_show(Acceuil_Electeur);
                break;
            
            case 3:
                Identification=lookup_widget(button,"Identification");
                gtk_widget_hide(Identification);
                Acceuil_obs=create_Accueil_Obs();
                gtk_widget_show(Acceuil_obs);
                break;

            }
        }


}


void
on_R_Admin_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        c.Idt_Role=1;
        i=0;
    }
    else 
        c.Idt_Role=0;

}


void
on_R_Observateur_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        c.Idt_Role=1;
        i=3;
    }
    else
        c.Idt_Role=0;


}


void
on_R_Electeur_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
        if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        c.Idt_Role=1;
        i=2;
    }
    else 
        c.Idt_Role=0;

}


void
on_R_Agent_Bureau_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        c.Idt_Role=1;
        i=1;
    }
    else 
        c.Idt_Role=0;

}


void
on_Supprimer_Utilisateur_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
    char supp[30];
    int id;

    GtkWidget * ID_Supp;

    ID_Supp=lookup_widget(button,"entrySupp");
    strcpy(supp,gtk_entry_get_text(GTK_ENTRY(ID_Supp)));
    id=atoi(supp);

    if(verifSupp==1)
    {
    supprimerUtilisateur("Utilisateur.txt",id);
    }

}


void
on_V_Supprimer_Utilisateur_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
    {
        verifSupp=1;
    }
    else 
        verifSupp=0;

}


void
on_Btn_MenuPrincipal2_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * GestionUtilisateur;
    GtkWidget * Acceuil_Admin;

    GestionUtilisateur=lookup_widget(button,"GestionUtilisateur");
    gtk_widget_hide(GestionUtilisateur);
    Acceuil_Admin=create_Accueil_Admin();
    gtk_widget_show(Acceuil_Admin);


}


void
on_Btn_Exit3_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
    gtk_main_quit();

}


void
on_AfficherUTL_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget *treeview;

    GtkWidget * Affichage;

    Affichage=lookup_widget(button,"GestionUtilisateur");

    treeview=lookup_widget(Affichage,"treeview1");

    AfficherUtl(treeview);

}


void
on_GestionElection_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * GestionElection;
    GtkWidget * Acceuil_Admin;

    Acceuil_Admin=lookup_widget(button,"Accueil_Admin");
    gtk_widget_hide(Acceuil_Admin);
    GestionElection=create_GestionElection();
    gtk_widget_show(GestionElection);

}


void
on_Statistique_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * Stat;
    GtkWidget * Acceuil_Admin;

    Acceuil_Admin=lookup_widget(button,"Accueil_Admin");
    gtk_widget_hide(Acceuil_Admin);
    Stat=create_Statistique();
    gtk_widget_show(Stat);
}


void
on_GestionBV_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * GestionBV;
    GtkWidget * Acceuil_Admin;

    Acceuil_Admin=lookup_widget(button,"Accueil_Admin");
    gtk_widget_hide(Acceuil_Admin);
    GestionBV=create_GestionBV();
    gtk_widget_show(GestionBV);

}


void
on_Btn_Deconnexion_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
    GtkWidget * Identif;
    GtkWidget * Acceuil_Admin;

    Acceuil_Admin=lookup_widget(button,"Accueil_Admin");
    gtk_widget_hide(Acceuil_Admin);
    Identif=create_Identification();
    gtk_widget_show(Identif);

}


void
on_Btn_Exit_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
    gtk_main_quit();

}


void
on_Modif_Actv_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

    char confirmationMDP [30];

    int flag_mod=1;


    GtkWidget * Nom;
    GtkWidget * Prenom;
    GtkWidget * Genre_F;
    GtkWidget * Genre_H; 
    GtkWidget * AdminCb;
    GtkWidget * AgentBureauCb;
    GtkWidget * ElecteurCb;
    GtkWidget * ObservateurCb;
    GtkWidget * Obs_Presse;
    GtkWidget * Obs_PartiePolitique;
    GtkWidget * Obs_SV;
    GtkWidget * Obs_Autre;
    GtkWidget * Id;
    GtkWidget * mdp;
    GtkWidget * C_Mdp;
    GtkWidget * Cin;
    GtkWidget * ComboBV;

    GtkWidget * Calendar;



    GtkWidget * GestionUtilisateur;

    GestionUtilisateur=lookup_widget(button,"GestionUtilisateur");
    

    Nom=lookup_widget(button, "Nom_Utilisateur");
    Prenom=lookup_widget(button, "Prenom_Utilisateur");
    Id=lookup_widget(button,"ID_utilisateur");
    Cin=lookup_widget(button,"CIN_Utilisateur");
    mdp=lookup_widget(button,"Mdp_Utilisateur");
    C_Mdp=lookup_widget(button,"V_Mdp_Utilisateur");

    ComboBV=lookup_widget(button,"combobox1");

    Calendar=lookup_widget(button,"calendar1");

    gtk_calendar_get_date(Calendar,&utl.DateNaissance.jours,&utl.DateNaissance.mois,&utl.DateNaissance.annee);




    /*strcpy(utl.nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
    strcpy(utl.prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
    strcpy(utl.ID,gtk_entry_get_text(GTK_ENTRY(Id)));
    strcpy(utl.CIN,gtk_entry_get_text(GTK_ENTRY(Cin)));
    strcpy(utl.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
    strcpy(confirmationMDP,gtk_entry_get_text(GTK_ENTRY(C_Mdp)));*/


    
        strcpy(aux.nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
        strcpy(aux.prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
        strcpy(aux.ID,gtk_entry_get_text(GTK_ENTRY(Id)));
        strcpy(aux.CIN,gtk_entry_get_text(GTK_ENTRY(Cin)));
        strcpy(aux.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
        strcpy(confirmationMDP,gtk_entry_get_text(GTK_ENTRY(C_Mdp)));
        aux.v.vote=-1;


        if(strcmp("Arrondissement 1",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            aux.BV=1;
        }
        else if(strcmp("Arrondissement 2",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            aux.BV=2;
        }
        else if(strcmp("Arrondissement 3",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            aux.BV=3;
        }
        else if(strcmp("Arrondissement 4",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            aux.BV=4;
        }
        else if(strcmp("Arrondissement 5",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            aux.BV=5;
        }
        else if(strcmp("Arrondissement 6",(gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboBV))))==0)
        {
            aux.BV=6;
        }

        modifierUtilisateur("Utilisateur.txt",convINT,aux);

        flag_mod=0;



}

