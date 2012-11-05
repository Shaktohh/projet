#include "outils.h"

void outil_amorcer() {
}

void outil_init() {}

void cmatBords (char c, int lmin, int cmin, int lmax, int cmax, char mat[lmax][cmax]){
    //fait les bords d'une matrice de caractère avec un caractère
    int ligne;
    int colonne;
    assert(lmax>=0);
    assert(cmax>=0);
    for(colonne=cmin;colonne<cmax;colonne++) {
        mat[lmin][colonne]=c;
        mat[lmax-1][colonne]=c;
    }
    for(ligne=lmin;ligne<lmax;ligne++) {
        mat[ligne][cmin]=c;
        mat[ligne][cmax-1]=c;
    }
}

void Alea0() {
    //permet de générer une nouvelle suite pseudo-aleatoire
    srand(time(NULL));
}

void rLigne (){
    //fait un retour à la ligne
    printf("\n");
}

void cmatInit (char c, int lmax, int cmax, char mat[lmax][cmax]){
    //initialise une matrice de caractère
    int ligne;
    int colonne;
    assert(lmax>=0);
    assert(cmax>=0);
    for(ligne=0;ligne<lmax;ligne++){
        for(colonne=0;colonne<cmax;colonne++){
            mat[ligne][colonne]=c;
        }
    }
}

void ematInit (int e, int lmax, int cmax, int mat[lmax][cmax]){
    //initialise une matrice d'entier
    assert(isdigit(e));
    int ligne;
    int colonne;
    assert(lmax>=0);
    assert(cmax>=0);
    for(ligne=0;ligne<lmax;ligne++){
        for(colonne=0;colonne<cmax;colonne++){
            mat[ligne][colonne]=e;
        }
    }
}

void eAfficher (int entier){
    printf("%i",entier);
}

void cAfficher (char caractere){
    printf("%c",caractere);
}

void meAfficher (char *sMessage, int eA){
    printf("%s %i", sMessage, eA);
}

void mcAfficher (char *sMessage, char cA){
    printf("%s %c", sMessage, cA);
}

void cmatAfficher (int lmin, int cmin, int lmax, int cmax, char mat[lmax][cmax]){
    //Affiche une matrice de caractère
    int ligne;
    int colonne;
    assert(lmax>=0);
    assert(cmax>=0);
    for(ligne=lmin;ligne<lmax;ligne++){
        for(colonne=cmin;colonne<cmax;colonne++){
            cAfficher(mat[ligne][colonne]);
            espaceAfficher();
            espaceAfficher();
        }
        rLigne();
    }
}

void ematAfficher (int lmax, int cmax, int mat[lmax][cmax]){
    //Affiche une matrice de caractère
    int ligne;
    int colonne;
    assert(lmax>=0);
    assert(cmax>=0);
    for(ligne=0;ligne<lmax;ligne++){
        for(colonne=0;colonne<cmax;colonne++){
            cAfficher(mat[ligne][colonne]);
            espaceAfficher();
            espaceAfficher();
        }
        rLigne();
    }
}

void espaceAfficher(){
    printf(" ");
}

int bCroiss (int eAv, int eM, int eAp){
    //Retourne vrai si eAv<=eM<=eAp
    return ((eAv<=eM)&&(eM<=eAp));
}

int eEcrire (){
    int entier;
    scanf("%i",&entier);
    while(!isdigit(entier)){
        scanf("%i",&entier);
    }
    return entier;
}

int cEcrire (){
    char caractere;
    scanf("%c",&caractere);
    while(!isalpha(caractere)){
   	 scanf("%c",&caractere);
    }
    return caractere;
}

int eHasard (int tmin, int tmax){
    //Prend un nombre aléatoire entre tmin et tmax
    assert(tmin>=0);
    assert(tmax>=0);
    assert(tmax>=tmin);
    return rand()%(tmax-tmin)+tmin;
}

int zHasard (int eLimite){
    //Prend un nombre aléatoire entre 0 et eLimite
    assert(eLimite>=0);
    return rand()%(eLimite-0);
}

int uHasard (int eMax){
    //Prend un nombre aléatoire entre 1 et tmax
    assert(eMax>=1);
    return rand()%(eMax-1)+1;
}

void murInit (int nbmur, int lmin, int lmax, int cmin, int cmax, char mat[lmax][cmax]){
    //Genere un nombre alétoire dans une matrice de 2 dimsension d'un certain nombre de mur collé par 2
    int aleatoire[2];
    int incre_nbmur;
    assert(lmin>=0);
    assert(cmin>=0);
    assert(lmax>=0);
    assert(cmax>=0);
    for(incre_nbmur=0;incre_nbmur<nbmur;incre_nbmur++){
        aleatoire[0]=eHasard(lmin,lmax);
        aleatoire[1]=eHasard(cmin,cmax);
        aleatoire[2]=eHasard(0,3);
        mat[aleatoire[0]][aleatoire[1]]='o';
        switch(aleatoire[2]){ //0 haut 1 droite 2 bas 3 gauche
            case 0: if(aleatoire[0]-1>lmin) aleatoire[0]--;
                    else aleatoire[0]++;
                     mat[aleatoire[0]][aleatoire[1]]='o';
                     break;
            case 1: if(aleatoire[1]+1<cmax) aleatoire[1]++;
                    else aleatoire[1]--;
                     mat[aleatoire[0]][aleatoire[1]]='o';
                     break;
            case 2: if(aleatoire[0]+1<lmax) aleatoire[0]++;
                    else aleatoire[0]--;
                     mat[aleatoire[0]][aleatoire[1]]='o';
                     break;
            case 3: if(aleatoire[1]-1>cmin) aleatoire[1]--;
                    else aleatoire[1]++;
                     mat[aleatoire[0]][aleatoire[1]]='o';
                     break;
        }
    }
}

