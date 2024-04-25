#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alseny = 8, diallo = 5;
    int tmp = 0;

    printf("Alseny: %d oranges. Diallo %d mangues.\n", alseny, diallo);


    tmp = alseny;
    alseny = diallo;
    diallo = tmp;

    printf("Alseny: %d mangues. Diallo %d oranges.\n", alseny, diallo);
    return 0;
}
