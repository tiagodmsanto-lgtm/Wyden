#include <stdio.h>

int main() {

    int direcaotorre = 1; // Variável para controlar a direção da torre
    int direcaobispo = 1; // Variável para controlar a direção do bispo
    int direcaorainha = 1; // Variável para controlar a direção da rainha
    // Movimentação das peças

    do {
        printf("A torre está na posição horizontal %d.\n", direcaotorre);
        direcaotorre ++;
        printf("A torre está na posição horizontal %d a direita.\n", direcaotorre);
    } while ( direcaotorre <= 4);

    do {
        printf ("A rainha está na posição %d a esquerda.\n", direcaorainha);
        direcaorainha ++;       
        printf ("A rainha está na posição %d a esquerda.\n", direcaorainha);
    }   while (direcaorainha <= 7);

    do {
        printf ("O bispo está na posição %d.\n", direcaobispo);
        printf("Casa %d: Cima, Direita\n", direcaobispo);
        
        direcaobispo++; // Incrementa para a próxima casa
        
    } while (direcaobispo <= 5);

    return 0;
}