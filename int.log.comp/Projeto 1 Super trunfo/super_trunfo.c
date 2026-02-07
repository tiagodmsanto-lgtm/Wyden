#include <stdio.h>

int main() {
    
    //declaração de variáveis
    int n_pontos_turisticos1, n_pontos_turisticos2, populacao1, populacao2;
    char estado1[50]; 
    char estado2[50]; 
    char cidade1[50]; 
    char cidade2[50];
    char codigo1[50]; 
    char codigo2[50];
    float area1, area2;
    float pib1;
    float pib2;

    //entrada de dados carta 01

    printf("Bem vindo ao jogo do super trunfo!\n");
    printf("Digite o código da carta: LETRA+NÚMERO (Exemplo: A1, B3, C2): ");
    scanf("%s", &codigo1);
    getchar(); //limpa o buffer do teclado
    printf("\nDigite a sígla do estado: (Exemplo: SP, MG, RJ): ");
    fgets(estado1, 50, stdin);
    printf("\nDigite o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    printf("\nDigite a área da cidade (em km²): ");
    scanf("%f", &area1);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite a população da cidade: ");
    scanf("%i", &populacao1);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o PIB da cidade (em R$): ");
    scanf("%f", &pib1);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o número de pontosturísticos que a cidade possui: ");
    scanf("%i", &n_pontos_turisticos1);

     //entrada de dados carta 02

    printf("\n\nAgora, insira os dados da segunda carta:\n");
    printf("Digite o código da carta: LETRA+NÚMERO (Exemplo: A1, B3, C2): ");
    scanf("%s", &codigo2);
    getchar(); //limpa o buffer do teclado
    printf("\nDigite a sígla do estado: (Exemplo: SP, MG, RJ): ");
    fgets(estado2, 50, stdin);
    printf("\nDigite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    printf("\nDigite a área da cidade (em km²): ");
    scanf("%f", &area2);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite a população da cidade: ");
    scanf("%i", &populacao2);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o PIB da cidade (em R$): ");
    scanf("%f", &pib2);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o número de pontosturísticos que a cidade possui: ");
    scanf("%i", &n_pontos_turisticos2);

    // exibição dos dados carta 01

    printf("\n\nDados da primeira carta:\n");
    printf("\nCódigo: %s", codigo1);
    printf("\nEstado: %s", estado1);
    printf("\nCidade: %s", cidade1);
    printf("\nÁrea: %.3f", area1);
    printf("\nPopulação: %i", populacao1);
    printf("\nPIB: %.2f", pib1);
    printf("\nC1Número de pontos turísticos: %i", n_pontos_turisticos1);

        // exibição dos dados carta 01

    printf("\n\nDados da segunda carta:\n");
    printf("\nCódigo: %s", codigo2);
    printf("\nEstado: %s", estado2);

    printf("\nCidade: %s", cidade2);
    printf("\nÁrea: %.3f", area2);
     printf("\nPopulação: %i", populacao2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de pontos turísticos: %i", n_pontos_turisticos2);

        //finalização do programa

    printf("\n\nObrigado por jogar o Super Trunfo!\n");

    return 0;
}