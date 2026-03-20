#include <stdio.h> 
#include <string.h>


int main() {
    


// queestão 1
{
printf ("Olá, Mundo!");
}
// questão 2
{
int a;
printf("digite um número inteiro: ");
scanf("%d", &a);
printf("O número digitado foi: %d", a);
}
// questão 3

{int a, b;
printf("digite dois numeros: ");
scanf("%d %d", &a, &b);
printf("A soma dos numeros é de : %d", a + b);
}
// questão 4
{
int a,b,c,d;

printf("Digite quatro numeros: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
printf("A média aritmética dos numeros é de: %d", (a+b+c+d)/4);
}
// questão 5

{
float metros, quilometros;
printf("digite um numero de metros para serem convertidos em quilômetros: ");
scanf("%f", &metros);
quilometros = metros / 1000;
printf("O total de quilometros é de: %.3f", quilometros);
}
// questao 6

{int area, lado;
printf("digite a medida do lado do quadrado: ");
scanf("%d", &lado);
area = lado * lado;
printf("A área do quadrado é de %d unidades de área.",area);
}
// questão 7

{float raio;
float area;
printf("Digite a medida do raio do circulo: ");
scanf("%f", &raio);
area = 3.14 * (raio * raio);
printf("A area do circulo é de %f unidades de area.", area);
}
// questão 8

{float celcius, farenheit;

printf("Digite a temperatura em Celsius: ");
scanf("%f", &celcius);
farenheit = celcius * 1.8 + 32;
printf("A temperatura em Farenhiet é de %f graus.", farenheit);
}

//Questão 9

int num, antecessor;
printf("Digite um numero: .");
scanf("%d", &num);

antecessor = num - 1;

printf("O numero antecessor é:%d", antecessor);


// questão 10

float salario, horas_trabalhadas, valor_hora;
printf("Digite quantas horas foram trabalhadas durante o mes: .");
scanf("%f", &horas_trabalhadas);
printf("Digite o valor da hora trabalhada: .");
scanf("%f", &valor_hora);
salario = valor_hora * horas_trabalhadas;
printf("O salario do funcionario é de %f reais.", salario);

// questão 11

float reais, dolares;
printf("Digite o valor em reais para serem convertidos em dolares: .", %f, &reais);
dolares = reais *5.25;
printf("O total após conversão foi de %f dolares.", dolares);


// questão 12

float base, altura, area;
printf("Digite a medida da base20 e a altura do triangulo: .", %f, %f, &base, &altura);
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
scanf("%d", idade);20
dias = idade * 365;
printf("A sua idade em dias é de %d dias.", dias);


// questão 18


float preço, preço_final;
printf("Digite o preço do item: .");
scanf("%f", preço);
preço_final = preço * 1,25;
printf("O valor final do produto é de %f reais.", valor_final);



//Questão 19


float comb, dist, media;

printf("Digite a quantidade de combustivel gasta em litros e a distancia percorrida em km".);
scanf("%f %f", &comb, &dist);

media = dist / comb;

printf("A média de consumo foi de %d Km/l.", media);

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

int a, b, c;

printf("Digite os valores dos lados: ");
scanf("%d %d %d", &a, &b, &c);

if (a<(b+c) && b<(a+c) && c<(a+b)) {
    printf("Os valores são aceitos para formar triangulo.")
}
else {
    printf("Os valores não são aceitos para formar um triangulo.")
};


//Questão 33

int h1, h2, hRes, m1, m2, mRes, s1, s2, sRes;
int totalIni, totalFin;
int dif;

printf("Digite a hora de inicio do jogo (HH:MM:SS");
scanf("%d:%d:%d", &h1, &m1, &s1);

printf("Digite a hora de encerramento do jogo (HH:MM:SS");
scanf("%d:%d:%d", &h2, &m2, &s2);

totalIni = (h1*3600) + (m1*60) + s1;
totalFin = (h2*3600) + (m2*60) + s2;
dif = totalFin - totalIni;

if (dif<0) {
        dif = dif + (3600*24)
};

hRes = (dif / 3600);
mRes = (dif % 3600) / 60;
sRes = dif % 60;

printf ("O total de tempo gasto em jogo foi de %d:%d:%d .", hRes, mRes, sRes);


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

if (100<=numero<=200) {printf("O numero %d está dentro do intervalo.", numero)}
else () {printf("O numero %d não está dentro do intervalo", numero)}


//Questão 38


int idade;

printf("Digite a idade do nadador: .");
scanf("%d", &idade);

if (idade<12) {
    printf("Categoria infantil");
}
else if (12<=idade && idade<18) {
    printf("Categoria juvenil");
}
else {
    printf("Categoria aldulto");
}


//Questão 39


int num;

printf("Digite um numero: .");
scanf("%d", &num);

if ( num % 3 == 0 && num % 5 == 0) {
    printf ("O numero é multiplo de 3 e 5.");
}


//Questão 40

#define LOGIN  "admin";
#define PASSWORD 12345;

char usuario[50];
int senha;

printf("Digite o seu nome de usuario: .");
scanf("%s", usuario);

printf("Digite sua senha: .");
scanf("%d", &senha);

if (usuario == LOGIN && senha == PASSWORD) {
printf("Dados aceitos, login in efetuado.");
}
else {
    printf("Dados invalidos, tente novamente.");
}


//Questão 41


for (int i = 0; i<100; i++) {
    printf ("%d", i);
}


//Questão 42

for (int i = 100; i == 0; i--) {
    printf("$d", i);
}


//Questão 43

for (int i = 0; i == 100; i++)
    if (i % 0) {
        printf("%d", i);
    }

//Questão 44


int soma = 0;

for (int i = 0; i == 10, i++) {
    soma = soma + i;

    printf("%d", soma);
}


//Questão 45


int a, b, c, d, e, f, g, h, i, j, total;
scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
total = a + b + c + d + e + f + g + h + i + j

printf("%d", total);


//Questão 46


int num;

scanf("%d", &num);

for (int i = 0; i == 10; i++) {
    num = num * i

    printf("%d", num);
}



//Questão 47


int contador;

for (int i = 0; i == 5; i++) {
    scanf("%d", &contador);
        if (contador<0) {
            contador = contador + 1;
        }

    printf("%d", contador);
}



//Questão 48


int numero;
long long int resultado = 1;

scanf("%d", &numero);
if (n<0) {
    printf("numero invalido");
}
else {
    for (int i = 0; i <= n; i++) {
        resultado = resultado * i;
    }
}



//Questão 49


int idade;

do {
    scanf("%d", &idade);
    if (idade != 0) {
        printf("Idade registrada. \n");
    }

}
while (idade != 0);



//Questão 50



int idade;
float media;
int acumulador = 0;
int soma = 0;

do {
    scanf("%d", &idade);

    

    if(idade != 0) {
         printf("Idade registrada");
         acumulador ++;
    }

    soma = soma + idade;



}   while (idade != 0);
    media = soma / acumulador;
    printf ("%.2f", media);



//Questão 51

int num;
int contador = 0;

scanf("%d", &num);

for (int i=1; i <= num; i++) {
    if (num % i == 0) {
        contador ++;
    }
    
}   if (contador == 2) {
        printf("Numero não é primo");
    }


//Questão 52


int a = 0;
int b = 1;
soma = 0;

for (int i = 0; i < 13; i++) {

    soma = a + b;
    a = b;
    b = soma;

    printf ("%d", soma);
}
    


//Questão 53


int num;
int maior, menor;

scanf("%d", &num);
maior = num;
menor = num;

for (int i = 1; i <=10; i++) {
    scanf("%d", &num);    
    if(num>maior) {
        maior = num;
    }  
    else if (num<menor) {
        menor = num;
    }

}
printf("%d %d", maior, menor);


//Questão 54

for (int i = 0; i = 32; i <= 126) {
    printf("%d %c", i, i);
}


//Questão 55


char pedido[50];

do {
    scanf("%s", pedido);
}   whiile (strcmp(pedido, "sair") != 0)


//Questão 56

int x, y, total;

printf("Defina o nunmero a ser elevado e sem seguida sua potencia: .");
scanf("%d %d", &x, &y);

for (int i= 0; i < y; i++) {
   toal = total * x;
   i++
}


//Questão 57


int num;
int acumulador = 0;

for (int i = 0; i <= 10; i++) {
    scanf("%d", &num);

    if (10<=num && 50>=num) {
        acumulador++;
    }
}
printf("%d", acumulador);



//Questão 58


int n;

scanf("%d", &n);

for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        printf("*");
    }

    printf("\n");
}


//Questão 59


int lado;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        printf("*");
    }
    printf("\n");
}


//Questão 60

int num;

do {
    scanf("%d", &num);
    printf("%d", num);
} while (num%2 == 3);


//Questão 61


int ids[10];
 
for (int i=0; i<10; i++) {
    printf("Digite um numero \n");
    scanf("%d", &ids);
}
for(int j=0; j<10; j++) {
    printf("IDS: %d.", j, ids[j]);
}


//Questão 62

int lista[5];

for (int i=0; i<6; i++) {
    printf("Digite um numero: ");
    scanf("%d", &lista);
}
for (int j=5; j<0; j--) {
    printf("%d", j, lista[5]);
}


//Questão 63

int vetor[5];
int soma;
float media;

for (int i=0; i<6; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor);
}

for (int j=0; j<6; j++) {
    soma = soma + vetor[j]
}
media = soma / 5;

printf("%d", media);


//Questão 64

{
    int vetor [5];
    int soma, media;
    printf("Digite 5 numeros: ");
    for (int i=0; i<5; i++) {
        scanf("%d", vetor);
    }
    for (int j=0; j<5; j++) {
        soma = soma + vetor[j];
    }
    media = soma / 5;
    printf("%d", media);
    
}

//Questão 65

{

    int vetor [5];
    int num;

    printf("Digite o multiplicador: ");
    scanf("%d", &num);
    printf("Digite os 5 numeros do vetor que serão multiplicados: ");
    for (int i=0; i<5; i++) {
        scanf("%d", vetor[i]);
    }
    for (int j=0; j<5; j++) {
        vetor[j] = vetor[j] * num;
        printf("%d", vetor[j]);
    }
}

//Questão 67

{
    int vetor_a[5];
    int vetor_b[5];
    int vetor_soma[5];

    printf("Digite os 5 numeros do vetor A: ");
    for (int i=0; i<5; i++) {
        scanf("%d", vetor_a[i]);
    }
    printf("Digite os 5 numeros do vetor B: ");
    for (int j=0; j<5; j++) {
        scanf("%d", vetor_b[j]);
    }
    for (int k=0; k<5; k++) {
        vetor_soma[k] = vetor_a[k] + vetor_b[k];
        printf("%d", vetor_soma[k]);
    }
}


//Questão 68

{
    int num;
    int vetor[5];

    printf("Digite os 5 numeros para compor a matriz: ");
        for (int a=0; a<5; a++) {
        scanf("%d", vetor[a])
    
    }

    printf("Digite um valor para ser encontrado dentro do vetor: ");
    scanf("%d", num);

    if (num = vetor [a]) {
        printf("O numero %d está presente no vetor", num);
    }
    else {
        printf("O numero %d não está presente no vetor", num);
    }
}

//Questão 69

{

    int vetor_a[5];
    int vetor_b[5];

    printf("digite os 5 valores para compor o vetor A: ");
    for( int a=0; a<5; a++) {
        scanf("%d", vetor_a[a]);
    }
    for (int b=0; b<5; b++) {
        vetor_b[a] = vetor_a[a];
        
    }
    for (int c=0; c<5; c++) {
        printf("%d", vetor_b[c]);
}

//Questão 70

{
    int vetor_a[5];
    

    printf("Digite os 5 numeros para compor o vetor A: ");
    for (int a=0; a<5; a++) {
        scanf("%d", &vetor_a[a]);
    
    bubbleSort(vetor_a, 5);
    printf("Vetor ordenado: ");
    for (int i=0; i<5; i++) {
        printf("%d ", vetor_a[i]);
}

//Questão 71

{

    
}
}