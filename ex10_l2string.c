#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count, i, j;

    printf("Digite uma string: ");
    scanf("%s", str);

    printf("Frequencia de caracteres:\n");
    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        count = 1;

        for (j = 0; j < i; j++) {
            if (str[j] == ch) {
                count = 0; 
                break;
            }
        }

        if (count == 1) {
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[j] == ch) {
                    count++;
                }
            }
            printf("'%c': %d vezes\n", ch, count);
        }
    }

    return 0;
}

