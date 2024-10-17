#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], palavras[20][50];
    int i = 0, j = 0, k = 0, tamanho;

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    tamanho = strlen(frase);

    for (i = 0; i <= tamanho; i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            palavras[k][j] = '\0';
            k++;
            j = 0;
        } else {
            palavras[k][j] = frase[i];
            j++;
        }
    }

    printf("Palavras:\n");
    for (i = 0; i < k; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}

