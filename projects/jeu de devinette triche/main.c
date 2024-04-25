#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom()
{
    return (rand() % 100) + 1;
}

int main()
{
    // Initialiser le générateur de nombres
    srand(time(NULL));


    int n = 0;
    int toGuess = getRandom();

    while(n != toGuess)
    {
        printf("Devinez un nombre entre 1 et 100 : ");
        scanf("%d", &n);

        int shouldCheat = getRandom() > 90;

        if (shouldCheat)
        {
            if (n > toGuess)
            {
                printf("Vous devez saisir un nombre plus grand\n");
            }
            else if (n < toGuess)
            {
                printf("Vous devez saisir un nombre plus petit !\n");
            }
        }
        else
        {
            if (n < toGuess)
            {
                printf("Vous devez saisir un nombre plus grand\n");
            }
            else if (n > toGuess)
            {
                printf("Vous devez saisir un nombre plus petit !\n");
            }
        }
    }

    printf("\nBravo !\n");
    return 0;
}
