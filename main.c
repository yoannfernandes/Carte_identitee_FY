#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main()
{
    int Saisie=0;
    identite carte;

    printf("Saisie de la carte d'identitee:\n");
    printf("\n");
    printf("1) Saisie d'une nouvelle carte: \n");
    printf("2) Lecture des cartes existante: \n");
    scanf("%d", &Saisie);
    printf("\n");
    FILE *pFile;
                        //menu pour choix d'ouverture du fichier .txt
    if(Saisie==1){
        Ouverture_R(pFile, &carte);
    }

    if(Saisie==2){
        Ouverture_L(pFile, &carte);
    }
                        //option pour fermer prog ou pour mauvaise saisie
    if(Saisie!=1||2){
        Fin_prog();
    }

    return 0;
}
