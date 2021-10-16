#include <stdio.h>
#include <stdlib.h>

void troca (int x[0], int y[0]);
void ordenaTres(int a[], int b[], int c[]);

void main(){
	int v1[0],v2[0],v3[0];
	
	printf("Digite o valor para o vetor V1: ");
	scanf("%d", &v1[0]);
	
	printf("Digite o valor para o vetor V2: ");
	scanf("%d", &v2[0]);
	
	printf("Digite o valor para o vetor V3: ");
	scanf("%d", &v3[0]);
	
	printf("\nAntes da ordenacao:");
	printf("\n %d %d %d", v1[0],v2[0],v3[0]);
	
	printf("\nDepois da ordenacao");
	ordenaTres(v1,v2,v3);
	

}

void troca (int x[0], int y[0]){
	int aux;
	
	aux = x[0];
	x[0] = y[0];
	y[0] = aux;
	
}



void ordenaTres(int a[], int b[], int c[]){
	if (a[0]>b[0])
		troca(a,b);
	if (a[0]>c[0])
		troca (a,c);
	if (b[0]>c[0])
		troca (b,c);
	
}

