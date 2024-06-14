
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//5) Escreva uma função para o cálculo do volume de uma esfera, em que π = 3.1414592 e o valor do raio r deve ser passado por parâmetro.

#include <stdio.h>

float calcula_volume_esfera(float raio) {
    
    	float volume = (4.0 / 3.0) * 3.1414592 * raio * raio * raio;
    	return volume;
}

int main() {

    	float raio, volume;

    	printf("Entre com o raio da esfera em cm: ");
    	scanf("%f", &raio);

    	volume = calcula_volume_esfera(raio);

    	printf("O volume da esfera é: %.2f cm³.\n", volume);

    	return 0;
}

