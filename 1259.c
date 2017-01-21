/**********************************************************
*	Programas da plataforma URI - https://www.urionlinejudge.com.br/judge/pt/
*	Programa nome:	1259
*	Autor: Luan Vilela Lopes
*	Data: 01/2017
*************************************************************/


#include <stdio.h>

#define MAX 100000

void organiza(int n, int v[MAX]);

int main (){
	int n, i, j, k, num;
	int vetor[MAX];

	scanf("%d", &n);
	k = 0, j = n-1;
 	for(i = 0; i < n; i++){
 		scanf("%d", &num);
			if(num % 2 == 0){
				vetor[k++] = num;
			}
			else
				vetor[j--] = num;

	}

	organiza(n, vetor);
}


void organiza(int n, int v[MAX]){
	int i, j, aux;

	//faz a ordenação
	
	for(i = n-1; i > 0; i--)
		for(j=0; j < i; j++){
			//se for par, organiza na forma crescente
			if(v[j] % 2 == 0 && v[j+1] % 2 == 0)
				if(v[j] > v[j+1]){
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;		
				}
			if(v[j] % 2 != 0 && v[j+1] % 2 != 0)
				if(v[j] < v[j+1]){
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;		
				}
			
		}

	//imprime lista
	for(i = 0; i < n;i++)
			printf("%d\n", v[i] );

}