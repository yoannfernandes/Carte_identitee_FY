#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define TAILLE 10
#define TAILLE_LECTURE 50

typedef struct identite{

    char Nom[TAILLE];
    char Prenom[TAILLE];
    char Adresse[TAILLE];
    char Ville[TAILLE];
    char CodePost[TAILLE];
    int id;

}identite;

extern void Ouverture_R(FILE *pFile,identite *carte);
extern void Ouverture_L(FILE *pFile, identite *carte);
extern void Fin_prog();

#endif // HEADER_H_INCLUDED
