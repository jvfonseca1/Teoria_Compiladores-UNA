#include <stdio.h>

int main () {

    float dolar = 4.89f;
    float valorDolares;
    float valorReal;

    printf("\nQuantos dolares voce possui? ");
    scanf("%f", &valorDolares);

    valorReal = valorDolares/dolar;

    printf("\nApos a conversao para real, você tera: %.2f reais", valorReal);
    printf("\n\n");
    return 0;
}