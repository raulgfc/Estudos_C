/* Exemplo struct com array
  Arquivo: pacote.c
  Date: 10/08/15 12:22

  Descri��o: Este exemplo mostra o uso de um tipo definido no arquivo header.
  S�o declaradas duas vari�veis do tipo Pac. A vari�vel p1 � constru�da por 
  meio da fun��o construtora. O conte�do armazenado em p1 � mostrado na tela
  por meio da fun��o de acesso.
*/

#include <stdlib.h>
#include "pac.h"
        
main(){
       Pac p1,p2;
       printf("\n tamanho p1 = %d \n",sizeof(p1));     // espa�o ocupado na mem�ria 
       printf("\n local de p1 na memoria = %d \n",&p1);// local reservado para p1  

       printf("\n tamanho p2 = %d \n",sizeof(p2));     // espa�o ocupado na mem�ria
       printf("\n local de p2 na memoria = %d \n",&p2);// local reservado para p2
       p1 = construirPac(11,11);
       mostrarPac(p1);
       printf("\n\n");
       system("pause");
}
