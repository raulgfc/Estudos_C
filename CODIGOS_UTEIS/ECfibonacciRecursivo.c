/* ESFORÇO COMPUTACIONAL FIBONACCI RECURSIVO */
/* Arquivo: ECfibonacciRecursivo.c
   Data: 28/08/16 15:54
   Descrição - Este programa determina o esforço computacional do algoritmo de Fibonacci Recursivo
*/

double fibonacciEC(int);

main(){
       int n,j;
       double termo;  // n = ordem do elemento da sequência de Fibonacci
       n = 5;         // termo = elemento de ordem n
       printf("\n       Calculo do termo de ordem %d \n\n",n);
       termo = fibonacciEC(n);
       printf("\n   f(%d) = %.0f  \n\n", n,termo);           

//       for(j=50;j<=51;j++){
//                          termo = fibonacciEC(j);
//                          printf("\n   f(%d) = %.0f  \n\n", j,termo);           
//       }

       printf("\n");
       system("PAUSE");
}

double fibonacciEC(int n){
    double f,a,b,c;
    int k;
    if (n < 3) f = 0;
    else {
           a = 0; b = 0;
           for(k=3;k<=n;k++){
                             c = a + b+3;
                             a = b; b = c;
                             }
         }
    f = c;
    return f;
}
