/* Construir um programa que armazena em um vetor de inteiros v os índices de
onde um caractere ch1 digitado pelo usuário aparece em uma string s também
digitada pelo usuário. Depois de obter o vetor v, o mesmo deve ser impresso. Um
exemplo de execução do programa é dado por:
Digite uma string: Uma longa jornada.
Digite o caractere: a
Indices onde ocorrem o caractere a: 2 8 14 16 */

#include <stdio.h>
#include <string.h>


int acharIndices(char *string, char caractere, int vetor[])
{
    int QtdOcorrencias = 0;     // Conta quantas vezes a letra apareceu (e serve de índice pro vetor de posições)
    int posicaoAtual = 0;       // Controla o número do índice atual na string (0, 1, 2, 3...)

    while (*string != '\0')
    {
        if (*string == caractere)
        {
            vetor[QtdOcorrencias] = posicaoAtual; // Salva a posição atual dentro do vetor de índices
            QtdOcorrencias++; // Incrementa a quantidade para salvar na próxima "gaveta" na próxima vez
        }
        string++;       // Avança o ponteiro para o próximo caractere da memória
        posicaoAtual++; // Avança o número do índice correspondente na string
    }
    return QtdOcorrencias;
}

int main()
{
    char frase[100];    // Vetor para armazenar a string digitada
    char letra;         // Caractere que o usuário quer buscar
    int indicesEncontrados [100]; // Vetor que vai guardar as posições (índices) onde a letra foi achada

    printf("Digite a frase: ");
    scanf(" %[^\n]", frase);

    printf("Digite a letra para achar o seu indice: ");
    scanf(" %c", &letra);

    int totalOcorrencias = acharIndices(frase, letra, indicesEncontrados);

    printf("\nIndices onde ocorrem o caractere %c: ", letra);

    for (int i = 0; i < totalOcorrencias; i++)
    {
        printf("%d ", indicesEncontrados[i]);
    }
    printf("\n");
    return 0;
}
