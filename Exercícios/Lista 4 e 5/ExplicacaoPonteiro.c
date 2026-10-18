#include <stdio.h>

int main() {
    int numero = 42;      // Uma variável inteira comum
    int *ponteiro = &numero;   // ponteiro recebe o ENDERECO DE 'numero'

    printf("int numero = 42\n");
    printf("int *ponteiro = &numero   // ponteiro recebe o ENDERECO DE 'numero';\n\n");
    printf("--- VALORES E ENDERECOS ---\n");
    printf("Valor da variavel 'numero':          %d\n", numero);
    printf("Endereco de da variavel 'numero' (&numero):    %p\n", (void*)&numero);
    printf("Valor de 'endereco' (ponteiro):   %p\n", (void*)ponteiro);
    printf("Valor apontado por '*ponteiro' (*): %d\n", *ponteiro);

    printf("\n--- ALTERANDO VIA PONTEIRO ---\n");

    printf("\n*ponteiro = 100; // Altera o VALOR no endereço apontado por ponteiro\n");
    *ponteiro = 100; // Altera o VALOR no endereço apontado por ponteiro

    printf("Novo valor de 'numero':     %d\n", numero);

    return 0;
}
