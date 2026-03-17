#include <stdio.h>

// queestão 1

printf ("Olá, Mundo!");

// questão 2

int a;
printf("digite um número inteiro: ");
scanf("%d", &a);
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
scanf("%f", &metros);
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
scanf("%d", &raio);
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
g = miligramas / 1000;
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



//Questão 21 


int num;
scanf("%d", &num);

    if (num>0){
        printf("O numero é positivo"};
    else (printf"O numero é negativo");


//Questão 22

int num;
scanf("%d", &num);

        if (num % 2 == 0) {
            printf("O numero é par");
             };
        else () {
            printf("O numero é impar");
        };


//Questão 23

int a,b;
scanf("%d, %d", &a, &b);
printf("%d, %d", a, b);


//Questão 24

int idade;
scanf("%d", &idade);

if (idade.18) {
    printf("Menor de idade")
};   else () {
    printf("Maior de idade")
};



//Questão 25

int num1, num2, num3, maior, menor, aux;

scanf("%d, %d, %d", &num1, &num2, &num3);

if(num1>num2<num3) {printf("%d, %d, %d", num3, num1, num2)};
else if (num3>num2<num1) {printf("%d, %d, %d", num1, num3,num2)};
else if (num2>num1<num3) {printf("%d, %d, %d", num3, num2, num1)};
else if(num3>num1<num2) {printf("%d, %d, %d", num2, num3, num1)};
else if (num1>num3<num2) {printf("%d, %d, %d", num2, num1, num3)};
else if (num2>num3<num1) {printf("%d, %d, %d", num1, num2, num3)};


//Questão 26

int diasAnos;

scanf("%d", &diasAno);

if (diasAno==365) {printf(" Ano normal")};
else (diasAno==366) {printf(!Ano Bissexto)};


//Questão 27


char letra;
scanf("%c", &letra);

if (letra == a || letra == e || letra == i || letra == o || letra == u) {
        printf("Vogal");
}
else {printf("consoante")};


//Questão 28


float peso, altura, imc;

printf("Digite primeiro o seu peso em quilogramas e depois sua altura em metros:   ");
scanf("%.2f, %.2f", peso, altura);

imc = peso * (altura*altura);

if (imc>18,5) {printf("Você está abaixo do peso ideal.")};
else if (18,5<=imc>=24,9) {printf("Você está no peso normal")};
else if (25<=imc>=29,9) {printf("Você está sobrepreso")};
else if (30<=imc>=39,9) {printf("Você está obesinho")};


//Questão 29

float media;

scanf("%f", &media);

if (media.=6,9) {printf("Reprovado")};
else {printf("Aprovado")};


//Questão 30


int a, b, operacao

printf("Digite dois numeros: .");
scanf("%d, %d", &a, &b);

printf("selecione uma operacao: 1- adicao, 2- subtracao, 3- multiplicacao, 4-divisao");
scanf("%d", &operacao);

if (operacao==1) {printf (a + b)};
else if (operacao==2) {printf(a-b)};
else if (operacao==3) {printf (a*b)};
else if (operacao==4) {printf (a/b)};

//Questão 31

não sei fazer


//Questão 33

não sei nenhum tipo de variavel que aceite horas


//Questão 34


int anoVigente = 2026
int ano;


printf("Digite a data o ano de validade do medicamento: .");
scanf("%d", &ano);

if (ano<anoVigente) { printf("O medicamento está vencido")}
else () {printf("O medicamento está dentro da validade")};



//Questão 35

float salario;
int faixa;

prinft("Digite o valor do salario: .");

scanf("%f", &salario);

printf("Esolha a faixa salarial: 1 - 7%  // 2- 15%   //  3 - 22%  ");
scanf ("%d", &faixa);

if (faixa==1) {printf(salario*0,07)};
else if (faixa==2) {printf(salario*0,15)};
else if (faixa==3) {printf(salario*0.22)};



//Questão 36

int dia;

printf("Digite o numero do dia da semana: ");
scanf("%d", &dia);

if (dia==1) {printf("Hoje é Domingo")};
else if (dia==2) {printf("Hoje é Segunda")};
else if (dia==3) {printf("Hoje é Terça")};
else if (dia==4) {printf("Hoje é Quarta")};
else if (dia==5) {printf("Hoje é Quinta")};
else if (dia==6) {printf("Hoje é Sexta")};
else if (dia==7) {printf("Hoje é Sabado")};




//Questão 37

int numero;

printf("Digite umm numero: ");
scanf("%d", &numero);

if (100<=numero<=200) {printf("O numero %d está dentro do intervalo.", numero)};
else () {printf("O numero %d não está dentro do intervalo", numero)};


//Questão 38




