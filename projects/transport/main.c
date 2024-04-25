#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int N = 174, M = 40;
    int dureeMin = 0, dernierVoyage = 0;

    dureeMin = (M - 28) * 5;
    dernierVoyage = N % M;

    printf("La duree minimale qui reste : %d minutes.\n", dureeMin);
    printf("Le nombre de casiers du dernier voyage : %d.\n", dernierVoyage);
    return 0;
}
