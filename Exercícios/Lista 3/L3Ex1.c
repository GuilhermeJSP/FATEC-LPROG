#include <stdio.h>
#include <string.h> // Necessária para usar strlen()
#include <ctype.h>  // Necessária para usar tolower()


//Para contar a quantidade de vogais
int contarVogais(char palavra[]) //int pois a função vai devolver um numero inteiro
{
    int contVog = 0;

    // strlen(palavra) mede o tamanho total da string para o loop rodar do início ao fim
    for (int i = 0 ; i <strlen(palavra); i++)
    {
        if (toupper(palavra[i]) == 'A' ||
            toupper(palavra[i]) == 'E' ||
            toupper(palavra[i]) == 'I' ||
            toupper(palavra[i]) == 'O' ||
            toupper(palavra[i]) == 'U')
        {
            contVog++;
        }
    }

    return contVog;
}

//Para trocar as vogais pela letra informada
void trocarVogais(char palavra[], char letra)
{
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        char caracter = tolower(palavra[i]);

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        {
        // Verifica se a vogal original era maiúscula
            if (isupper(palavra[i])) {
            palavra[i] = toupper(letra); // Se era maiúscula, a nova letra também fica maiúscula
            } else {
            palavra[i] = tolower(letra); // Se era minúscula, a nova letra fica minúscula
            }
        }
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
