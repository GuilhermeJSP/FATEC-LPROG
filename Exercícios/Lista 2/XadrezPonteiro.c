/* Dado um tabuleiro de xadrez TAB onde, para facilitar a indicação das pedras,
vamos convencionar:
1- PEÕES 2- CAVALOS
3- TORRES 4- BISPOS
5- REIS 6- RAINHAS
0- AUSENCIA DE PEDRAS
Contar a quantidade de cada tipo de peça no tabuleiro:
6 0 0 5 0 0 1 0
0 1 0 2 0 3 0 2
0 1 1 1 0 1 0 0
0 0 2 0 3 4 4 3
1 0 1 1 0 1 0 0
0 0 1 3 0 4 0 1
1 0 0 0 2 2 2 1
1 5 0 6 0 1 1 0
Exemplo de saída:
PEÕES: 17 peças
CAVALOS: 6 peças
TORRES: 4 peças
 O tabuleiro (acima) deve ser armazenado numa matriz bidimensional.
 Armazenar a qtde de cada peça em uma matriz unidimensional (utilizar o índice
para identificar as peças).
 NÃO USAR IF para contar as peças.
*/

#include <stdio.h>

void contarPecas(int tab[][8], int contador[])
{
    // Ponteiro para percorrer a matriz bidimensional (aponta para o primeiro elemento)
    int *ptr_tab = &tab[0][0];
    /* mesma coisa que :
    int *ptr_tab;
    ptr_tab = &tab[0][0]; */

    // Ponteiro para o vetor contador
    int *ptr_contador = contador;

    int i, j;

    for (i=0; i<8;i++)
    {
        for (j=0; j<8; j++)
        {
            // O cálculo (i * 8 + j) descobre exatamente em qual posição linear
            // da memória a linha 'i' e a coluna 'j' estão.
            // Exemplo:
            // Quando i=0, j=0 -> (0 * 8 + 0) = 0 -> pega o primeiro elemento.
            // Quando i=1, j=0 -> (1 * 8 + 0) = 8 -> pula direto para o início da linha 1.
           int peca = *(ptr_tab + (i * 8 + j));

            // Usamos o ponteiro do contador para somar 1 na posição equivalente ao tipo da peça.
            // *(ptr_contador + peca) é exatamente a mesma coisa que escrever contador[peca]
            *(ptr_contador + peca) += 1;
        }
    }
}


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

    // Vetor para contar as peças (índice 0 a 6), inicializado com zeros
    int contador[7] = {0,0,0,0,0,0,0};

    contarPecas(tab, contador);

    printf("\nPeoes = %d", contador[1]);
    printf("\nCavalos = %d", contador[2]);
    printf("\nTorres = %d", contador[3]);
    printf("\nBispos = %d", contador[4]);
    printf("\nReis = %d", contador[5]);
    printf("\nRainhas = %d", contador[6]);
    printf("\nVazias = %d", contador[0]);

    return 0;
}
