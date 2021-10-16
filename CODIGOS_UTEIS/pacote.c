/* Exemplo struct com array
  Arquivo: pacote.c
  Date: 10/08/15 12:22

  Descrição: Este exemplo mostra o uso de um tipo definido no arquivo header.
  São declaradas duas variáveis do tipo Pac. A variável p1 é construída por 
  meio da função construtora. O conteúdo armazenado em p1 é mostrado na tela
  por meio da função de acesso.
*/

#include <stdlib.h>
#include "pac.h"
        
main(){
       Pac p1,p2;
       printf("\n tamanho p1 = %d \n",sizeof(p1));     // espaço ocupado na memória 
       printf("\n local de p1 na memoria = %d \n",&p1);// local reservado para p1  

       printf("\n tamanho p2 = %d \n",sizeof(p2));     // espaço ocupado na memória
       printf("\n local de p2 na memoria = %d \n",&p2);// local reservado para p2
       p1 = construirPac(11,11);
       mostrarPac(p1);
       printf("\n\n");
       system("pause");
}
