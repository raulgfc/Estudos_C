#include <stdio.h>
#include <stdlib.h>

int main()
{
int vetor[5];
int *p; //ponteiro
int i;
p =&vetor[0]; //atribuindo o primeiro elemento do vetor

//o ponteiro ira percorrer o vetor vetor e ira preenche-lo

for(i=0;i<5;i++){
    *p = i+1;//valores anexados no vetor
    printf("posicao %d esta no endeco %p\n", i, p);
    p++; //nova posicao do vetor
    }
//for(i=0;i<5;i++){ //imprimindo vetor
//    printf("Valor %d\n", vetor[i]);
//   }

for(i=0;i<5;i++){
    printf("Valor %d esta no endereço %p\n"), vetor[i],&vetor[i];
}

//anexando o valor de um p pré determinado
//p=&p[3]   ou p = vetor+3;

}
