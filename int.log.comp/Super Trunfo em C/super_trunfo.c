#include <stdio.h>

int main() {
    
    /*declaração de variáveis*/
    
    int n_pontos_turisticos1, n_pontos_turisticos2, populacao1, populacao2;
    char estado1[50]; 
    char estado2[50]; 
    char cidade1[50]; 
    char cidade2[50];
    char codigo1[50]; 
    char codigo2[50];
    float area1, area2;
    float pib1, pib2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    /*entrada de dados carta 01*/

    printf("Bem vindo ao jogo do super trunfo!\n");
    printf("Digite o codigo da carta: LETRA+NÚMERO (Exemplo: A1, B3, C2): ");
    scanf("%s", &codigo1);
    getchar(); //limpa o buffer do teclado
    printf("\nDigite a sigla do estado: (Exemplo: SP, MG, RJ): ");
    fgets(estado1, 50, stdin);
    printf("\nDigite o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    printf("\nDigite a area da cidade (em km²): ");
    scanf("%f", &area1);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite a populacao da cidade: ");
    scanf("%i", &populacao1);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o PIB da cidade (em bilhoes de R$): ");
    scanf("%f", &pib1);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o numero de pontos turisticos que a cidade possui: ");
    scanf("%i", &n_pontos_turisticos1);

     /*entrada de dados carta 02*/

    printf("\n\nAgora, insira os dados da segunda carta:\n");
    printf("Digite o codigo da carta: LETRA+NÚMERO (Exemplo: A1, B3, C2): ");
    scanf("%s", &codigo2);
    getchar(); //limpa o buffer do teclado
    printf("\nDigite a sigla do estado: (Exemplo: SP, MG, RJ): ");
    fgets(estado2, 50, stdin);
    printf("\nDigite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    printf("\nDigite a área da cidade (em km²): ");
    scanf("%f", &area2);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite a populacao da cidade: ");
    scanf("%i", &populacao2);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o PIB da cidade (em bilhoes de R$): ");
    scanf("%f", &pib2);
     getchar(); //limpa o buffer do teclado
    printf("\nDigite o numero de pontos turisticos que a cidade possui: ");
    scanf("%i", &n_pontos_turisticos2);

   /*Lógica aritmética */
   
   densidade_populacional1 = populacao1 / area1;
   densidade_populacional2 = populacao2 / area2;
   pib_per_capita1 = pib1 / populacao1;
   pib_per_capita2 = pib2 / populacao2;
      
   
    /*exibição dos dados carta 01*/

    printf("\n\nDados da primeira carta:\n");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo: %s", codigo1);
    printf("\nNome da cidade: %s", cidade1);
    printf("\nPopulacao: %i habitantes", populacao1);
    printf("\nArea: %.3f km²", area1);
    printf("\nPIB: %.2f bilhoes de R$", pib1);
    printf("\nNumero de pontos turisticos: %i", n_pontos_turisticos1);
    printf("\nDensidade populacional: %.2f habitantes/km²", densidade_populacional1);
    printf("\nPIB per capita: %.2f reais", pib_per_capita1);


    /*exibição dos dados carta 02*/

    printf("\n\nDados da segunda carta:\n");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo: %s", codigo2);
    printf("\nCidade: %s", cidade2);
    printf("\nPopulacao: %i habitantes", populacao2);
    printf("\nArea: %.3f km²", area2);
    printf("\nPIB: %.2f bilhoes de R$", pib2);
    printf("\nNumero de pontos turisticos: %i", n_pontos_turisticos2);
    printf("\nDensidade populacional: %.2f habitantes/km²", densidade_populacional2);
    printf("\nPIB per Capita: %.2f reais    ", pib_per_capita2);

        /*finalização do programa*/

    printf("\n\nObrigado por jogar o Super Trunfo!\n");

    return 0;
}