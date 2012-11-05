#ifndef Scene_H
#define Scene_H

typedef enum {diNord, diEst, diSud, diOuest} eDirection;
typedef struct {int eX; int eY;} t_origine;

typedef struct {t_origine Origine; eDirection Direction; int eLg;} t_element;

void Scene_amorcer();
void Scene_init();
void murer(int dx, int dy, int lmax, int cmax, char mat[lmax][cmax]);
void MurAjouter (t_origine Origine, eDirection diD, int eLg);

#endif
