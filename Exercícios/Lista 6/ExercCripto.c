#include <stdio.h>
#include <string.h>

// Função de Criptografia (Substituição simétrica)
void Cripto(char *texto1, char *texto) {
    // Tabelas de conversão com 37 posições (36 caracteres + '\0')
    char controle1[37] = "a1b3c/5d7+e9fg$hijkl!MNOPQ&RS-TUVXYZ";
    char controle2[37] = "m\\*opq@rstuv?xy2z4A6B8C%0DEFGHIJ#~=";

    int j;
    int achou;
    int tamanho_tabela = strlen(controle1); // Retorna 36

    // Navega pela string de origem ate encontrar o terminador nulo ('\0')
    while (*texto1 != '\0') {
        achou = 0; // Reseta a flag para o caractere atual

        // Percorre as posicoes das tabelas de controle
        for (j = 0; j < tamanho_tabela; j++) {
            // 1. Se o caractere estiver em controle1, substitui pelo de controle2
            if (*texto1 == (controle1[j])) {
                *texto = (controle2[j]);
                achou = 1;
                break;
            }

            // 2. Se o caractere estiver em controle2, substitui pelo de controle1
            if (*texto1 == (controle2[j])) {
                *texto = (controle1[j]);
                achou = 1;
                break;
            }
        }

        // 3. Se o caractere nao estiver em nenhuma tabela, mantem o original
        if (!achou) {
            *texto = *texto1;
        }

        // Avança os ponteiros
        texto1++;
        texto++;
    }

    // Adiciona o caractere nulo terminador no destino
    *texto = '\0';
}

int main()
{
    char texto1[20], texto2[20], texto3[20];

    printf("Informe um texto de ate 9 caracteres:");
    scanf(" %[^\n]", texto1);

    Cripto(texto1, texto2);
    Cripto(texto2, texto3);

    printf("\nO texto criptografado:\n%s\n", texto2);
    printf("\nE descriptografado:\n%s\n", texto3);

    return 0;
}
