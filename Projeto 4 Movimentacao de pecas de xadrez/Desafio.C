#include <stdio.h>

#define casas_bisto 5
#define casas_rainha 8
#define casas_torre 5
#define casas_cavalo 3

      //Funções Recursivas

void mover_torre(int t, int atual) {
    if (atual <= t) {
        printf ("A torre foi movida para a posição %d direita\n", atual);
        mover_torre(t, atual+1);
    }
}

void mover_rainha(int r, int atual) {
    if (atual <= r) {
        printf ("A rainha foi movida para a posição %d esquerda\n", atual);
        mover_rainha(r, atual+1);
    }
}



int main() {

    //Chamada das funções recursivas

    printf("Movimentação da Torre:\n");
    mover_torre(casas_torre, 1);
    printf("\nMovimentação da Rainha:\n");
    mover_rainha(casas_rainha, 1);

    //Funções Iterativas
    
    printf("\nMovimentação do bispo\n");
    for (int i=1; i<=casas_bisto; i++){
        for (int j=1; j<=1; j++) {
            printf("O bispo está na posição %d direita.\n", i);
        }
        printf("O bispo está na posição %d cima.\n", i);
    }

    printf("\nMoivmentação do cavalo\n");
    for (int i=1; i<=3;i++) {
        int j= 0;
           while (j<2) {
            printf("O cavalo está na posição %d cima.\n", j);
            j++;  
           }
            printf("O cavalo está na posição %d direita.\n", i);
    }
          
return 0;
}