#include <stdio.h>
#include <string.h>

int main() {
    // Abre o arquivo em modo de leitura
    FILE* arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê a string do arquivo
    char str[1000];
    fgets(str, sizeof(str), arquivo);

    // Fecha o arquivo de leitura
    fclose(arquivo);

    // Calcula o comprimento da string
    int comprimento = strlen(str);

    // Abre o arquivo em modo de escrita
    arquivo = fopen("arquivo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve o comprimento da string no arquivo
    fprintf(arquivo, "Comprimento: %d\n", comprimento);

    // Inverte a string
    int i, j;
    char temp;
    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Escreve a string invertida no arquivo
    fprintf(arquivo, "String Invertida: %s", str);

    // Fecha o arquivo de escrita
    fclose(arquivo);

    printf("Comprimento da string: %d\n", comprimento);
    printf("String Invertida: %s\n", str);

    return 0;
}
