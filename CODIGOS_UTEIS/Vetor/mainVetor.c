#include <stdio.h>
#include <stdlib.h>

void lerVetor( float v[ ], int tv[] );
void ordenarVetor( float v[], int tv );
void exibirVetor( float v[ ], int tv );

void main(){

float vetor[20];
int qtd[1];

lerVetor(vetor, qtd);			//parametros
ordenarVetor(vetor, qtd[0]);	//parametros
exibirVetor(vetor, qtd[0]);		//parametros

}

void lerVetor( float v[ ], int tv[] ) {

	 float temp; tv[0] = -1;
	 int conta = 1;

	 printf("\nDigite as componentes indicadas de cada ");

	 printf("vetor ou -999 para encerrar\n");

	 printf("Valor %d:", conta);
	 scanf("%f", &temp);

	 while( temp != -999 && conta <= 20 ) {
	 tv[0]++;
	 conta++;
	 v[ tv[0] ] = temp;
	 printf("Valor %d:", conta);
	 scanf("%f", &temp);

	 }

	 tv[0]++; // Define a quantidade de elementos do vetor
	}

void exibirVetor( float v[ ], int tv ) {

 int k;

 for( k = 0; k < tv; k++ ) {
 	printf("%d",k+1); printf("Componente: %f\n",v[ k ] );
 }

}

//Ordenação pelo método da Bolha
void ordenarVetor( float v[], int tv ) {

 int conta, j, t = tv-1;

 float temp;

 	for( conta = 1; conta < tv; conta++ ) {
 		for( j = 0; j < t; j++ ) {
 			if( v[j] > v[j+1] ) {
 			temp = v[j]; v[j] = v[j+1];
 			v[j+1] = temp;
 		}
 	}
 	t = t-1;
 	}
 }
