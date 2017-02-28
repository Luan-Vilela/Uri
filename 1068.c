#include <stdio.h>
#include <string.h>

#define MAX 1001

void verifica(int n, char *p);

int main(){

	char f[MAX];
	while( scanf("%s", &f) != EOF){
		//strlen conta tamanho da string
		verifica(strlen(f), f);

	}

	return 0;
}


void verifica(int n, char *p){

	int parDir = 0, parEsq = 0;
	//percorre vetor com um ponteiro 
	while(n--){
		if(*p == '(')
			parEsq++;
		if(*p == ')'){
			parDir++;
			//faz um teste para ver se existe parênteses ) aberto primeiro que (
			if(parDir > parEsq){
				break;
			}
		}

		p++;
	}

	if(parDir == parEsq)
		printf("correct\n");
	else
		printf("incorrect\n");

}
