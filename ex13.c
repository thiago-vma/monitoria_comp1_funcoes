
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//13) Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o somatório de 1 até n: 1 + 2 + 3 + ... + n.

#include <stdio.h>

int calcula_somatorio(int num) {
    
    	int soma = 0;
    
    	for (int i = 1; i <= num; i++) {
        	
        	soma += i;
    	}
    
    return soma;
}

int main() {
    
    	int num, res;

    	printf("Entre com um número inteiro: ");
    	scanf("%d", &num);

    	if (num <= 0) {
        
        	printf("Número deve ser positivo.\n");
        	return 1;
    	}

    	res = calcula_somatorio(num);

    	printf("O somatório até %d é: %d\n", num, res);

    	return 0;
}

