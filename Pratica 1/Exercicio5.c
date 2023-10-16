#include <stdio.h>

int main () {

    float area, diagonalMaior, diagonalMenor;

    printf("\nInsira a diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);
    
    printf("\nInsira a diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor)/2;
    printf("\nA area do losango e de: %.2f", area);
    
    printf("\n\n");
    return 0;
}