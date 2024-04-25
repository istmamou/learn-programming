#include <stdio.h>
#include <stdlib.h>

int main()
{
    // USA = A, France = F

    int age=17;
    char pays='A';

    if (pays == 'A' && age >= 16)
    {
        printf("Permis accorde aux USA\n");
    }
    else
    {
        printf("Permi non accorde aux USA\n");
    }

    if(pays == 'F' && age >= 18)
    {
        printf("Permi accorde en France\n");
    }
    else
    {
        printf("Permi non accorde en France");
    }

    return 0;
}
