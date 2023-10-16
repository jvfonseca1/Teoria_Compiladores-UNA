#include <stdio.h>

int main () {

    float salario, perc, aumento, salarioFuturo;
    
    printf("\nInsira o salario:\n");
    scanf("%f", &salario);

    printf("\nInsira o percentual de aumento:\n ");
    scanf("%f", &perc);

    aumento = salario * perc/100;

    salarioFuturo = salario + aumento;
    printf("\nO valor do aumento sera de: %.2f\n", aumento);

    salarioFuturo = salario + aumento;
    printf("\nO valor do novo salario sera de: %.2f\n", salarioFuturo);
    
    printf("\n\n");
    return 0;
}