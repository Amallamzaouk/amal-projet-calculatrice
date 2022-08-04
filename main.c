#include <stdio.h>
#include <stdlib.h>

int main()
{

    int choix;
    float prix;
    char *nomechoix;

    printf("Bienvenu!\n");
    printf("veuiller choisir un boisson \n");
    printf("taperez 1 cafe\n taperz 2 the\n taperz 3 chocolat\n taperz 4 soda\n");
    scanf("%d",&choix);

    switch(choix){
    case 1:
            nomechoix = "cafe" ;
            prix= 2 ;
            break;
    case 2:
            nomechoix = "the" ;
            prix= 2 ;
            break;

     case 3:
            nomechoix = "chocolat" ;
            prix= 2.5 ;
            break;

   case 4:
            nomechoix = "soda" ;
            prix= 3 ;
             break;
             }
          printf  ("Bienvenu!\n");
}

