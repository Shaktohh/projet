#ifndef Vue_H
#define Vue_H

typedef enum {Ver, Plante} te_Nourriture;
typedef enum {vide, petit, moyen, plein, pierre} te_Etatterre;
typedef struct {te_Nourriture Nourriture; int ptNourriture; te_Etatterre eEtatterre; int eTaupes;} t_motte;

void Vue_amorcer();
t_motte** Vue_init(int elmax, int ecmax);
void Vue_bord(t_motte** pMotte, int elmax, int ecmax);
void Vue_afficher(t_motte** pMotte, int elmax, int ecmax);

#endif
