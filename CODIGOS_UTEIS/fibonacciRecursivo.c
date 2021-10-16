/* Exemplo de uso da fun��o time */
/* Arquivo: fibonacciRecursivo.c
   Data: 28/08/16 15:54
   Descri��o - Este programa mostra o tempo de execu��o da fun��o recursiva que calcula o
   elemento de ordem n da sequ�ncia de Fibonacci
*/

#include <time.h> // aqui est�o as declara��es de tipos e as fun��es de 
                  // manipula��o de data e tempo

double fibonacci(double);

main(){
     double d;           // vari�vel para guardar a diferen�a entre inicio e fim
     struct tm *ptr;     // struct tm guarda os dados do calend�rio ptr � um pointer para tm
     time_t inicio, fim; // instante inicial e instante final  

       double n,termo;  // n = ordem do elemento da sequ�ncia de Fibonacci
       n = 47;          // termo = elemento de ordem n
       printf("\n       Calculo do termo de ordem %.0f \n\n",n);
     
     printf("\n Data e hora corrente: ");
     inicio = time(NULL);
     ptr = localtime(&inicio);  // para pegar o calend�rio do momento  
     printf(asctime(ptr));      // e exibir a data e hora na tela
     printf("\n Quantidade de segundos desde janeiro de 1970 = %d \n\n",inicio);     
     inicio = time(NULL);  //tempo corrente em uma vari�vel do tipo time_t
//PONTO A 
           termo = fibonacci(n);
//PONTO B  
     fim = time(NULL);

       printf("\n   f(%.0f) = %.0f  \n\n", n,termo);           

     d = difftime(fim,inicio);
     printf("\n   Tempo de execucao = %.2f segundos \n",d);

     inicio = time(NULL);
     printf("\n\n Data e hora corrente: ");
     ptr = localtime(&inicio);  // para pegar o calend�rio do momento 
     printf(asctime(ptr));      // e exibir a data e hora na tela
     printf("\n Quantidade de segundos desde janeiro de 1970 = %d \n\n",inicio);        
     printf("\n");
     system("PAUSE");
}

double fibonacci(double n){
    double f;
    if (n < 3) f = 1;
    else {
         f = fibonacci(n-1) + fibonacci(n-2); 
         }
    return f;
}
