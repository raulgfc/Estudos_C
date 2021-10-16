int diasNoMes(int m, int a);

#define TRUE 1
#define FALSE 0

void entradata(int d[], int m[], int a[]);
int diasNoMes(int m, int a);
int diasPassados(int d, int m, int a);

void main (){
	int dia[1], mes[1], ano[1];


	printf("Digite o dia do seu nascimento\n");
	entradata(dia,mes,ano);
    diasPassados(dia,mes,ano);



}

void entradata(int d[], int m[], int a[]) {

	int valida = FALSE;

		do {
			 printf("Entre com o dia: ");
			 scanf("%d", &d[0]);
			 printf("Entre com o mes: ");
			 scanf("%d", &m[0]);
			  printf("Entre com o ano: ");
			 scanf("%d", &a[0]);

			 if((m[0]>0) && (m[0]<13))
			 	if((a[0]>=1000) && (a[0]<=9999));
				 if((d[0]>=1));
					valida = TRUE;
				if(!valida) printf("\nDATA NAO VALIDA");
		}while(!valida);
}


int diasNoMes(int m, int a){
    int qdias;
    switch(m){
    case 2:
        if( (a%4==0 && a%100!=0) || (a%400==0) )
            qdias=29;
        else
            qdias=28;
    break;
    case 4: case 6: case 9:
    case 11: qdias=30;
    break;

    default: qdias=31;
 }
 return(qdias);
}

//funcao para dias passados
int diasPassados(int d, int m, int a){ //parametros da funcao
    int qdias, mesvar; //variavel local
    qdias = diasNoMes(m,a) == d+1;
    for (mesvar=m+1; mesvar <13; mesvar++){

        qdias = qdias + diasNoMes(mesvar, a);
    }
printf("\nDias passados: %d\n", qdias);
return(qdias);

}





