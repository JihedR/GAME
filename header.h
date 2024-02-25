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

void afficher(image p,SDL_Surface *screen);
void initimage(image *a, int x, int y, int w1, int h1, int w2, int h2, char path[150]);
