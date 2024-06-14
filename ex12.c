
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//12) Escreva uma função que receba um número inteiro positivo e retorne o maior fator primo desse número.

#include <stdio.h>

int maior_fator(int num) {

    	int maior_primo = -1; //adotando valor inicial

    	while (num % 2 == 0) {
        
        	maior_primo = 2;
        	num /= 2; //fico dividindo por 2 indefinidamente até que ele não seja mais (condição do while)
    	}

    	for (int i = 3; i * i <= num; i += 2) {
        
        	while (num % i == 0) {
            		
            		maior_primo = i;
            		num /= i; //faço a mesma lógica do laço em cima, mas agora só divido por números ímpares
        	}
    	}

    	if (num > 2) {
    	
        	maior_primo = num;
    	}

    	return maior_primo;
}

int main() {

    	int num, resultado;

    	printf("Entre com um número inteiro positivo: ");
    	scanf("%d", &num);

    	if (num <= 0) {
        
        	printf("Número inválido\n");
        	return 1; //erro
    	}

    	resultado = maior_fator(num);

    	printf("O maior fator primo é: %d\n", resultado);

    return 0;
}

