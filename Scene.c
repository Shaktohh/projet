#include "Scene.h"
#include "outils.h"

#define Mmax 500

void Scene_amorcer() {}
void Scene_init() {}

t_element Collection[Mmax];
int eCompteur_mur=0;

void MurAjouter (t_origine Origine, eDirection diD, int eLg){
	t_element mur = {Origine, diD, eLg};
	Collection[eCompteur_mur]=mur;
	eCompteur_mur++;
}

void murer(int dx, int dy, int lmax, int cmax, char mat[lmax][cmax]){
	mat[Collection[eCompteur_mur-1].Origine.eX+dx][Collection[eCompteur_mur-1].Origine.eY+dy]='M';
}

void MurEcrire (int lmax, int cmax, char mat[lmax][cmax]){
	int i;
	switch (Collection[eCompteur_mur-1].Direction)
	{
		case diSud : for(i=0;i<Collection[eCompteur_mur-1].eLg;i++)
				murer(i,0,lmax,cmax,mat);			      
			      break;
		case diEst : for(i=0;i<Collection[eCompteur_mur-1].eLg;i++)
				murer(0,i,lmax,cmax,mat);
			      break;
		case diNord : for(i=Collection[eCompteur_mur-1].eLg;i>0;i--)
				murer(-i+1,0,lmax,cmax,mat);			      
			      break;
		case diOuest : for(i=Collection[eCompteur_mur-1].eLg;i>0;i--)
				murer(0,-i+1,lmax,cmax,mat);			      
			      break;
	}

	eCompteur_mur--;
}




