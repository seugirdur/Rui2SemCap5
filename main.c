#include <stdio.h>
#define ex52

#ifdef ex51
/*1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
    funcao para compara-las e retorne como resultado se são IGUAIS 1 ou se
    DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
    (Declare os vetores como variavel global) (nao pode usar funcao de biblioteca)*/
char string1[11]; // Vetor para a primeira string (até 10 caracteres + terminador nulo)
char string2[11]; // Vetor para a segunda string (até 10 caracteres + terminador nulo)

int compareStrings() {
    int i = 0;

    while (string1[i] != '\0' || string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            return 0;
        }
        i++;
    }

    if (string1[i] == '\0' && string2[i] == '\0') {
        return 1;
    }

    return 0;
}

int main() {
    printf("Digite a primeira string (até 10 caracteres): ");
    scanf("%s", string1);

    printf("Digite a segunda string (até 10 caracteres): ");
    scanf("%s", string2);

    int resultado = compareStrings();

    if (resultado == 1) {
        printf("As strings são IGUAIS.\n");
    } else {
        printf("As strings são DIFERENTES.\n");
    }

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return 0;
}



#endif

#ifdef ex52

char nomes[5][8];

int calcularComprimento(char str[]) {
    int comprimento = 0;
    while (str[comprimento] != '\0') {
        comprimento++;
    }
    return comprimento;
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome %d (até 7 caracteres): ", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("%10s%10s%10s%10s%10s\n", "10", "20", "30", "40", "50");
    printf("12345678901234567890123456789012345678901234567890\n");
    int larguraNome0 = calcularComprimento(nomes[0]);
    int larguraNome1 = calcularComprimento(nomes[1]);
    int larguraNome2 = calcularComprimento(nomes[2]);
    int larguraNome3 = calcularComprimento(nomes[3]);
    int larguraNome4 = calcularComprimento(nomes[4]);

    printf("%*s%*s\n", larguraNome0 + 2, nomes[0], larguraNome4 + 40 - larguraNome0, nomes[4]);
    printf("%*s%*s\n", larguraNome1 + 12, nomes[1], larguraNome3 + 20 - larguraNome1, nomes[3]);
    printf("%*s\n", larguraNome2 + 22, nomes[2]);

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return 0;
}

#endif

#ifdef ex53

char minhaString[100];

int calcularComprimento() {
    int comprimento = 0;
    while (minhaString[comprimento] != '\0') {
        comprimento++;
    }
    return comprimento;
}

int main() {
    printf("Digite uma string: ");
    scanf("%s", minhaString);

    int comprimento = calcularComprimento();

    printf("O comprimento da string é: %d\n", comprimento);

    return 0;
}


#endif