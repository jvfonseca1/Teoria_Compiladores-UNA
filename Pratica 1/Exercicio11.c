#include <stdio.h>

int main () {

    int numero;

    printf("\nDigite um numero para calcular a tabuada: ");
    scanf("%d", &numero);

    printf("\nTabuada de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        }
    
    printf("\n\n");
    return 0;
}