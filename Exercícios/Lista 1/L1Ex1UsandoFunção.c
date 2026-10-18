/*Dado um vetor A contendo 10 elementos inteiros, gerar e exibir um vetor B cujos
elementos estão na ordem inversa de A.*/

#include <stdio.h>

void inverterVetor(int *pA, int *pB, int tamanho)
{
    int i;

    for (i=0; i <tamanho; i++) //tamanho quando o vetor tem tamanhos variados
    {
    // Pega o valor do final do A e joga na posição correta
    *(pB + i) = *(pA + (tamanho - 1 - i)); //exemplo vetor[10] aqui seria *(pA + (9 - i))
    }
}

int main ()
{

   int vetorA[10];
   int vetorB[10];
   int i;
   // Ponteiros apontando para o início dos vetores
   int *pA = vetorA;
   int *pB = vetorB;

    printf("Informe os 10 elementos do vetor A:\n");

    // Leitura dos dados usando o ponteiro pA
    for (i = 0; i < 10; i++)
    {
        scanf("%d", (pA + i)); // Equivalente a &vetorA[i]
    }

    // Chamando a função para inverter os vetores
    inverterVetor(pA, pB, 10);

    // Exibindo o vetor B invertido usando o ponteiro pB
    for (i = 0; i < 10; i++)
    {
        printf("VetorB [%d]: %d\n", i, *(pB + i));
    }

    return 0;
}
