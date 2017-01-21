/**********************************************************
*	Programas da plataforma URI - https://www.urionlinejudge.com.br/judge/pt/
*	Programa nome:	1548
*	Autor: Luan Vilela Lopes	
*	Data: 01/2017
*************************************************************/

#include <stdio.h>

#define MAX 1000

void organiza(int n, int v[MAX]);

int main (){
	int n, m, i;
	int vetor[MAX];
	scanf("%d", &n);

	while(n--){
		
		scanf("%d", &m);
		for(i = 0; i < m; i++)
			scanf("%d", &vetor[i]);

		organiza(m, vetor);

	}

}


void organiza(int n, int v[MAX]){
	int i, j, aux, count = 0;
	int vetorCopia[MAX];
	//cópia o v[MAX]
	for(i = 0; i < n; i++)
		vetorCopia[i] = v[i];
	/faz a ordenação
	for(i = n-1; i > 0; i--)
		for(j=0; j < i; j++)
			if(v[j] < v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}


	for(i = 0; i < n;i++)
		if(vetorCopia[i] == v[i])
			count++;
	
	printf("%d\n", count);
	
}