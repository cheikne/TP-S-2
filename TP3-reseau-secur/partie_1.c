#include "exos.h"
#include<stdio.h>
#include<string.h>

void initialiser0(bit_nombre *nombre){
    
    int i;

    for(i = 0; i < X; i++){
        nombre->nombre[i] = 0;
    }
}
void initialiser1(bit_nombre *nombre){

    int i;

    for(i = 0; i < X; i++){
        nombre->nombre[i] = 1;
    }
}

void liberation(int *libererNombre){
    free(libererNombre);
}

void affichageBinaire(bit_nombre *nbr){

    int i;
    for(i = 0; i < nbr->x; i++)
        printf("%3d",nbr->nombre[i]);
}

boolean comparer(bit_nombre *nbr1 , bit_nombre *nbr2){

    int i;
    for(i = 0; i < X; i++){

        if(nbr1->nombre[i] != nbr2->nombre[i])  return faux;
    }
    return vrai;
}

boolean estPair(bit_nombre *nbr){
    
    return nbr->nombre[nbr->x - 1] == 0 ? vrai : faux;
}

void diviserPar2(bit_nombre *nbr){

    int i;
    for(i = nbr->x-1; i >= 0 ; i--){
        
        if(i == 0)
            nbr->nombre[i] = 0;
        else   
            nbr->nombre[i] = nbr->nombre[i-1];
    }
    printf("\t\t\tLe resultat de la division est : ");affichageBinaire(nbr);printf("\n\n");
}

void reduireDe1(bit_nombre *nbr){

    for(int j = nbr->x-2; j >= 0; j--){
        if(nbr->nombre[j] == 0){
            nbr->nombre[j] = 1;
        }
        else{
            nbr->nombre[j] = 0;
            break;;
        }
    }
    printf("\t\t\tLe resultat de la reduction de -1 est : ");affichageBinaire(nbr);printf("\n\n");
}

void multiplierPar2(bit_nombre *nbr){

    int i;
    for(i = 0; i < nbr->x-1; i++)
        nbr->nombre[i] = nbr->nombre[i+1];
    nbr->nombre[i] = 0;
    printf("\t\t\tLe resultat de la multiplication par 2 est : ");affichageBinaire(nbr);printf("\n\n");
}

void ajouterAB(bit_nombre *nbr1,bit_nombre *nbr2){
    int i,j;

    if( nbr1->x  != nbr2->x){
        printf("Les deux nombres binaires doivent avor la meme taille : (a,b)=(%d,%d)",nbr1->x,nbr2->x);
        exit(EXIT_FAILURE);
    }
    int empreint =0;
    int temp[100];
    j = 0;
    for(i = nbr1->x - 1; i >=0 ; i--){
        if(nbr1->nombre[i] == 1 && nbr2->nombre[i] == 1){
            temp[j] = empreint == 1 ? 1 : 0;
            empreint = 1;
            j++;
        }else if(nbr1->nombre[i] == 1 || nbr2->nombre[i] == 1){
            temp[j] = empreint == 1 ? 0 : 1;
            // temp[j] = 0;
            // empreint = 1;
            j++;
        }else{
            temp[j] = empreint;
            empreint = 0;
            j++;
        }
    }

    printf("La somme de : "); affichageBinaire(nbr1); printf(" et: "); affichageBinaire(nbr2); printf(" est: ");
    for(i = j-1; i >= 0; i--)
        printf("%3d",temp[i]);
    printf("\n");
}