#include <stdio.h>
#include <math.h>

int main () {

    float raio, comprimento, area, volume, pi;

    printf("\nInsira o raio do circulo: ");
    scanf("%f", &raio);

    pi = 3.14f;

    comprimento = 2 * pi * raio;
    printf("\nO comprimento e de: %.2f\n", comprimento);

    area = pi * raio * raio;
    printf("\nA area de uma esfera e de: %.2f\n", area);

    volume = (pi *raio*raio*raio) * 3/4;
    printf("\nO volume da esfera e de: %.2f", volume);
    
    printf("\n\n");
    return 0;
}