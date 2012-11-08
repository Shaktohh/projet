#include "Vue.h"
#include "outils.h"

void Vue_amorcer() {}

t_motte** Vue_init(int elmax, int ecmax) {
   	int eLigne, eColonne;

	t_motte** pMotte;
	/* allocation mémoire pour le tableau de sous-tableaux :  */
	pMotte = (t_motte**) malloc(ecmax * sizeof(t_motte*));

	/* allocation mémoire pour chaque sous-tableau de de structure : */
	for (eLigne = 0; eLigne < elmax; eLigne++)
	pMotte[eLigne] = (t_motte*) malloc(ecmax * sizeof(t_motte));

	pMotte[0] = (t_motte*) malloc(ecmax * sizeof(t_motte));

	for (eLigne = 0; eLigne < elmax-1; eLigne++){
		for (eColonne = 0; eColonne < ecmax-1; eColonne++){
			pMotte[eLigne][eColonne].eEtatterre=plein;
		}
	}	

	return pMotte;

}

void Vue_bord(t_motte** pMotte, int elmax, int ecmax) {
	/* Fait les bords de la scène de 0 à lmax et de 0 à cmax*/
   	int eLigne, eColonne;

	for(eColonne=0;eColonne<ecmax;eColonne++) {
		pMotte[0][eColonne].eEtatterre=pierre;
		pMotte[elmax-1][eColonne].eEtatterre=pierre;
	}
	for(eLigne=0;eLigne<elmax;eLigne++) {
		pMotte[eLigne][0].eEtatterre=pierre;
		pMotte[eLigne][ecmax-1].eEtatterre=pierre;
	}
}

void Vue_afficher(t_motte** pMotte, int elmax, int ecmax) {
	/* Affiche le contenu de la scène */
   	int eLigne, eColonne;

	for (eLigne = 0; eLigne < elmax; eLigne++){
		for (eColonne = 0; eColonne < ecmax; eColonne++){
			switch(pMotte[eLigne][eColonne].eEtatterre){
				case pierre : 	printf("*  "); 
						break;
				case plein :	printf("0  ");
						break;
				case moyen :	printf("O  ");
						break;
				case petit :	printf("o  ");
						break;
				case vide :	printf("   ");
						break;
			}

			switch(pMotte[eLigne][eColonne].eTaupes){
				case 1 : 	printf("1  "); 
						break;
				case 2 :	printf("2  ");
						break;
				case 3 :	printf("3  ");
						break;
			}
		}
		printf("\n");
	}
}

/*
	// désallocation mémoire de chaque sous-tableau de reels : 
	for (i = 0; i < lmax; i++)
	free(motte[i]);

	// désallocation mémoire du tableau de sous-tableaux :
	free(motte);
*/

