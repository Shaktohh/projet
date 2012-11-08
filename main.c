#include "outils.h"
#include "Vue.h"
#include "Scene.h"
#include "Nourriture.h"

#define elmax 20
#define ecmax 30

int main (void){

outil_amorcer();
outil_init();
Alea0();

t_motte** pMotte= Vue_init(elmax,ecmax);
Vue_bord(pMotte,elmax,ecmax);
Vue_afficher(pMotte,elmax,ecmax);
Nourriture_init(pMotte,elmax,ecmax);

return 0;

}
