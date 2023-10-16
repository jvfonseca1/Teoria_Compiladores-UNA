#include <stdio.h>
#include <math.h>

int main () {

    float cateto1, cateto2, hipotenusa;

    printf("\nInforme o primeiro cateto: ");
    scanf("%f", &cateto1);
    
    printf("\nInforme o segundo cateto: ");
    scanf("%f", &cateto2);
    
   hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
    printf("\nO valor da hipotenusa sera de %.2f", hipotenusa);
    
    printf("\n\n");
    return 0;
}