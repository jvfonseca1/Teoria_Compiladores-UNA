#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfunctions.h"

void uploadVetores() {
    int sequencia1[50];
    int sequencia2[50];
    int n1, n2;
    
    // Leitura da primeira sequencia
    printf("Digite o tamanho da primeira sequencia: ");
    scanf("%d", &n1);
    
    if (n1 > 50) {
        printf("Tamanho maximo excedido. O programa suporta no maximo %d elementos.\n", 50);
        return 1;
    }
    
    printf("\nDigite os elementos da primeira sequencia:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &sequencia1[i]);
    }
    
    // Leitura da segunda sequencia
    printf("\nDigite o tamanho da segunda sequencia: ");
    scanf("%d", &n2);
    
    if (n2 > 50) {
        printf("Tamanho maximo excedido. O programa suporta no maximo %d elementos.\n", 50);
        return 1;
    }
    
    printf("\nDigite os elementos da segunda sequencia:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &sequencia2[i]);
    }
    
    // Exibir as sequencias lidas
    printf("\nPrimeira sequencia: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", sequencia1[i]);
    }
    printf("\n");
    
    printf("Segunda sequencia: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", sequencia2[i]);
    }
    printf("\n");
    
    // Armazenar as sequencias em um arquivo
    FILE* arquivo = fopen("sequencias.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    for (int i = 0; i < n1; i++) {
        fprintf(arquivo, "%d ", sequencia1[i]);
    }
    fprintf(arquivo, "\n");
    
    for (int i = 0; i < n2; i++) {
        fprintf(arquivo, "%d ", sequencia2[i]);
    }
    fprintf(arquivo, "\n");
    
    fclose(arquivo);
    printf("As sequencias foram armazenadas em 'sequencias.txt'.\n");

}

void printVetores() {
    // Abra o arquivo para leitura
    FILE* arquivo = fopen("sequencias.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int sequencia1[50];
    int sequencia2[50];
    int n1 = 0, n2 = 0;

    char linha[256]; 

    // Ler e armazenar a primeira sequencia
    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char* token = strtok(linha, " ");
        while (token != NULL) {
            sequencia1[n1] = atoi(token);
            n1++;
            token = strtok(NULL, " ");
        }
    }

    // Ler e armazenar a segunda sequencia
    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char* token = strtok(linha, " ");
        while (token != NULL) {
            sequencia2[n2] = atoi(token);
            n2++;
            token = strtok(NULL, " ");
        }
    }

    // Fechar o arquivo
    fclose(arquivo);

    // Exibir as sequencias lidas
    printf("Primeira sequencia: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", sequencia1[i]);
    }
    printf("\n");

    printf("Segunda sequencia: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", sequencia2[i]);
    }
    printf("\n");

}