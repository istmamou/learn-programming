#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pays = 'F';
    int age = 19;

    if (pays == 'A' && age >= 16)
    {
        printf("Permi accorde\n");
    }
    else {
        if (pays == 'F' && age >= 18) {
            printf("Permi accorde\n");
        }
        else
        {
            printf("Permi non accorde\n");
        }
    }

    return 0;
}
