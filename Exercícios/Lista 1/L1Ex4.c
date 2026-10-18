/*O número de lâmpadas necessárias para cada cômodo de uma casa é determinado pela
potência mínima de iluminação exigida por metro quadrado, conforme a classe de
utilização do cômodo. Imagine que essas classes são identificadas por inteiros de 1 a 5
e que a potência mínima exigida (em Watts) por metro quadrado para cada classe de
cômodo é dada pela seguinte tabela:
Classe Watts/m2
1 10
2 15
3 18
4 20
5 25
Supondo que só serão usadas lâmpadas de 60W, elabore um programa que calcule e
mostre:
Para cada cômodo:
- A área do cômodo
- A potência da iluminação
- O número de lâmpadas necessárias
Para toda a residência:
- O total de lâmpadas
- O total de potência de iluminação
Observe que o número de cômodos da residência, a classe de cada cômodo e suas
dimensões (em metros) devem ser solicitados pelo usuário.*/

#include <stdio.h>

void calcularComodo(int i, int *totlamp, float *totpot) {
    int classe, potencia, lampadas;
    float largura, comprimento, area, potcomodo;

    printf("\nComodo %d", i);
    printf("\nDigite a classe: ");
    scanf("%d", &classe);

    switch(classe)
    {
        case 1: potencia = 10; break;
        case 2: potencia = 15; break;
        case 3: potencia = 18; break;
        case 4: potencia = 20; break;
        case 5: potencia = 25; break;
        default: printf("Classe invalida (considerando 1)\n"); potencia = 10;
    }

    printf("\nDigite a largura do comodo: ");
    scanf("%f", &largura);

    printf("\nDigite o comprimento do comodo: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    printf("\nArea = %.2f m2\n", area);

    potcomodo = area * potencia;
    printf("Potencia do comodo = %.2f W\n", potcomodo);

    lampadas = potcomodo / 60;
    if ((potcomodo / 60.0) > lampadas)
    {
        lampadas++;
    }

    printf("Quantidade de lampadas do comodo: %d\n", lampadas);

    // Como *totlamp e *totpot são ponteiros, usar o '*' antes deles significa:
    // "Vá até o endereço original lá na main e altere o valor guardado lá dentro".
    // É graças a isso que o total vai somando cômodo por cômodo.
    *totlamp += lampadas;
    *totpot += potcomodo;
}

int main ()
{
    int ncomodo, i;
    int totlamp = 0;
    float totpot = 0;

    printf("Digite o numero de comodos: ");
    scanf("%d", &ncomodo);

    printf("\nClasse 1 : 10 watts/m2\n");
    printf("Classe 2 : 15 watts/m2\n");
    printf("Classe 3 : 18 watts/m2\n");
    printf("Classe 4 : 20 watts/m2\n");
    printf("Classe 5 : 25 watts/m2\n");

    for(i = 1; i <= ncomodo; i++)
    {
    // CHAMANDO A FUNÇÃO E PASSANDO OS ENDEREÇOS (&):
    // Usamos o E comercial (&) para enviar o *endereço de memória* das variáveis
    // totlamp e totpot para a função. Sem o '&', a função só receberia uma cópia
    // e os totais não acumulariam.
        calcularComodo(i, &totlamp, &totpot);
    }

    // Exibindo os totais calculados e acumulados
    printf("\n==============================\n");
    printf("Total de lampadas: %d\n", totlamp);
    printf("Total da potencia: %.2f W\n", totpot);
    printf("==============================\n");

    return 0;
}
