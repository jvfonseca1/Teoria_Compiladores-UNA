#include <stdio.h>
#include <string.h>

int main() {
    FILE* arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char str[1000];
    fgets(str, sizeof(str), arquivo);

    fclose(arquivo);

    int comprimento = strlen(str);

    arquivo = fopen("arquivo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Comprimento: %d\n", comprimento);

    int i, j;
    char temp;
    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    fprintf(arquivo, "String Invertida: %s", str);


    fclose(arquivo);

    printf("Comprimento da string: %d\n", comprimento);
    printf("String Invertida: %s\n", str);

    return 0;
}
