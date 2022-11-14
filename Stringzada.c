#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char texto[100], palindromo[100];
    printf("Digite uma palavra: \n");
    fflush(stdin);
    gets(texto);
    strcpy(palindromo, texto);
    
    strrev(palindromo);
    
    if (!strcmp(palindromo,texto))
    {
        printf("E um palindromo");
    } else {
        printf("Nao e um palindromo");
    }
}
