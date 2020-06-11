#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED






typedef struct image
{
	SDL_Surface *img;
	SDL_Rect posimg;
}image;


image initialisation(char nomimage[100],int x,int y);
void affichage(SDL_Surface *ecran,image img);
int random_nbr(int nb) ;
//void dice (image eq , int nb) ;



#endif // HEADER_H_INCLUDED
