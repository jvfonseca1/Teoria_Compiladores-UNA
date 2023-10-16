#include <stdio.h>

int main () {

    int anoNascimento, anoAtual, idade, idadeFutura;

    printf("\nQual ano atual?");
    scanf("%d", &anoAtual);

    printf("\nEm qual ano voce nasceu?");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;
    printf("\nSua idade e de: %d anos\n", idade);

    idadeFutura = 2050 - anoNascimento;
    printf("\nSua idade em 2050 sera de: %d anos", idadeFutura);

    printf("\n\n");
    return 0;
}