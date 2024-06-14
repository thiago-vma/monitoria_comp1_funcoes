
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//11) Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule e retorne o resultado de x^y para o programa principal. Não use nenhuma função pronta para isso.

#include <stdio.h>

int calcula_potencia(int base, int expoente) {
    
    	int resultado = 1; //assim garanto que a primeira multiplicação no laço for será a própria base
    	
    	for (int i = 0; i < expoente; i++) {
        
        	resultado *= base; // 1 = 1 * base => base (Primeiro laço)
    	}
    	
    	return resultado;
}

int main() {
    
    	int x, y, resultado;

    	printf("Entre com o valor de x: ");
    	scanf("%d", &x);
	printf("Entre com o valor de y: ");
    	scanf("%d", &y);
    	
    	resultado = calcula_potencia(x, y);

    	printf("O resultado é: %d\n", resultado);

    return 0;
}

