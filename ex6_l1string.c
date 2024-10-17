// Função:
//strlen - conta quantidade de
//caracteres de um vetor.
//strcpy - “copia” um texto de uma
//origem ou variável.
//Função:
//strcat - concatena um valor (adiciona)
//a uma variável existente.
//strcmp- compara

#include <stdio.h>
#include <string.h>
int main(){
	char palavra[50],palavra2[50];
	int i,comp;
	
	printf("Digite uma palavra:");
	scanf("%s",palavra);
	
	comp = strlen(palavra)-1;
	
	for(i=comp;i>=0;i--){
		palavra2[i]=palavra[comp-i];
	}
	
	printf("%s",palavra2);
	return 0;
}
