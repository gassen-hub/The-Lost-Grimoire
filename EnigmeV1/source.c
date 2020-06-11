#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "header.h"
#include <time.h>

image initialisation(char nameofpicure[70],int x,int y)
{
    image image;
    image.img=IMG_Load(nameofpicure);
    image.posimg.x=x;
    image.posimg.y=y;
    return image;
}

void affichage(SDL_Surface *ecran,image image)
{
    SDL_BlitSurface(image.img,NULL,ecran,&image.posimg);
}

int random_nbr(int nb)
{
    srand(time(NULL));
    nb=rand() % 2 + 1;
    return nb;
}



