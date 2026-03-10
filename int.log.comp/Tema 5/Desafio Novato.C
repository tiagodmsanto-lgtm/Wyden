#include <stdio.h>

int main() {

int tabuleiro [10][10] = {
    {0,1,2,3,4,5,6,7,8,9},
    {0,1,2,3,4,5,6,7,8,9},
    {0,1,2,3,4,5,6,7,8,9},
    {0,1,2,3,4,5,6,7,8,9},
    {0,1,2,3,4,5,6,7,8,9},
    {0,1,2,3,4,5,6,7,8,9},
    {0,1,2,3,4,5,6,7,8,9},
    {0,1,2,3,4,5,6,7,8 ,9},
    {0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9},
    {0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9}
};

int navio1[3]={1,2,3};
int navio2[3]={7,7,7};


printf("Tabuleiro: \n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

printf("Navio 1: \n");
for (int i = 0; i < 3; i++) {
    printf("%d ", navio1[i]);
}
printf("\n");
printf("Navio 2: \n");
for (int i = 0; i < 3; i++) {
    printf("%d ", navio2[i]);
}      
return 0;

}

