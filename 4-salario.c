#include <stdio.h>

int main() {

    int number, horas;
    float valorHora;
    float salario;

    scanf("%d %d", &number, &horas);
    scanf("%f", &valorHora);

    salario = horas * valorHora;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
