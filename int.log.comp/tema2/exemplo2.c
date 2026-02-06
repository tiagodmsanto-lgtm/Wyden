#include <stdio.h>

/* Inicio de programa*/

int main(){
 printf("Boas vindas a calculadora de médias\n"); 

/*Declaração de dados*/

float nota1, nota2, nota3, media;

/*Entrada de dados*/

printf("Digite a primeira nota: ");
scanf("%f", &nota1);

printf("Digite a segunda nota: ");
scanf("%f",&nota2);

printf("Digite a terceira nota: ");
scanf("%f",&nota3);

/*Processamento de dados*/

media = (nota1+nota2+nota3)/3;

/*Saída de dados*/

printf("A média é: %.2f", media);

return 0;
}