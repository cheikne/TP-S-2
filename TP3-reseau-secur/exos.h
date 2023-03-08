#ifndef EXOS_H
#define EXOS_H
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#define X 5

enum boolean{
    faux,
    vrai
};
typedef enum boolean boolean;

// ----------------------Exercice 1------------------------
typedef struct bit_nombre
{
    int *nombre;
    int x;
} bit_nombre;

// ----------------------Exercice 2------------------------
void initialiser0(bit_nombre *nombre);

// ----------------------Exercice 3------------------------
void initialiser1(bit_nombre *nombre);
// ----------------------Exercice 4------------------------
void liberation(int *libererNombre);
// ----------------------Exercice 5------------------------
void affichageBinaire(bit_nombre *nbr);
// ----------------------Exercice 6------------------------
boolean comparer(bit_nombre *nbr1 , bit_nombre *nbr2);
// ----------------------Exercice 7------------------------
boolean estPair(bit_nombre *nbr);
// ----------------------Exercice 8------------------------
void diviserPar2(bit_nombre *nbr);
// ----------------------Exercice 9------------------------
void reduireDe1(bit_nombre *nbr);
// ----------------------Exercice 10------------------------
void multiplierPar2(bit_nombre *nbr);
// ----------------------Exercice 11------------------------
void ajouterAB(bit_nombre *nbr1,bit_nombre *nbr2);

#endif