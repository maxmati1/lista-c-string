#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50], frase[100];
    int i, j, k, comp1, comp2, cont = 0, tem;

    printf("Digite uma pequena palavra: ");
    scanf("%s", palavra);

    printf("Digite a frase: ");
    scanf(" %[^\n]", frase);  

    comp1 = strlen(palavra);
    comp2 = strlen(frase);

    for (i = 0; i <= comp2 - comp1; i++) {
        tem = 1;
        for (j = 0, k = i; j < comp1; j++, k++) {
            if (frase[k] != palavra[j]) {
                tem = 0;
                break;
            }
        }
        if (tem) {
            cont++;
        }
    }

    printf("A menor palavra ocorre %d vezes\n", cont);

    return 0;
}
