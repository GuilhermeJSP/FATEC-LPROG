#include <stdio.h>

int main()
{
    int tab[8][8] = {
        {6,0,0,5,0,0,1,0},
        {0,1,0,2,0,3,0,2},
        {0,1,1,1,0,1,0,0},
        {0,0,2,0,3,4,4,3},
        {1,0,1,1,0,1,0,0},
        {0,0,1,3,0,4,0,1},
        {1,0,0,0,2,2,2,1},
        {1,5,0,6,0,1,1,0}
        };

    int contador[7] = {0,0,0,0,0,0,0};

    int i,j, peca;

    for (i=0; i<8;i++)
    {
        for (j=0; j<8; j++)
        {
        peca = tab[i][j];
        contador[peca]++;
        }

    }

    printf("\nPeoes = %d", contador[1]);
    printf("\nCavalos = %d", contador[2]);
    printf("\nTorres = %d", contador[3]);
    printf("\nBispos = %d", contador[4]);
    printf("\nReis = %d", contador[5]);
    printf("\nRainhas = %d", contador[6]);
    printf("\nVazias = %d", contador[0]);

}
