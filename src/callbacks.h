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

void
on_GestionUtilisateur_activate         (GtkButton       *button,
                                        gpointer         user_data);

void
on_GestionUtilisateur_Btn_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_Modifier_Utilisateur_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Connecter_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_R_Admin_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_R_Observateur_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_R_Electeur_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_R_Agent_Bureau_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Genre_Femme_toggled                 (GtkRadioButton  *radiobutton,
                                        gpointer         user_data);

void
on_Genre_Homme_group_changed           (GtkRadioButton  *radiobutton,
                                        gpointer         user_data);

void
on_Utl_Etranger_group_changed          (GtkRadioButton  *radiobutton,
                                        gpointer         user_data);

void
on_Utl_Tunisie_group_changed           (GtkRadioButton  *radiobutton,
                                        gpointer         user_data);

void
on_Supprimer_Utilisateur_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_V_Supprimer_Utilisateur_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Btn_MenuPrincipal2_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Exit3_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_AfficherUTL_clicked                 (GtkButton       *button,
                                        gpointer         user_data);
