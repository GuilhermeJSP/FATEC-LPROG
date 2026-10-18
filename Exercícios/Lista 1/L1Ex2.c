/*Dados dois vetores A e B contendo 10 elementos inteiros cada, gerar e exibir um vetor
C do mesmo tamanho cujos elementos sejam a soma dos respectivos elementos de A e
B.*/

#include <stdio.h>

void somarVetores(int *pA, int *pB, int *pC, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        *(pC+i)= *(pA + i) + *(pB + i);
    }
}

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int B[] = {1,2,3,4,5,6,7,8,9,10};
    int C[10];
    int i;

    //Declarados na função
    // int *pA = A;
    // int *pB = B;
    // int *pC = C;

    somarVetores(A, B, C, 10);

    for (i=0; i<10; i++)
    {
        printf("\n Vetor C [%d]: %d", i+1, *(C + i));
    }
    return 0;
}
