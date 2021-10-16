/* Exemplo teste de um arquivo header
  Arquivo: testeItem_meu.c
  Date: 14/08/11 09:06
  Descrição: Este exemplo mostra um programa que serve para testar um arquivo header.
*/

# include <stdlib.h>
# include "tipoItem_meu.h"
        
main(){
       TipoItem p1,p2;
       p1 = criarNovo(68,1234.8);
       p2 = criarNovo(11,100.5);
       mostrarItem(p1);
       mostrarItem(p2);
       printf("\n\n");
       system("pause");
}
