#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	printf("LETRA A ");
	printf("\n==================================\n\n");

    int sequencia1[50];
    int sequencia2[50];
    int n1, n2;

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

    FILE* arquivo = fopen("sequencias.txt", "w");

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

	printf("\nLETRA B ");
	printf("\n==================================\n\n");

    arquivo = fopen("sequencias.txt", "r");

    char linha[256];

    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char* token = strtok(linha, " ");
        while (token != NULL) {
            sequencia1[n1] = atoi(token);
            n1++;
            token = strtok(NULL, " ");
        }
    }

    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char* token = strtok(linha, " ");
        while (token != NULL) {
            sequencia2[n2] = atoi(token);
            n2++;
            token = strtok(NULL, " ");
        }
    }

    fclose(arquivo);

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

	printf("\nLETRA C ");
	printf("\n==================================\n\n");

   arquivo = fopen("sequencias.txt", "r");

    int sequenciaA[50];
    int sequenciaB[50];
    int nA = 0, nB = 0;
;

    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char* token = strtok(linha, " ");
        while (token != NULL) {
            sequenciaA[nA] = atoi(token);
            nA++;
            token = strtok(NULL, " ");
        }
    }

    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char* token = strtok(linha, " ");
        while (token != NULL) {
            sequenciaB[nB] = atoi(token);
            nB++;
            token = strtok(NULL, " ");
        }
    }

    fclose(arquivo);

    arquivo = fopen("sequencias.txt", "a");
    fprintf(arquivo, "\nVetor A: ");

    for (int i = 0; i < nA; i++) {
        fprintf(arquivo, "%d ", sequenciaA[i]);
    }
    fprintf(arquivo, "\nVetor B: ");

    for (int i = 0; i < nB; i++) {
        fprintf(arquivo, "%d ", sequenciaB[i]);
    }
    fprintf(arquivo, "\n");

    fclose(arquivo);

    printf("As sequencias foram lidas, armazenadas e atualizadas no arquivo 'sequencias.txt'.\n");

	printf("\nLETRA D ");
	printf("\n==================================\n\n");

    arquivo = fopen("sequencias.txt", "a");

    printf("Conjunto Potencia:\n");
    fprintf(arquivo, "\nConjunto Potencia:\n");

    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            printf("{%d, %d} ", sequenciaA[i], sequenciaB[j]);
            fprintf(arquivo, "{%d, %d} ", sequenciaA[i], sequenciaB[j]);
        }
    }
    printf("\n");

    fclose(arquivo);

    printf("\nLETRA E ");
    printf("\n==================================\n\n");
    arquivo = fopen("sequencias.txt", "a");

    printf("Conjuntos Próprios do Conjunto Potencia:\n");
    fprintf(arquivo, "\n\nConjuntos Próprios do Conjunto Potencia:\n");

    for (int i = 1; i < nA; i++) {
        for (int j = 1; j < nB; j++) {
            printf("{%d, %d} ", sequenciaA[i], sequenciaB[j]);
            fprintf(arquivo, "{%d, %d} ", sequenciaA[i], sequenciaB[j]);
        }
    }
    printf("\n");
    fclose(arquivo);

    printf("\nLETRA F ");
    printf("\n==================================\n\n");

    int resultado[50];
    int nResultado;
    nResultado = 0;

    for (int i = 0; i < nA; i++) {
        resultado[(nResultado)++] = sequenciaA[i];
    }

    for (int i = 0; i < nB; i++) {
        int elementoB = sequenciaB[i];
        int encontrado = 0;

        for (int j = 0; j < nResultado; j++) {
            if (resultado[j] == elementoB) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            resultado[(nResultado)++] = elementoB;
        }
    }


    arquivo = fopen("sequencias.txt", "a");

    fprintf(arquivo, "\n\nUniao de A e B: {");
    printf("Uniao de A e B: {");
    for (int i = 0; i < nResultado; i++) {
        printf("%d", resultado[i]);
        fprintf(arquivo, "%d", resultado[i]);
        if (i < nResultado - 1) {
            printf(", ");
            fprintf(arquivo, ", ");
        }
    }
    printf("}\n");
    fprintf(arquivo, "}\n");

    fclose(arquivo);

    printf("\nLETRA G ");
    printf("\n==================================\n\n");

    nResultado = 0;

    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            if (sequenciaA[i] == sequenciaB[j]) {
                resultado[(nResultado)++] = sequenciaA[i];
                break;
            }
        }
    }

    arquivo = fopen("sequencias.txt", "a");

    fprintf(arquivo, "\n\nIntersecao de A e B: {");
    printf("Intersecao de A e B: {");
    for (int i = 0; i < nResultado; i++) {
        printf("%d", resultado[i]);
        fprintf(arquivo, "%d", resultado[i]);
        if (i < nResultado - 1) {
            printf(", ");
            fprintf(arquivo, ", ");
        }
    }
    printf("}\n");
    fprintf(arquivo, "}\n");

    fclose(arquivo);

    printf("\nLETRA H ");
    printf("\n==================================\n\n");
    nResultado = 0;

    for (int i = 0; i < nA; i++) {
        int elementoA = sequenciaA[i];
        int encontrado = 0;

        for (int j = 0; j < nB; j++) {
            if (elementoA == sequenciaB[j]) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            resultado[(nResultado)++] = elementoA;
        }
    }

    arquivo = fopen("sequencias.txt", "a");

    fprintf(arquivo, "\n\nDiferenca de A e B: {");
    printf("Diferenca de A e B: {");
    for (int i = 0; i < nResultado; i++) {
        printf("%d", resultado[i]);
        fprintf(arquivo, "%d", resultado[i]);
        if (i < nResultado - 1) {
            printf(", ");
            fprintf(arquivo, ", ");
        }
    }
    printf("}\n");
    fprintf(arquivo, "}\n");

    fclose(arquivo);

    printf("\nLETRA I ");
    printf("\n==================================\n\n");

    nResultado = 0;

    for (int i = 0; i < nB; i++) {
        int elementoB = sequenciaB[i];
        int encontrado = 0;

        for (int j = 0; j < nA; j++) {
            if (elementoB == sequenciaA[j]) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            resultado[(nResultado)++] = elementoB;
        }
    }

    arquivo = fopen("sequencias.txt", "a");

    fprintf(arquivo, "\n\nDiferenca de A e B: {");
    printf("Diferenca de A e B: {");
    for (int i = 0; i < nResultado; i++) {
        printf("%d", resultado[i]);
        fprintf(arquivo, "%d", resultado[i]);
        if (i < nResultado - 1) {
            printf(", ");
            fprintf(arquivo, ", ");
        }
    }
    printf("}\n");
    fprintf(arquivo, "}\n");

    fclose(arquivo);

    printf("\nLETRA J ");
    printf("\n==================================\n\n");
    arquivo = fopen("sequencias.txt", "a");

    fprintf(arquivo, "\n\nProduto Cartesiano de A e B:\n");
    printf("Produto Cartesiano de A e B:\n");

    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            fprintf(arquivo, "(%d, %d) ", sequenciaA[i], sequenciaB[j]);
            printf("(%d, %d) ", sequenciaA[i], sequenciaB[j]);
        }
    }
    fprintf(arquivo, "\n");
    printf("\n");

    fclose(arquivo);

    printf("\nLETRA K ");
    printf("\n==================================\n\n");

    arquivo = fopen("sequencias.txt", "a");

    fprintf(arquivo, "\n\nProduto Cartesiano de B e A:\n");
    printf("Produto Cartesiano de B e A:\n");

    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            fprintf(arquivo, "(%d, %d) ", sequenciaB[i], sequenciaA[j]);
            printf("(%d, %d) ", sequenciaB[i], sequenciaA[j]);
        }
    }
    fprintf(arquivo, "\n");
    printf("\n");

    fclose(arquivo);
	return 0;
}