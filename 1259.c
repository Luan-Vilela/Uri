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
	int n, i;
	int vetor[MAX];

	scanf("%d", &n);

 	for(i = 0; i < n; i++)
			scanf("%d", &vetor[i]);

	organiza(n, vetor);
}


void organiza(int n, int v[MAX]){
	int i, j, aux;
	int vAux[MAX];

	//faz a ordenação
	for(i = n-1; i > 0; i--)
		for(j=0; j < i; j++){
			if(v[j] > v[j+1]){
				if(v[j+1] %2 == 0){
					vAux[j] =
				}
			}
		}
/*
	//divide em par e impar
	//par crescente
	//j marca o inicio
	//aux marca o fim
	i = 0, j = 0, aux = n;
	while(i < n){
		if(v[i] % 2 == 0){
			vAux[j] = v[i];
			j++;
		}
		else{
			aux--;
			vAux[aux] = v[i];
		}
		i++;
	}*/
	//imprime lista
	for(i = 0; i < n;i++)
			printf("%d\n", v[i] );

}