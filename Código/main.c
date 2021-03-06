#include <stdio.h>
#include <string.h>

void inverte(char *palavra){
	char aux[255];
	int tamanho,i=0,j=0;
	tamanho = strlen(palavra)-1;
	for(i=tamanho;i>=0;i--){
	    aux[j] = palavra[i];
	    j++;
	}
	strcpy(palavra,aux);
	printf("A palavra invertida e: %s\n",palavra);
}

int main(){
	char palavra[255];
	printf("Digite uma palavra: \n");
	scanf("%s",palavra);
	inverte(palavra);
	return 0;
}