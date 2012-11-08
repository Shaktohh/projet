#ifndef outils_H
#define outils_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>

void outil_amorcer();
void outil_init();
void cmatBords (char c, int lmin, int cmin, int lmax, int cmax, char mat[lmax][cmax]);
void Alea0();
void rLigne ();
void cmatInit (char c, int lmax, int cmax, char mat[lmax][cmax]);
void ematInit (int e, int lmax, int cmax, int mat[lmax][cmax]);
void eAfficher (int entier);
void cAfficher (char caractere);
void meAfficher (char *sMessage, int eA);
void mcAfficher (char *sMessage, char cA);
void cmatAfficher (int lmin, int cmin, int lmax, int cmax, char mat[lmax][cmax]);
void ematAfficher (int lmax, int cmax, int mat[lmax][cmax]);
void espaceAfficher ();
int bCroiss (int eAv, int eM, int eAp);
int eEcrire ();
int cEcrire ();
int eHasard (int tmin, int tmax);
int zHasard (int eLimite);
int uHasard (int eMax);

#endif
