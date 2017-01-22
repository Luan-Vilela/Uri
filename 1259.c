/**********************************************************
*	Programas da plataforma URI - https://www.urionlinejudge.com.br/judge/pt/
*	Programa nome:	1259
*	Autor: Luan Vilela Lopes
*	Data: 01/2017
*************************************************************/


#include <stdio.h>

#define MAX 1000

void organiza(int n, int v[MAX]);

int main (){
	int n, i;
	int vetor[MAX];

	scanf("%d", &n);

 	for(i = 0; i < n; i++)
			scanf("%d", &vetor[i]);

	organiza(n, vetor);


}


void organiza(int n, int v[MAX]){
	int i, j, aux;
	int vPar[MAX];
	int vImpar[MAX];

	//faz a ordenação
	for(i = n-1; i > 0; i--)
		for(j=0; j < i; j++)
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}

	//divide em par e impar
	//par crescente
	//j marca o inicio
	i = 0, j = 0;
	while(i < n){
		if(v[i] % 2 == 0){
			vPar[j] = v[i];
			j++;
		}
		i++;
	}
	//divide em par e impar
	//impar descrente
	//j marca o fim
	i = 0, j = n;
	while(i < n){
		if(v[i] % 2 != 0){
			j--;
			vPar[j] = v[i];
		}
		i++;
	}

	//imprime lista
	for(i = 0; i < n;i++)
			printf("%d\n", vPar[i] + vImpar[i]);

}