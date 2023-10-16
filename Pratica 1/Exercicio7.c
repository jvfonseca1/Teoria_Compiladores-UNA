#include <stdio.h>

int main () {

    float salario, salarioMinimo, salarioTotal;

    printf("\nInsira o seu salario: ");
    scanf("%f", &salario);
    
    printf("\nInsira o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    salarioTotal = salario/salarioMinimo;
    printf("\nVoce recebe %.2f salarios minimos", salarioTotal);
    scanf("%f"; salarioTotal);
    
    printf("\n\n");
    return 0;
}