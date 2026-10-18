//Para contar a quantidade de vogais
int contarVogais(char *palavra) //int pois a função vai devolver um numero inteiro
{
    int contVog = 0;

    // Enquanto o ponteiro não apontar para o caractere nulo '\0' (fim da string)
    while (*palavra != '\0')
    {
        if (toupper(*palavra) == 'A' ||
            toupper(*palavra) == 'E' ||
            toupper(*palavra) == 'I' ||
            toupper(*palavra) == 'O' ||
            toupper(*palavra) == 'U')
        {
            contVog++;
        }

        palavra++; // Avança o ponteiro para o próximo endereço de memória (próxima letra)
    }

    return contVog;
}

//Para trocar as vogais pela letra informada
void trocarVogais(char *palavra, char letra)
{
    // Criamos um "ponteiro auxiliar" (inicio) para guardar o endereço inicial da string.
    char *inicio = palavra;

    while (*inicio != '\0')
    {
        char caracter = tolower(*inicio);

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        {
        // Verifica se a vogal original era maiúscula
            if (isupper(*inicio))) {
            *inicio = toupper(letra); // Se era maiúscula, a nova letra também fica maiúscula
            } else {
            *inicio = tolower(letra); // Se era minúscula, a nova letra fica minúscula
            }
        }
    inicio++; // Move o ponteiro auxiliar para a próxima letra da string
    }
}

int contarLetra(char *palavra, char letra)
{
    int qtd = 0;

    while(*palavra != '\0')
    {
        letra = toupper(letra);

        if (toupper(*palavra) == letra)
        {
            qtd++;
        }
        palavra++; // Avança para o próximo caractere
    }
    return qtd;
}

int acharIndices(char *string, char caractere, int vetor[])
{
    int QtdOcorrencias = 0;     // Conta quantas vezes a letra apareceu (e serve de índice pro vetor de posições)
    int posicaoAtual = 0;       // Controla o número do índice atual na string (0, 1, 2, 3...)

    while (*string != '\0')
    {
        if (*string == caractere)
        {
            vetor[QtdOcorrencias] = posicaoAtual; // Salva a posição atual dentro do vetor de índices
            QtdOcorrencias++; // Incrementa a quantidade para salvar na próxima "gaveta" na próxima vez
        }
        string++;       // Avança o ponteiro para o próximo caractere da memória
        posicaoAtual++; // Avança o número do índice correspondente na string
    }
    return QtdOcorrencias;
}

