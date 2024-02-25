#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "header.h"

void initimage(image *a, int x, int y, int w1, int h1, int w2, int h2, char path[150])
{
printf("LOadING...%s",path);
a->img=IMG_Load(path);
if(a->img==NULL){printf("Failed to load image");return ;}
a->pos1.x=x;
a->pos1.y=y;
a->pos1.h=h1;
a->pos1.w=w1;
a->pos2.x=0;
a->pos2.y=0;
a->pos2.h=h2;
a->pos2.w=w2;
printf("Loaded");
}



void afficher(image p,SDL_Surface *screen){
SDL_BlitSurface(p.img,&p.pos2,screen,&p.pos1);
}

void liberer(image p){
SDL_FreeSurface(p.img);
}

int collision(image p){
int mousex;
int mousey;
SDL_GetMouseState(&mousex,&mousey);
if(mousex>p.pos1.x && mousex<p.pos1.x+p.pos1.w && mousey>p.pos1.y && mousey<p.pos1.y+p.pos1.h){
	return 1;
else 
	return 0;
}
}
