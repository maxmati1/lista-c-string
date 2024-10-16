#include <stdio.h>
#include <string.h>

int main(){
	char palavra[50],palavra2[50];
	int i,comp1,comp2,cont=0;
	
	printf("Digite uma pequena palavra");
	scanf("%s",palavra);
	printf("Digite a frase:");
	scanf("%s",palavra2);
	
	comp1= strlen(palavra);
	comp2 = strlen(palavra2);
	for(i=0;i<=comp2;i++){
		if(strcmp(palavra[i],palavra2[i])==0){
			cont++;
		}
	}
	printf("A menor palavra ocorre %d vezes",cont);
	
	return 0;
}
