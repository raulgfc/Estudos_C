/* Exemplo - arquivo header
  Arquivo: pac.h
  Descrição: Este arquivo define um tipo chamado Pac.
*/

#include<stdlib.h>

typedef struct{
        int mes;
        int resto;
        int suc;
        int ant;
        int dia;
        int v7;
        unsigned int S[6];
        } Pac;

Pac construirPac(int,int);
void mostrarPac(Pac);
       
Pac construirPac(int m,int d){
    Pac Paux;
    int k,r;

    Paux.mes = m; Paux.resto = m%2; Paux.suc = m+1; Paux.ant = m-1; Paux.dia = d; Paux.v7 = 7*m;
    k = Paux.v7 + 65;
    printf("  \n  k = %d",k);
    if ((k>90)&&(k<97)){
              Paux.S[0] = 35;
//              r=k%10; 
//              Paux.S[0] = 20+2*r-1 + k;
              }
    else  if (k>122){
              Paux.S[0] = 36;
//              r = k%4; Paux.S[0] = 35 + r;
              }
          else /*Paux.S[0] = k;*/Paux.S[0] = 38;
    Paux.S[1]= Paux.mes % 10 + 48; 
    Paux.S[2]= Paux.resto + 65;    
    Paux.S[3]= Paux.suc + 97;     
    Paux.S[4]= Paux.ant + 65;     
    k = Paux.dia + 65;
    
    if ((k>90)&&(k<97)){
              r=k%10; Paux.S[5] = 20+2*r-1 + k;
              }
    else Paux.S[5] = k;     

    return Paux;
}
    

void mostrarPac(Pac pa){
       int k;
       printf("\n dados armazenados no Pacote \n");
       printf("  \n  mes = %d \n",pa.mes);
       printf("  \n  dia = %d \n",pa.dia);
       //printf("  \n  suc = %d \n",pa.suc);
       //printf("  \n  ant = %d \n",pa.ant);
       //printf("  \n  v7 = %d",pa.v7);
       printf("  \n senha = ");
       for(k=0;k<=5;k++)  printf("%c",pa.S[k]);
       printf(" \n\n");
}
