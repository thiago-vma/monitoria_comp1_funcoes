
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//14) Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o seu fatorial n!: n! = n * (n – 1) * (n – 2) * ... * 1.

#include <stdio.h>

float calcula_fatorial(int num) {
    
    	float fatorial = 1; //set valor inicial 1 do fatorial
    	
    	for (int i = 1; i <= num; i++) {
        
        	fatorial *= i;
    	}
    	
    	return fatorial;
}

int main() {
    
    	int num;
    	float res;

    	printf("Entre com um número inteiro: ");
    	scanf("%d", &num);

    	if (num < 0) {
        
        	printf("Número deve ser positivo.\n");
        	return 1; //erro
    	}

    	res = calcula_fatorial(num);

    	printf("O fatorial de %d é: %.2f\n", num, res);

    	return 0;
}

