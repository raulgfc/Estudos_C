/*   Cálculo dos elementos da sequência de Fibonacci */
/* Arquivo: SequenciaFibonacci.c
   Date: 28/08/16 14:19
   Descrição: Cálculo dos elementos da sequência de Fibonacci 1,2,2,3,5,8... por meio 
   de quatro processos diferentes.
*/

#include <stdlib.h>

double somar2termos(int, double, double);
double fib2(int);
double fibonacci2(int);
double fibonacci1(int);
main(){
       int ordem;
       double raiz,p1,p2,inv, termo;
       raiz = sqrt(5); p1 = (1+raiz)/2; p2 = (1-raiz)/2; inv = 1/raiz;       

       ordem = 40;
       printf("\nCalculo do elemento de ordem %d da sequencia de Fibonacci 1,1,2,3,5...\n\n\n",ordem);
       
       printf("Chamando a funcao fib2 ... \n \n");
       termo = fib2(ordem);
       printf(" termo =  %.0f  \n\n", termo);

       printf("Chamando a funcao fibonacci1 ...\n \n");
       termo = fibonacci1(ordem);
       printf(" termo =  %.0f  \n\n", termo);       
                  
       printf("Chamando a funcao fibonacci2 ...\n \n");
       termo = fibonacci2(ordem);
       printf(" termo =  %.0f  \n\n", termo);           
       
       printf("Usando a formula direta...\n \n"); 
      // item 5 do texto SEQUÊNCIA DE FIBONACCI - ESFORÇO COMPUTACIONAL 
       termo = inv*(pow(p1,ordem)-pow(p2,ordem));
       printf(" termo =  %.0f  \n\n", termo);   
               
       printf("\n\n");
       system("PAUSE");
       }

double fibonacci1(int n){ // item 2 do texto SEQUÊNCIA DE FIBONACCI - ESFORÇO COMPUTACIONAL 
    double f,a,b;
    int cont;
    a = 1; b = 0;
    for(cont = 1;cont<=n;cont++) {
             b = a + b;
             a = b-a;
    }
    f = b;
    return f;
}

double fibonacci2(int n){ // item 3 do texto SEQUÊNCIA DE FIBONACCI - ESFORÇO COMPUTACIONAL 
    double f,a,b,c;
    int cont;
    b = 1; c = 0;
    for(cont = 1;cont<=n;cont++) {
             a = b;
             b = c;
             c = a + b;
    }
    f = c;
    return f;
}

double tentarSomar(int n, double t1, double t2){
    double s,c;
//    printf("\ntentar somar: \ndois primeiros = %.0f %.0f \n \n",t1, t2);    
    if (n == 1) s = t1;
    else if (n == 2) s = t2;
         else { 
              c = t1+t2; 
//              printf("\nproxima chamada de tentarSomar \ndois anteriores = %.0f %.0f \n \n",t2, c);
              s = tentarSomar(n-1,t2,c);
              }
    return s;
}

double fib2(int n){  // a função fib2 chama uma outra função que é recursiva
    double f;
    f = tentarSomar(n,1,1);
    return f;
}
