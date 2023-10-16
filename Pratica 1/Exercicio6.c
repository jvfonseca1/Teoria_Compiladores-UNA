#include <stdio.h>

int main () {

    float temperaturaCel, temperaturaFah;

    printf("\nInsira a temperatura em Celsius: ");
    scanf("%f", &temperaturaCel);

    temperaturaFah = (temperaturaCel * 1.8) + 32;
    
    printf("\nA temperatura em Fahrenheit sera de: %.2f", temperaturaFah);
    scanf("%f", &temperaturaFah);
    
    printf("\n\n");
    return 0;
}