void somarVetores(int *pA, int *pB, int *pC, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        *(pC+i)= *(pA + i) + *(pB + i);
    }
}

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

void inverterVetor(int *pA, int *pB, int tamanho)
{
    int i;

    for (i=0; i <tamanho; i++) //tamanho quando o vetor tem tamanhos variados
    {
    // Pega o valor do final do A e joga na posição correta
    *(pB + i) = *(pA + (tamanho - 1 - i)); //exemplo vetor[10] aqui seria *(pA + (9 - i))
    }
}

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
