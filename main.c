#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "header.h"

int main(int argc,char**argv){
//init tout
SDL_Init(SDL_INIT_EVERYTHING);

//declaration des variables
image background,play,cont,settings,quit,emblem,eye1,eye2,eye3,eye4;

SDL_Event ev;

//creation fenetre
SDL_Surface *screen = SDL_SetVideoMode(1027,599,32,SDL_SWSURFACE);
if (!screen){
	printf("Unable to set video\n");
	return 1;
}

//Init des variables
printf("initalizing...");
initimage(&background,0,0,0,0,1027,599,"BACKGROUND1.png");
initimage(&play,83,270,0,0,83,53,"PLAY.png");
initimage(&cont,51,346,0,0,159,53,"CONTINUE.png");
initimage(&settings,55,435,0,0,139,53,"SETTINGS.png");
initimage(&quit,81,519,0,0,86,53,"QUIT.png");
initimage(&emblem,904,8,0,0,115,100,"emblem.png");
initimage(&eye1,533,505,0,0,210,70,"EYES1.png");
initimage(&eye2,533,505,0,0,210,70,"EYES2.png");
initimage(&eye3,533,505,0,0,210,70,"EYES3.png");
initimage(&eye4,533,505,0,0,210,70,"EYES4.png");

int etat_play=0;
int etat_continue=0;
int etat_settings=0;
int etat_quit=0;



//Game loop
int run=1;
while(run){
	//Display
	afficher(background,screen);
	afficher(play,screen);
	afficher(cont,screen);
	afficher(settings,screen);
	afficher(quit,screen);
	afficher(emblem,screen);
	SDL_Flip(screen);
	while (SDL_PollEvent(&ev)){
		switch(ev.type){
			case SDL_QUIT:
				run=0;
				break;
			case SDL_MOUSEMOTION:
				etat_play=collision(play);
				etat_continue=collision(cont);
				etat_settings=collision(settings);
				etat_quit=collision(quit);
				break;
				
		}
	}
}
SDL_Quit();
return 0;
}
