#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

typedef struct {
SDL_Rect pos1;
SDL_Rect pos2;
SDL_Surface *img;
}image;
typedef struct{
SDL_Rect posT;
TTF_Font *font;
SDL_Surface *surfaceT;
SDL_Color textC;
char texte[40];
}text;

void initbackground(image*back);
void initboutton(image*butt);
void afficher(image i,SDL_Surface *ecran);
void liberer(image i);
void initText(text *t);
void libererT(text t);
void affichertext(text t,SDL_Surface *ecran);
