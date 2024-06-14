
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//17) Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série S:
//2/4 + 5/5 + 10/6 + ... + (N² + 1)/(N + 3)

#include <stdio.h>

double calculo_serie_S(int num) {
    
    	double serie = 0.0;

    	for (int i = 1; i <= num; i++) {
        
        	serie += (double)(i * i + 1) / (i + 3);
    	}

    	return serie;
}

int main() {
    
    	int num;
    	double res;

    	printf("Entre com um número inteiro: ");
    	scanf("%d", &num);

    	if (num <= 0) {
        	
        	printf("Número deve ser positivo.\n");
        	return 1;// erro
    	}

    	res = calculo_serie_S(num);

   	printf("O resultado da série é: %.3f\n", res);

    	return 0;
}

