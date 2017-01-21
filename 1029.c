/**********************************************************
*	Programas da plataforma URI - https://www.urionlinejudge.com.br/judge/pt/
*	Programa nome:	1029
*	Autor: Luan Vilela Lopes	
*	Data: 01/2017
*************************************************************/

#include <stdio.h>

//variavel global
int call;

int main(){
	int n, num;

	//recebe quantas vezes o programa vai executar
	scanf("%d", &n);

	while(n--){
		scanf("%d", &num);
		//zera variavel global
		call = 0;
		//fib(n) = num_calls calls = result
		printf("fib(%d) = %d calls = %d\n", num, call,fibonacciChamadas(num) );
	}
}

// executa a contagem fibonacci
int fibonacciChamadas(int n){
	switch(n){
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		default:
			call +=2;
			return fibonacciChamadas(n-1) + fibonacciChamadas(n-2);  
	}
}