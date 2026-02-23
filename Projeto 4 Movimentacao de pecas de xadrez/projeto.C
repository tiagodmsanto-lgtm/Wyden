#include <stdio.h>

int main() {

    int i=0;

    while(i <= 10) {
        
        if(i%2 != 0) {
            printf("O numero %d é impar!\n", i);
        }

        i++;
    }

    int numero;
    
    do {

        printf("\nDigite um numero par para sair do programa...");
        scanf("%d", &numero);

        if (numero % 2 !=0) {
            printf("O numero %d é impar\n", numero);
        }   else {
            printf("O numero %d é par\n", numero); 
        }

    } while (numero % 2 != 0);

    printf("\nVoce digitou um numero par, saindo do programa...");
    

    return 0;
}