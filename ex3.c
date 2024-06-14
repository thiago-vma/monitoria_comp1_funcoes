
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//3) Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

float converte_para_celsius(float temp_f) {
    
	float temp_c = (temp_f - 32.0) * (5.0 / 9.0);    
	return temp_c;
}

int main() {

	float T_f, T_c;

    	printf("Entre com a temperatura em graus Fahrenheit: ");
    	scanf("%f", &T_f);

    	T_c = converte_para_celsius(T_f);

    	printf("A temperatura em graus Celsius é: %.2f\n", T_c);

    	return 0;
}

