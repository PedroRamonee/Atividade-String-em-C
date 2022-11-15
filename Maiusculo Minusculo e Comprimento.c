#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	char frase [100];
	
	printf("Digite a frase: \n");
	fflush(stdin);
	gets(frase);
	
	printf("Comprimento da string: %d \n", strlen(frase));
	
	printf("Convertendo a string em letras maiusculas: %s \n", strupr(frase));
	
	
	printf("Convertendo a string em letras minusculas: %s ", strlwr(frase));
	
	
	
	
	return 0 ; 
}
