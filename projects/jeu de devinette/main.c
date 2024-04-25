#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int toGuess = 100;

    while(n != toGuess)
    {
        printf("n : ");
        scanf("%d", &n);

        if (n < toGuess)
        {
            printf("Vous devez saisir un nombre plus grand\n");
        }
        else if (n > toGuess)
        {
            printf("Vous devez saisir un nombre plus petit !\n");
        }
    }

    printf("\nBravo !\n");
    return 0;
}
