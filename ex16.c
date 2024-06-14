
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//16) Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:
// *
// **
// ***
// ****
// ***
// **
// *

#include <stdio.h>

void print_triangulo(int num) {
   
    	for (int i = 1; i <= num; i++) { //parte que aumenta o triângulo
        	for (int j = 1; j <= i; j++) {
            
            		printf("*");
        	}
        	
        	printf("\n");
    	}
    
    	for (int i = num-1; i >= 1; i--) { //parte que decresce o triângulo
        	for (int j = 1; j <= i; j++) {
            		
            		printf("*");
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

    	print_triangulo(num);

    	return 0;
}

