#include <stdio.h>

int main() {

      // Exemplo 1- calcular a soma dos elementos do vetor

      int vetor [5] = {1, 2, 3, 4, };
      int soma = 0;

      for (int i=0; i<5; i++) {
            soma = soma + vetor[i];
            printf ("%d\n",soma);
      }


      // Exemplo 2- soma de duas matrizes

      int matriz1 [2][2] = {{1,2},{3,4}};
      int matriz2 [2][2] = {{5,6},{7,8}};
      int matrizSoma[2][2];

            for (int i=0; i<2; i++) {
                  for (int j=0; j<2; j++) {
                        matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
                        printf("\nmatrizSoma[%d][%d] = %d.\n ", i, j, matrizSoma[i][j]);
                  }
            }


      return 0;
}