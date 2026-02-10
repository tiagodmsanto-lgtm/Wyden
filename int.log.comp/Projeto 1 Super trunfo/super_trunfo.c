#include <stdio.h>

int main() {
    
    // Declaração de variáveis simples
    int n_pontos_turisticos1, n_pontos_turisticos2;
    unsigned long int populacao1, populacao2;
    char estado1[50], estado2[50]; 
    char cidade1[50], cidade2[50]; 
    char codigo1[50], codigo2[50]; 
    float area1, area2;
    float pib1, pib2;
   
    // --- ENTRADA DE DADOS CARTA 01 ---
    printf("Bem vindo ao jogo do super trunfo!\n");
    printf("--- CARTA 1 ---\n");
    printf("Digite o código da carta (Ex: A1): ");
    scanf("%s", codigo1); // Sem o &
    getchar(); 
    
    printf("Digite a sigla do estado (Ex: SP): ");
    fgets(estado1, 50, stdin);
    
    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1); // %lu para unsigned long
    
    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &n_pontos_turisticos1); // %d para int simples

    // --- ENTRADA DE DADOS CARTA 02 ---
    printf("\n\n--- CARTA 2 ---\n");
    printf("Digite o código da carta (Ex: B2): ");
    scanf("%s", codigo2);
    getchar(); 
    
    printf("Digite a sigla do estado: ");
    fgets(estado2, 50, stdin);
    
    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    
    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &n_pontos_turisticos2);


    // --- CÁLCULOS ---

    // Carta 1
    float densidade_populacional1 = populacao1 / area1;
    float inverso_densidade1 = area1 / populacao1; // Quanto maior, melhor
    float pib_per_capita1 = pib1 / populacao1;
    
    // SOMA SIMPLES (Corrigido para bater com a regra do jogo)
    // Estamos somando o INVERSO da densidade, pois menor densidade = mais pontos
    float super_poder1 = (float)populacao1 + area1 + pib1 + (float)n_pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;

    // Carta 2
    float densidade_populacional2 = populacao2 / area2;
    float inverso_densidade2 = area2 / populacao2;
    float pib_per_capita2 = pib2 / populacao2;
    
    float super_poder2 = (float)populacao2 + area2 + pib2 + (float)n_pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;


    // --- EXIBIÇÃO CARTA 01 ---

    printf("\n\nDados da primeira carta:\n");
    printf("Código: %s\n", codigo1); // Removi os \n extras para limpar a tela
    printf("Estado: %s", estado1);
    printf("Cidade: %s", cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("População: %lu\n", populacao1); // %lu
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", n_pontos_turisticos1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Super Poder: %.2f\n", super_poder1); // Agora imprime a variável correta!


    // --- EXIBIÇÃO CARTA 02 ---

    printf("\n\nDados da segunda carta:\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s", estado2);
    printf("Cidade: %s", cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", n_pontos_turisticos2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Super Poder: %.2f\n", super_poder2);


    // --- COMPARAÇÃO DAS CARTAS ---

    printf("\n\nComparando as cartas...\n");
    
    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    printf("Area: ");
    if (area1 > area2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    printf("Numero de pontos turísticos: ");
    if (n_pontos_turisticos1 > n_pontos_turisticos2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    printf("Densidade Populacional (Menor vence): ");
    // Aqui usamos o inverso OU a lógica invertida. 
    // Como já calculamos o inverso no super poder, podemos comparar o inverso:
    if (inverso_densidade1 > inverso_densidade2) { 
        printf("1\n");
    } else {
        printf("0\n");
    }

    printf("Super Poder: ");
    if (super_poder1 > super_poder2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    // --- FINALIZAÇÃO ---

    printf("\n\nObrigado por jogar o Super Trunfo!\n");

    return 0;
}