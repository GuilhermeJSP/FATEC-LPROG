/* Construir um programa que conte e imprima o número de ocorrências de uma
letra, fornecida pelo usuário, em uma dada string, também digitada pelo usuário.

Informe um palavra: arara
Informe uma letra: a
Qtde:3
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarLetra(char *palavra, char letra)
{
    int qtd = 0;

    while(*palavra != '\0')
    {
        letra = toupper(letra);

        if (toupper(*palavra) == letra)
        {
            qtd++;
        }
        palavra++; // Avança para o próximo caractere
    }
    return qtd;
}

int main()
{
    char frase[100];
    char letra;
    int qtdLetra;

    printf("Digite a frase: ");
    scanf(" %[^\n]", frase);

    printf("Digite a letra para contar: ");
    scanf(" %c", &letra);


    printf("\nQuantidade de %c na palavra: %d", letra, (contarLetra(frase, letra)));
    return 0;
}

