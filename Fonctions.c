#include <stdio.h>
#include <stdlib.h>
#include "Header.h"


extern void Ouverture_R(FILE *pFile,identite *carte){
/*-----------------------------------
 Descriptions : fonction pour ouvrire le fichier en write et saisir les cartes
 Entrées :fichier et la variable struct
 Sorties : une carte saisie dans le fichier .txt
-----------------------------------*/
        pFile=fopen("Carte_id.txt", "a");

        printf("Saisisez l'ID\n");
        fflush(stdin);
        gets(&carte->id);
        fputs("ID: ",pFile);
        fputs(&carte->id, pFile);
        fputs("\n",pFile);

        printf("Saisisez votre Nom\n");
        gets(&carte->Nom);
        fputs("Nom: ",pFile);
        fputs(&carte->Nom, pFile);
        fputs("\n",pFile);

        printf("Saisisez votre Prenom\n");
        gets(&carte->Prenom);
        fputs("Prenom: ",pFile);
        fputs(&carte->Prenom, pFile);
        fputs("\n",pFile);

        printf("Saisisez votre Adresse\n");
        gets(&carte->Adresse);
        fputs("Adresse: ",pFile);
        fputs(&carte->Adresse,pFile);
        fputs("\n",pFile);

        printf("Saisisez votre Ville\n");
        gets(&carte->Ville);
        fputs("Ville: ",pFile);
        fputs(&carte->Ville, pFile);
        fputs("\n",pFile);

        printf("Saisisez votre Code Postal\n");
        gets(&carte->CodePost);
        fputs("Code Postal: ",pFile);
        fputs(&carte->CodePost, pFile);
        fputs("\n",pFile);

        fputs("\n",pFile);
        fclose(pFile);
}

 extern void Ouverture_L(FILE *pFile, identite *carte){
/*-----------------------------------
 Descriptions :fonction pour ouvrir en mode lecture le fichier
 Entrées :fichier et la variable struct
 Sorties :affichage des cartes
-----------------------------------*/
    pFile=fopen("Carte_id.txt","r");
    char lecture[TAILLE_LECTURE];

    while(fgets(lecture,TAILLE_LECTURE,pFile)!=NULL){
        printf("%s", lecture);
    }

    fclose(pFile);
 }

 extern void Fin_prog(){
     /*-----------------------------------
 Descriptions :fonction pour prevenir l'utilisateur de la fin du prog
 Entrées :/
 Sorties :printf
-----------------------------------*/
        printf("Fin du programme\n");
}
