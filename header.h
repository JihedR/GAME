typedef struct {
SDL_rect pos1;
SOL_rect pos2;
SDL_Surface*img;
}image;
typedef struct{
SDL_Rect posT;
TTF_Font*font;
SDL_Surface *surfaceT;
SDL_Color textC;
char texte[20];
}text;

void initbackground(image*back);
void initboutton(image*butt);
void afficher(image i,SDL_Surface *ecran);
void liberer(image i);
void initText(text *t);
void libererT(text t);
void affichertext(text t,SDL_Surface *ecran);
