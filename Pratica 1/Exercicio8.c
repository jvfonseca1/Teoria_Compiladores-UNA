#include <stdio.h>

int main () {

    float peso, a, b;

    printf("\nInsira o seu peso: ");
    scanf("%f", &peso);
    
    a = peso + (peso * 15/100);
    printf("\nSe voce engordar, voce tera: %.2f quilos", a);

    b = peso - (peso * 20/100);
    printf("\nSe voce emagrecer, voce tera: %.2f quilos", b);
    
    printf("\n\n");
    return 0;
}