#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int freq [26], j, i;
	char frase [1000];
	
	for(i=0; i<26; i++){
		freq[i] = 0;
	}

	printf("Digite sua frase: \n");
	fflush(stdin);
	gets (frase); 	
	
	j = strlen(frase);
	
	for(i=0; i < j; i++){
	
		freq[frase[i]-65]++;
	} 	
	
	for(i=0; i < j; i++){
		
		freq[frase[i]-97]++;
	}
	 	
	printf("Frequencia dos caracteres da string: \n");
	 	
	for(i=0; i < 26; i++){
		
		if(freq[i] > 0){
			printf(" \"%c\" = %d \n", i + 97, freq[i] );
		}
	}
	
	return 0 ; 
}
