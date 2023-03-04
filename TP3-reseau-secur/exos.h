#ifndef EXOS_H
#define EXOS_H
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#define X 3
typedef struct bit_nombre
{
    int *nombre;
    int x;
} bit_nombre;

enum boolean{
    faux,
    vrai
};
typedef enum boolean boolean;

void initialiser0(bit_nombre *nombre);
void initialiser1(bit_nombre *nombre);
void liberation(int *libererNombre);
void affichageBinaire(bit_nombre *nbr);
boolean comparer(bit_nombre *nbr1 , bit_nombre *nbr2);
boolean estPair(bit_nombre *nbr);
bit_nombre *diviserPar2(bit_nombre *nbr);
bit_nombre *reduireDe1(bit_nombre *nbr);
bit_nombre *multiplierPar2(bit_nombre *nbr);
void ajouterAB(bit_nombre *nbr1,bit_nombre *nbr2);

#endif