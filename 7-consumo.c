#include <stdio.h>

int main() {

    int km;
    float litro, consumo;

    scanf("%d %f", &km, &litro);

    consumo = km/litro;
    printf("%.3f km/l\n", consumo);

    return 0;
}
