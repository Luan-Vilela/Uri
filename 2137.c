/**********************************************************
*	Programas da plataforma URI - https://www.urionlinejudge.com.br/judge/pt/
*	Programa nome:	2137
*	Autor: Luan Vilela Lopes	
*	Data: 01/2017
*************************************************************/


#include <stdio.h>

#define MAX 1000

void organiza(int n, int v[MAX]);

int main (){
	int n, i;
	int vetor[MAX];

//while(scanf("%d", &n)==1)  ( (n = getchar()) != EOF){
 
 	while (scanf("%d", &n) != '\n'){

 		printf("%d\n", n);
		//scanf("%d", &n);

		for(i = 0; i < n; i++)
			scanf("%d", &vetor[i]);


		organiza(n, vetor);
	

	}


}


void organiza(int n, int v[MAX]){
	int i, j, aux;
	//faz a ordenação
	for(i = n-1; i > 0; i--)
		for(j=0; j < i; j++)
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}


	for(i = 0; i < n;i++)
			printf("%04d\n", v[i]);

}