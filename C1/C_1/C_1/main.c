#include <stdio.h>

int main() {
    printf("Hello World\n");

    int szam1 = 10;
    int szam2 = 5;

    int osszeg = szam1 + szam2;
    int kulonbseg = szam1 - szam2;
    int szorzat = szam1 * szam2;
    int hanyados = szam1 / szam2;

    printf("Az osszeg: %d\n", osszeg);
    printf("A kulonbseg: %d\n", kulonbseg);
    printf("A szorzat: %d\n", szorzat);
    printf("A hanyados: %d\n", hanyados);

    return 0;
}
