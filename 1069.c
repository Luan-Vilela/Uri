/*******************************************************
	URI - https://www.urionlinejudge.com.br/
	Problema 1069 - Mineração de diamantes

	Autor: Luan Vilela Lopes
	Acadêmico: Universidade Federal do Mato Grosso do Sul
	Curso Ciência da Computação 2016 - FACOM


	Problema resolvido utilizando ponteiros.

******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1001

int minerandoPontaDireita(char *p);
int minerandoPontaEsquerda(char *q, char *p);

int main(){
	
	char diamante[MAX];
	int n, aux;
	scanf("%d", &n);
	while(n--){
		//recebe dados daescavação
		//ex:	<..<..>.<<<>>
		scanf("%s", diamante);
		printf("%d\n", minerandoPontaDireita(diamante) );	//imprime quantos dimas achou
	}

}

/**********************************************
	Função que verifica se existe algum >
	pois o diamante é formado por '<' e '>'
***********************************************/
int minerandoPontaDireita(char *p){
	//cria uma variável static para contar os diamantes
	static int diamantesEncontrados = 0;
	int aux;
	char *q;
	//copia o ponteiro original... para usar a referência da memória
	q = p;
	while(*q != '\0'){
		if(*q == '>'){
			*q = '.';									//caso encontre > substitui por . que é areia
				if(minerandoPontaEsquerda(q, p) == 1)	//caso retorne 1 existe < antes para criar diamante
					diamantesEncontrados++;
		}
		q++;
	}
	//salva valor na variavel auxiliar antes de zerar 
	// variável estática.
	aux = diamantesEncontrados;
	diamantesEncontrados = 0;
	return aux;

}

int minerandoPontaEsquerda(char *q, char *p){
	char *qq;
	//copia q para usar referência da memória e percorrer ao contrário/
	qq = q;	
	while(qq != p){
		qq--;
		//se existir < vai retornar 1 que é o diamante
		if(*qq == '<'){		
			*qq = '.';
			return 1;
		}
		
	}
	return 0;

}
