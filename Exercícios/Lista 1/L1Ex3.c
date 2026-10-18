/* Considere as matrizes A e B contendo 5 elementos inteiros cada, gerar e exibir uma
matriz C de 10 elementos, cujos elementos sejam a intercalação dos elementos de A e
B.*/

#include <stdio.h>

void intercalarVetores(int *pA, int *pB, int *pC, int tamanho)
{
    int i;

    //for (i=0; i < 5; i++)
    for (i = 0; i < tamanho; i++)
    {
        //C [i*2] = A [i];
        *(pC + (i * 2)) = *(pA + i);

        //C [(i*2)+1] = B [i];
        *(pC +(i * 2)+ 1) = *(pB + i);
    }
}

int main()
{
    int A [5] = {1,3,5,7,9};
    int B [5] = {2,4,6,8,10};
    int C [10];
    int i;
    /*
        ponteiros para apontar para o inicio de cada vetor, declarados na função
        int *pA = A;
        int *pB = B;
        int *pC = C;
    */

    intercalarVetores(A, B, C, 5);

    for (i=0; i<10; i++)
    {
        printf("\nVetor C [%d]: %d", i+1, C[i]);
        //printf("\nVetor C [%d]: %d", i + 1, *(pC + i));
    }

    return 0;
}

