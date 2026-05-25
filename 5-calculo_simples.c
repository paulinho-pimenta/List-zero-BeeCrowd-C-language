#include <stdio.h>

int main() {
    int codigo, quantidade, codigo2, quantidade2;
    float valor, valor2;
    float pagar;

    //entrada 1
    scanf("%d %d %f", &codigo, &quantidade, &valor);
    //entrada 2
    scanf("%d %d %f", &codigo2, &quantidade2, &valor2);

    pagar = (quantidade * valor) + (quantidade2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", pagar);

    return 0;
}
