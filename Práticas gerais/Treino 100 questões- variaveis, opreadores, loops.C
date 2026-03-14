#include <stdio.h>

// queestão 1

printf ("Olá, Mundo!");

// questão 2

int a;
scanf("digite um número inteiro: ", %d, &a);
printf("O número digitado foi: %d", a);

// questão 3
int a, b;
printf("digite dois numeros: ");
scanf("%d %d", &a, &b);
printf("A soma dos numeros é de : %d", a + b);

// questão 4

int a,b,c,d;

printf("Digite quatro numeros: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
printf("A média aritmética dos numeros é de: %d", (a+b+c+d)/4);

// questão 5

float metros, quilometros;
printf("digite um numero de metros para serem convertidos em quilômetros: ");
scanf("%.3f", &metros);
quilometros = metros / 1000;
printf("O total de quilometros é de: %.3f", quilometros);

// questao 6

int area, lado;
printf("digite a medida do lado do quadrado: ");
scanf("%d", &lado);
area = lado * lado;
printf("A área do quadrado é de %d unidades de área.",area);

// questão 7

int area, raio;
printf("Digite a medida do raio do circulo: ");
scanf("%d", raio);
area = 3.14 * (raio * raio);
prinft("A area do circulo é de %d unidades de área.", area);

// questão 8

float celcius, farenheit;

printf("Digite a temperatura em Celsius: ");
scanf("%f", &celcius);
farenheit = celcius * 1.8 + 32;
printf("A temperatura em Farenhiet é de %f graus.", farenheit);


// questão 9

float salario, horas_trabalhadas, valor_hora;
printf("Digite quantas horas foram trabalhadas durante o mes: ." %f, &horas_trabalhadas);
printf("Digite o valor da hora trabalhada: ;", %f, &valor_hora);
salario = valor_hora * horas_trabalhadas;
printf("O salario do funcionario é de %f reais.", salario);

// questão 10

float reais, dolares;
printf("Digite o valor em reais para serem convertidos em dolares: .", %f, &reais);
dolares = reais *5.25;
printf("O total após conversão foi de %f dolares.", dolares);


// questão 12

float base, altura, area;
printf("Digite a medida da base e a altura do triangulo: .", %f, %f, &base, &altura);
area = (base * altura) / 2;
printf("A área do triangulo é de %f unidades de área.", area);


// questão 13

float mg, g;
printf("Digite a dosagem do rempedio em miligramas: .");
scanf("%f", miligramas);
g = miligramas * 1000;
printf("A dosagem da medicação em gramas é de: %f g.", g);


// questão 14


int a, b, resto;
printf("Digite dois numeros: .");
scanf("%d %d", &a, &b);
resto = a%b;
printf("O resto da divisão foi de: %d", resto);


// questão 15

float base, altura, area;
printf("Digite a base e a altura do triangulo: ");
scanf("%fm %f", &base, &altura);
area = (base*altura)/2;
printf("A area do triangulo é de %f unidades de area.", area):


// questão 16

float preço, valor_final;
printf("Digite o valor do item: .");
scanf("%f", &preço);
valor_final = preço * 0.90;
printf("O valor final do item é de %f reais.", valor_final);


// questão 17

int idade, dias.
printf("Digite a sua idade em anos.");
scanf("%d", idade);
dias = idade * 365;
printf("A sua idade em dias é de %d dias.", dias);


// questão 18


float preço, preço_final;
printf("Digite o preço do item: .");
scanf("%f", preço);
preço_final = preço * 1,25;
printf("O valor final do produto é de %f reais.", valor_final);


//questão 20

int a, b, aux;
printf("Dgigite dois valores inteiros: .");
scanf("%d, %d", &a, &b);
aux =a;
a = b;
b = aux;
printf("O valor de A é de %d e o valor de B é de %d .", a, b);

