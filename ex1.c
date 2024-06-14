
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//1)Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

#include <stdio.h>

int maior_num(int num_a, int num_b) {
    
    	if (num_a > num_b) {
        
        	return num_a;
    
    	} else {
        
        	return num_b;
    	}
}

int main() {

    	int num1, num2, verificacao;

    	printf("Entre com o primeiro número: ");
    	scanf("%d", &num1);
    	printf("Entre com o segundo número: ");
    	scanf("%d", &num2);

    	verificacao = maior_num(num1, num2);

    	printf("O maior número é: %d\n", verificacao);

    	return 0;
}

