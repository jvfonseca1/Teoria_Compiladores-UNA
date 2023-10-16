#include <stdio.h>

int main (){
    
    //Atividade 01
    float nota1, nota2, nota3, media;
    
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("\n\n");
     
    media = (nota1 + nota2 + nota3)/3;
    printf("\nA media dos tres numeros e: %.2f", media);
    
    return 0;
}