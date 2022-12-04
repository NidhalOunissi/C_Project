#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "FonctionsPC.h"


Utilisateur utl;


void
on_Ajout_Utilisateur_clicked           (GtkButton *button, gpointer user_data)
{
    

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

    GtkWidget * GestionUtilisateur;

    GestionUtilisateur=lookup_widget(button,"GestionUtilisateur");
    





    Nom=lookup_widget(button, "Nom_Utilisateur");
    Prenom=lookup_widget(button, "Prenom_Utilisateur");
    Id=lookup_widget(button,"ID_utilisiateur");
    Cin=lookup_widget(button,"CIN_Utilisateur");
    mdp=lookup_widget(button,"Mdp_Utilisateur");
    C_Mdp=lookup_widget(button,"V_Mdp_Utilisateur");




    strcpy(utl.nom,gtk_entry_get_text(GTK_ENTRY(Nom)));
    strcpy(utl.prenom,gtk_entry_get_text(GTK_ENTRY(Prenom)));
    strcpy(utl.ID,gtk_entry_get_text(GTK_ENTRY(Id)));
    strcpy(utl.CIN,gtk_entry_get_text(GTK_ENTRY(Cin)));
    strcpy(utl.mdp,gtk_entry_get_text(GTK_ENTRY(mdp)));
    strcpy(confirmationMDP,gtk_entry_get_text(GTK_ENTRY(C_Mdp)));

    


    ajouterUtilisateur("Utilisateur.txt",utl);





}


void
on_Annuler_Utilisateur_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_Btn_Exit_leave                      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_Btn_MenuPrincipal_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_Genre_Femme_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
        utl.genre=1;

}


void
on_Genre_Homme_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
        utl.genre=2;

}


void
on_Utl_Tunisie_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
        utl.nationalite=1;

}


void
on_Utl_Etranger_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
        utl.nationalite=2;

}


void
on_AdminCmb_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(togglebutton))
        utl.role[0]=1;

}


void
on_AgentBureauCmb_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(togglebutton))
        utl.role[1]=1;

}


void
on_ElecteurCmb_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(togglebutton))
        utl.role[2]=1;

}


void
on_ObservateurCmb_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
    if(gtk_toggle_button_get_active(togglebutton))
        utl.role[3]=1;

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

