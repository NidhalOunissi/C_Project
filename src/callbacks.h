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

void
on_GestionElection_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_Statistique_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_GestionBV_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Deconnexion_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Exit_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_Modif_Actv_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Menu_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Exit2_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Exit4_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Deconnexion4_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_GestionObservateur_AccAB_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Exit5_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Deconnexion5_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_GestionListeElec2_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_Vote_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Exit6_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_Btn_Deconnexion6_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_GestionReclamation2_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_HommeModif_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_FemmeModif_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_EtrangerModif_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_TunisienModif_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_PosteAdminModif_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_AgentBureauModif_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ObservateurModif_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ReinitialiserModif_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_ModiferBtn_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_Exit7_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_PosteElecteurModif_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_okbutton1_clicked                   (GtkButton       *button,
                                        gpointer         user_data);
