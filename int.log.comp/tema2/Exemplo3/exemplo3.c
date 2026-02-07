#include <stdio.h>

/*Programa de gerenciamento de estoque
permite comparar diferentes produtos, valores e estoque*/

int main () {
    //declaração de variáveis
    char produto1[30] = "Arroz", produto2[30] = "Feijão"   , produto3[30];

    unsigned int estoque1, estoque2, estoque3;
    estoque1 = 1000;
    estoque2 = 2000;

    float valor1, valor2, valor3;
    valor1 = 5.50;
    valor2 = 7.80;

    unsigned int estoque_critico1, estoque_critico2, estoque_critico3;
    estoque_critico1 = 500;
    estoque_critico2 = 1000;

    double valor_total1, valor_total2, valor_total3;
    valor_total1 = estoque1 * valor1;
    valor_total2 = estoque2 * valor2;

    //exibição de produtos e seus dados

    printf("O produto %s tem valor de R$ %.2f e estoque de %i unidades. \n", produto1, valor1, estoque1);
    printf("O produto %s tem valor de R$ %.2f e estoque de %i unidades. \n", produto2, valor2, estoque2);

    //comparação de estoque entre produtos

    if (estoque1 < estoque_critico1) {
        printf("O produto %s tem estoque em nivel critico e precisa ser reabastecido. \n", produto1);
    }
    if (estoque2 < estoque_critico2) {
        printf("o produto %s tem estoque em nivel critico e precisa ser reabastecido. \n", produto2);
    }

    //comparação de valores entre produtos

    if (valor1 < valor2) {
        printf("O produto %s tem o preço maiis baixo que o produto %s. \n", produto1, produto2);}
    else {
        printf("O produto %s tem o preço mais baixo que o produto %s. \n", produto2, produto1);
    }



}