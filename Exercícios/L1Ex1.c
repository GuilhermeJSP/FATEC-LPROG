/*Dado um vetor A contendo 10 elementos inteiros, gerar e exibir um vetor B cujos
elementos estão na ordem inversa de A.*/

#include <stdio.h>

int main ()
{

   // Cria o vetorA com espaço para 10 inteiros comuns (valores)
   int vetorA[10];
   int vetorB[10];
   int i;

   //Ponteiro para percorrer os vetores

   int *pA;    // cria um ponteiro para inteiro, essa variavel guarda o endereço de um numero inteiro, e não o numero
   *pA = vetorA; // você aloca dentro de pA o endereço inicial do vetor.

   int *pB = vetorB;

   //   pA aponta para o primeiro elemento do vetor
   //   pA guarda o endereço da memória onde começa o vetorA

   printf("Informe o vetor A: \n");

   for (i=0; i <10; i++)
   {
    scanf("%d", (pA + i)); //  Isso é 100% idêntico a fazer &vetorA[i].

   //  (pA + i) calcula o endereço exato do elemento i.
   //  O scanf lê o número digitado e joga o valor diretamente nesse endereço de memória.
   }

   for (i=0; i <10; i++)
   {

    *(pB + i) = *(pA + (9 - i));

    //  (pB + i) calcula o endereço do vetorB onde vamos salvar o dado.
    //  (pA + (9 - i)) calcula o endereço de memória lá no final do vetorA e vai voltando.

    //  O asterisco antes de tudo: *(...) pega o VALOR que está guardado naquele endereço.
    //  *(pB + i) = ... joga o valor obtido de A dentro da posição correta de B.

    // Em resumo: Copia o elemento do final de A para o início de B.


    // Exibe o resultado usando o ponteiro pB com o deslocamento + i
       printf("VetorB [%d]: %d\n", i, *(pB + i));
   }
}
