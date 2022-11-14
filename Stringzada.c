#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char texto[100], palindromo[100];
    printf("Digite uma palavra: \n");
    fflush(stdin);
    // Lendo a String BUNITA
    gets(texto);
    // Jogando a string pra variavel pra inverter dps
    strcpy(palindromo, texto);
    // Invertendo a string
    strrev(palindromo);
    //Testando se o inverso da string é igual a string original
    if (!strcmp(palindromo,texto))
    {
        // Se for igual é um palind
        printf("E um palindromo");
    } else {
        printf("Nao e um palindromo");
    }
}
