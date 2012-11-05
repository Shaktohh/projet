#include "Vue.h"
#include "outils.h"

void Vue_amorcer() {}
void Vue_init() {}

void VueInitialiser(int lmin, int cmin, int lmax, int cmax, int mat[lmax][cmax]){
	Vue_amorcer();
	Vue_init();
	cmatInit(' ',lmax,cmax, mat);
	cmatBords ('*',lmin, cmin, lmax, cmax, mat);
	cmatAfficher (lmin, cmin, lmax, cmax, mat);
}

