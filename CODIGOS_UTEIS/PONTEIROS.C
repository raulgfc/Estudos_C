//EXPERIMENTO PONTEIROS EM C 


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    int *q;

    scanf("%d",&n);

    printf("Valor de n = %d\n", n);
    q = &n;

    scanf("%d", q);//para ponteiro nao usa o (&) "e" comercial
    printf("Valor de n = %d\n", n);
}



// outro programa Malloc

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p;
    p = (int *) malloc (sizeof(int));

    scanf ("%d", p);
    *p = *p + 142;
    printf ("%d", *p);
    free (p);
}


//TAREFA 03


#include <stdio.h>
#include <stdlib.h>

void main()
{
int *p;
int n,i;

printf("Entre com o valor de n:");
scanf("%d", &n);

p=(int *) malloc(n*sizeof(int));//pra que serve malloc?

for(i=0;i<n;i++)
    *(p+i)=i+2;

for (i=0;i<n;i++)
    printf("Valor da posicao %d = %d\n",i+1, *(p+i));


}

//PONTEIRO SENDO USADO PARA BUSCAR INFORMAÇÕES CONJUNTAS

#include <stdio.h>
#include <stdlib.h>

typedef struct contato{
char nome[50];
char endereco [80];
int telefone;
}Tipo_Contato;

int main(){

    Tipo_Contato contato1;
    Tipo_Contato *p;

    strcpy(contato1.nome,"Raul Guilherme");
    strcpy(contato1.endereco,"Rua Saturno");
    contato1.telefone = 40028922;

    p=&contato1;


    printf("Nome: %s\n", p->nome);
    printf("Endereco: %s\n", p->endereco);
    printf("Telefone: %d\n", p->telefone);


}
