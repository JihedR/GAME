#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "header.h"
void initbackground(image*back)
{
back->img=IMG_Load("palestine.jpg");
	if (back->img==NULL)
		return ;
back->pos1.x=0;
back->pos1.y=0;
back->pos2.x=0;
back->pos2.y=0;
back->pos2.w=(SCREEN->W);
back->pos2.h=(SCREEN->H);
}
void initbutton(image *butt, int *x1,*x2,*y1,*y2,*w,*h)
{
butt->pos1.x=x1;//A MODIFIER
butt->pos1.y=y1;
butt->pos2.x=x2;
butt->pos2.y=y2;
back->pos2.w=w;
back->pos2.h=h;
}
void afficher(image i,SDL_Surface *ecran)
{
SDL_BlitSurface(i.img,&i.pos2,ecran,&i.pos1);
}
void liberer(image i)
{
SDL_FreeSurface(i.img);
}
void initText(text *t)
{
(*t).posT.x=0;
(*t).posT.y=0;
(*t).textC.r=255;
(*t).textC.g=255;
(*t).textC.b=255;
(*t).font=TTF_OpenFont("......ttf",70);//parametre a MODIFIER
}
void libererT(text t)
{SDL_FreeSurface((*t).SurfaceT);
}
void affichertext(text t,SDL_Surface *ecran)
{
t.SurfaceT=TTF_RenderText_Blended(t.font,t.texte,t.textC);
SDL_BlitSurface(t.SurfaceT,NULL,ecran,&t.posT);
}
