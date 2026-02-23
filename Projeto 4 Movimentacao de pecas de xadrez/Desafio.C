#include <stdio.h>

int main() {

    int torre, bispo, rainha;
    char direcaotorre, direcaobispo, direcaorainha;

    // Solicita ao usuário o número de casas que a peça deve percorrer

    printf("Digite o numero de casas que a torre deve percorrer: ");
    scanf("%d", &torre);
    printf("Digite a direção que a torre deve percorrer (1 para horizontal, 2 para vertical): ");
    scanf(" %c", &direcaotorre);
    printf("Digite o numero de casas que o bispo deve percorrer: ");
    scanf("%d", &bispo); 
    printf("Digite a direção que o bispo deve percorrer (1 para diagonal, 2 para anti-diagonal): ");
    scanf(" %c", &direcaobispo); 
    printf("Digite o numero de casas que a rainha deve percorrer: ");
    scanf("%d", &rainha);
    printf("Digite a direção que a rainha deve percorrer (1 para horizontal, 2 para vertical, 3 para diagonal, 4 para anti-diagonal): ");   
    scanf(" %c", &direcaorainha);

    // Exibição de movimentação das peças


    printf("A torre se moveu %d casas na direção %c\n", torre, direcaotorre);










}