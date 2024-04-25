#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operateur = ' ';
    float a = 0, b = 0, resultat = 0;

    printf("Ma petite Calculatrice en C\n\n");

    scanf("%f", &a);
    scanf("%c", &operateur);
    scanf("%f", &b);


    if (operateur == '+')
    {
        resultat = a + b;
    }

    else if (operateur == '-')
    {
        resultat = a - b;
    }
    else if (operateur == '*')
    {
        resultat = a * b;
    }
    else if (operateur == '/')
    {
        resultat = a / b;
    }
    else
    {
        printf("Operateur non valide !\n\n");
    }

    printf(" = %f", resultat);

    return 0;
}
