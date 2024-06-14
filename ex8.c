
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//8) Elabore uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Exemplos: 1, 4, 9.

#include <stdio.h>
#include <math.h>

int verifica_quadrado_perfeito(int num) {
    
    	if (num < 0) {
    
        	return 0; // não posso trabalhar com números negativos
    	}
    
    	int raiz = (int)sqrt(num);
    
    	if (raiz * raiz == num) {
        
        	return 1; // É um quadrado perfeito
    	
    	} else {
        	
        	return 0; // Não é um quadrado perfeito
    	}
}

int main() {

    	int num_original = 0;

    	printf("Entre com um número inteiro: ");
    	scanf("%d", &num_original);

    	if (verifica_quadrado_perfeito(num_original)) {
        
        	printf("O número %d é um quadrado perfeito.\n", num_original);
    
    	} else {
        
        	printf("O número %d não é um quadrado perfeito.\n", num_original);
    	}

    	return 0;
}

