#include <stdio.h>


    int main() {
    
        int numero, i;

        printf("Digite um numero para calcularmos a tabuada: ");
        scanf("%d", &numero);

            for (i=0; i<= 10; i++) {
                    printf("%d x %d = %d\n", i, numero, i*numero);
            } 

            printf("Final da tabuada do numero %d\n", numero);
        return 0;
    }