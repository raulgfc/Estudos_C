#include <stdio.h>
#include <stdlib.h>



int main()
{
    int numerador, denominador,new_num, new_den, opcao;

    void exibir(int n, int d, int nn, int nd);
    void multiplicar(int num, int den, int new_num, int new_den);
    void inverter(int numerador, int denominador, int new_num, int new_den);
    void somar (int numerador, int denominador, int new_num, int new_den);

    printf("\nDigite um valor para o numerador ");
    scanf("%d", &numerador);
    printf("\nDigite um valor para o denominador ");
    scanf("%d", &denominador);

    printf("\nSEGUNDA FRACAO\n ");
    printf("\nDigite um valor para o numerador ");
    scanf("%d", &new_num);
    printf("\nDigite um valor para o denominador ");
    scanf("%d", &new_den);

    printf("\nSELCIONE ALGUMA OPCAO\n");
    printf("\nPara EXIBIR digite 1 ");
    printf("\nPara MULTIPLICAR digite 2 ");
    printf("\nPara INVERTER digite 3 ");
    printf("\nPara SOMAR digite 4 ");
    printf("\nPara SOMAR digite 5 ");
    printf("\n\nOPCAO DESEJADA:");
    scanf("%d", &opcao);

    if(opcao==1)
        exibir(numerador, denominador, new_num,new_den);

    if(opcao==2)
        multiplicar(numerador,new_num,denominador,new_den);

    if(opcao==3)
        inverter(numerador,denominador,new_num,new_den);
    if(opcao==4)
        somar(numerador,denominador,new_num,new_den);
    if(opcao==5)
        subtrair(numerador,denominador,new_num,new_den);
}

void exibir(int n, int d, int nn, int nd){
    printf("Primeira fracao (%d,%d)\n", n,d);
    printf("Segunda fracao (%d,%d)", nn,nd);
}

void multiplicar(int num, int den, int new_num, int new_den){

    int resultado_num,resultado_den;

    resultado_num = num*new_num;
    resultado_den = den*new_den;
    printf("O resultado é: (%d,%d)", resultado_num,resultado_den);
}

void inverter(int numerador, int denominador, int new_num, int new_den){
    printf("Primeira fracao (%d,%d)\n", denominador,numerador);
    printf("Segunda fracao (%d,%d)", new_den,new_num);
}

void somar (int numerador, int denominador, int new_num, int new_den){
int resulNumerador, resulDenominador;

numerador = numerador * new_den;
new_num = new_num*denominador;
resulNumerador = numerador + new_num;

resulDenominador = denominador * new_den;

printf("O valor da soma foi: (%d,%d)", resulNumerador,resulDenominador);
}

void subtrair (int numerador, int denominador, int new_num, int new_den){
int resulNumerador, resulDenominador;

numerador = numerador * new_den;
new_num = new_num*denominador;
resulNumerador = numerador - new_num;

resulDenominador = denominador * new_den;

printf("O valor da soma foi: (%d,%d)", resulNumerador,resulDenominador);


}
void mdc(int numerador, int denominador, int new_num, int new_den){
int resto, new_resto;

while (denominador!=0){
    resto = numerador%denominador;
    numerador = denominador;
    denominador = resto;
    }
printf("\nMDC da primeira fracao %d", numerador);


while (new_den!=0){
    new_resto = new_num%new_den;
    new_num = new_den;
    new_den = new_resto;
    }
printf("\nMDC da segunda fracao %d", new_num);
}


