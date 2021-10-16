
/*
Uso de algumas funções da biblioteca stdlib.h

A função rand() está em stdlib.h e devolve um número pertencente à faixa 0..RAND_MAX.
Fazendo a divisão desse número por RAND_MAX+1 obtemos um número d tal que 0  d < 1.
Para mapear o número d no intervalo [a,b] em que a, b são inteiros, podemos fazer:

1) A multiplicação de (b-a+1) por d (d é número real maior ou igual a 0 e menor do que 1) produz como resultado um número cuja parte inteira pertence à faixa de números inteiros 0,1,2,3...b-a.

2) A soma desse número inteiro (parte inteira do resultado anterior) com o número a resulta um número pertencente à faixa de inteiros de a até b.
A função rand faz cálculos com um valor inicial para produzir o primeiro número. Em seguida, utiliza o resultado anterior para gerar o próximo número e assim por diante.
	
	k = d x (b-a+1) e 0<= d <=1 -> k pertence {0,1,2...b-a}
	g=a+ k -> g pertence [a,b]

O valor inicial utilizado é denominado semente e podemos escolher a semente por meio da função srand(int). Por exemplo, fazendo
srand((int)time(NULL));
utilizamos o relógio do sistema para definir a semente.
O código a seguir exemplifica a utilização das funções usadas
*/