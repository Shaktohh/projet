#include "outils.h"
#include "Vue.h"
#include "Scene.h"

int main (void){

char mat[15][20];

outil_amorcer();
outil_init();

VueInitialiser(0,0,15,20,mat);
eDirection diD=diOuest;
t_origine Origine= {5,6};
MurAjouter(Origine,diD,5);
MurEcrire (15, 20, mat);
cmatAfficher (0, 0, 15, 20, mat);

return 0;

}
