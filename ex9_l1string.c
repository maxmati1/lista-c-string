#include <stdio.h>

int main() {
    char str[100];
    int i, opcao;
    
    printf("Digite uma string: ");
    scanf("%s", str);

    printf("Escolha: 1 para maiuscula, 2 para minuscula: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
  
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;  
            }
        }
        printf("String em letras maiusculas: %s\n", str);
    } else if (opcao == 2) {
        
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;  
            }
        }
        printf("String em letras minusculas: %s\n", str);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}

