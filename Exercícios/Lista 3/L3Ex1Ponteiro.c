#include <stdio.h>
#include <string.h> // Necessária para usar strlen()
#include <ctype.h>  // Necessária para usar tolower()


//Para contar a quantidade de vogais
int contarVogais(char *palavra) //int pois a função vai devolver um numero inteiro
{
    int contVog = 0;

    // Enquanto o ponteiro não apontar para o caractere nulo '\0' (fim da string)
    while (*palavra != '\0')
    {
        if (toupper(*palavra) == 'A' ||
            toupper(*palavra) == 'E' ||
            toupper(*palavra) == 'I' ||
            toupper(*palavra) == 'O' ||
            toupper(*palavra) == 'U')
        {
            contVog++;
        }

        palavra++; // Avança o ponteiro para o próximo endereço de memória (próxima letra)
    }

    return contVog;
}

//Para trocar as vogais pela letra informada
void trocarVogais(char *palavra, char letra)
{
    // Criamos um "ponteiro auxiliar" (inicio) para guardar o endereço inicial da string.
    char *inicio = palavra;

    while (*inicio != '\0')
    {
        char caracter = tolower(*inicio);

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        {
        // Verifica se a vogal original era maiúscula
            if (isupper(*inicio))) {
            *inicio = toupper(letra); // Se era maiúscula, a nova letra também fica maiúscula
            } else {
            *inicio = tolower(letra); // Se era minúscula, a nova letra fica minúscula
            }
        }
    inicio++; // Move o ponteiro auxiliar para a próxima letra da string
    }
}
int main()
{
    char palavra[100];
    char letra;
    int qtdVogal;

    // Pede e lê a palavra digitada pelo usuário, aceitando espaços
    printf("Digite a palavra ate 100 caracteres: ");
    scanf(" %[^\n]", palavra);

    // Pede e lê a letra de substituição
    printf("Digite a letra para substituir as vogais na palavra: ");
    scanf(" %c", &letra);

    //Contagem de vogais antes da troca
    qtdVogal = contarVogais(palavra);

    //Troca de vogais
    trocarVogais(palavra, letra);

    // Exibe os resultados finais solicitados pelo exercício
    printf("\nQuantidade de vogais: %d\n", qtdVogal);
    printf("Palavra modificada: %s\n", palavra);

    return 0;
}
