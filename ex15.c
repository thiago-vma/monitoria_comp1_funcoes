
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//15) Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que usamos n = 5:
//!
//!!
//!!!
//!!!!
//!!!!!

#include <stdio.h>

void print_exclamacoes(int num) {
    
    	for (int i = 1; i <= num; i++) {
        	for (int j = 1; j <= i; j++) {
            	
            		printf("!");
        	
        	}
        	
        	printf("\n");
    	}
}

int main() {
    
    	int num;

    	printf("Entre com um número inteiro: ");
    	scanf("%d", &num);

    	if (num <= 0) {
        
        	printf("Número deve ser positivo.\n");
        	return 1; //erro
    	}

    	print_exclamacoes(num);

    	return 0;
}

