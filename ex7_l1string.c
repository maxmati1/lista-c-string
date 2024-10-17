#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int comp, i;

    printf("Digite a palavra: ");
    scanf(" %[^\n]", palavra);

    comp = strlen(palavra);

    for (i = 0; i < comp; i++) {
        if (palavra[i] == 'a') {
            palavra[i] = 'x';
        }
    }

    printf("%s\n", palavra);

    return 0;
}
