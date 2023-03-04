#include "exos.h"


int main(int argc, char const *argv[])
{
    bit_nombre b1,b2;
    b1.x = X;
    b2.x = X;
    // printf("%d",b1.x);
    b1.nombre = (int *)malloc(sizeof(int)*b1.x);
    b2.nombre = (int *)malloc(sizeof(int)*b2.x);
    b1.nombre[0] = 1;
    b1.nombre[1] = 0;
    b1.nombre[2] = 1;
    b2.nombre[0] = 0;
    b2.nombre[1] = 1;
    b2.nombre[2] = 1;
    ajouterAB(&b1,&b2);
    affichageBinaire(&b1);


    return 0;
}
