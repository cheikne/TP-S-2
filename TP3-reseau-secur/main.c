#include "exos.h"


int main(int argc, char const *argv[])
{
    bit_nombre b1,b2;
    b1.x = X;
    b2.x = X;
    b1.nombre = (int *)malloc(sizeof(int)*b1.x);
    b2.nombre = (int *)malloc(sizeof(int)*b2.x);
    b1.nombre[0] = 1;b1.nombre[1] = 1;b1.nombre[2] = 0;b1.nombre[3] = 0;b1.nombre[4] = 1;
    b2.nombre[0] = 0;b2.nombre[1] = 1;b2.nombre[2] = 1;b2.nombre[3] = 0;b2.nombre[4] = 0;

    // printf("%d",b1.x);
    printf("------------------------------------PARTIE 1-----------------------------------------\n\n\n\n");
    printf("\t\\ttNous allons utiliser ce BINAIRE pendant tout le test : ");affichageBinaire(&b1);printf("\n\\\n\n\n");
    printf("\t\tExercice 6 : Comparaison de deux binaires\n");
    if(comparer(&b1,&b2)) printf("\t\t\t Vrai.\n\n");
    else printf("\t\t\t Faux.\n\n");
    printf("\t\tExercice 7 : Verification si un nombre binaire est pair.\n");
    printf("\t\t Ce binaire : "); affichageBinaire(&b1);printf("\n");
    if(estPair(&b1))    printf("\t\t\t est PAIR.\n\n");
    else printf("\t\t\t est IMPAIR.\n\n");
    printf("\t\tExercice 8 : Division d'un nombre binaire par 2.\n");
    bit_nombre temp = b1;
    diviserPar2(&temp);
    printf("\t\tExercice 8 : Reduction d'un nombre bianire de -1.\n");
    temp = b1;
    reduireDe1(&temp);
    printf("\t\tExercice 10 : Multiplication d'un nombre binaire par 2.\n");
    temp = b1;
    multiplierPar2(&temp);
    printf("\t\tExercice 11 : Somme de dux nombres binaires .\n");
    ajouterAB(&b1,&b2);
    // affichageBinaire(&b1);


    return 0;
}
