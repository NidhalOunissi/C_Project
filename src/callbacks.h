#include <gtk/gtk.h>
#include "FonctionsPC.h"


void
on_Ajout_Utilisateur_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_Annuler_Utilisateur_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Exit_leave                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_MenuPrincipal_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_Genre_Femme_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Genre_Homme_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Utl_Tunisie_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Utl_Etranger_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_AdminCmb_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_AgentBureauCmb_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ElecteurCmb_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ObservateurCmb_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Obs_Presse_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Obs_PartiePolitique_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Obs_SV_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Obs_Autre_toggled                   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
