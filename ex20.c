
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//20) Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183, usando a série a seguir:
//e = 1/0! + 1/1! + 1/2! + 1/3! + ... + 1/N!

#include <stdio.h>

long long int fatorial(int num) {
    
    	long long int fat = 1;
    	
    	for (int i = 1; i <= num; i++) {
        
        	fat *= i;
    	}
    	
    	return fat;
}


double calculo_e(int termos) {
    
    	double e = 0.0;

    	for (int n = 0; n <= termos; n++) {
        
        	e += 1.0 / fatorial(n);
    	}

    	return e;
}

int main() {
    
    	int termos;
    	double res;

    	printf("Entre com o número de termos para calcular e: ");
    	scanf("%d", &termos);

    	if (termos < 0) {
        
        	printf("O número deve ser positivo.\n");
        	return 1;// erro
    	}

    	res = calculo_e(termos);

    	printf("O valor de e é: %.8f\n", res);

    	return 0;
}

