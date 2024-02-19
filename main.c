#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "header.h"
int main(int argc,char**argv){

image back;
image butt_play,butt_load,butt_set,butt_quit;
image butt_play2,butt_load2,butt_set2,butt_quit2;
SDL_Event event;
//creation d'une fenetre
screen=SDL-SetVideoMode(SCREEN_W,Screen_H,32,SDL_HWSURFACE| SDL_SRCALPHA);
if(screen){
	printf("Unable to set 680*380 video:%s\n",SD-GetError());
	return 1;
}

//initialisation des variables
initBackground(&back);

//Display
afficher(back,screen);
afficher(butt,screen);
//telechargement du son 
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{printf("%s",Mix_GetError());}
Mix_Music*music;
music=Mix_LoadMus("palestine.mp3");
Mix_PlayMusic(music,-1);

//initialisation du texte 
TTF_Init();
text t;
initText(&t);
affichertext(t,screen);
SDL_Flip(screen);

//telechargement d'un son bref
Mix_Chunk*son;
son=Mix_LoadWAV("effet.wav");//A MODIFIER xD
Mix_PlayChannel(-1,son,0);



//initialisation d'un evennement
if(event.type==SDL_MOUSEMOTION)






liberer(back);
liberer(butt);
Mix_FreeMusic(music);
libereT(t);
Mix_FreeChunk(son);
TTF_CloseFont(t.font);
TTF_Quit();

return 0;

}
