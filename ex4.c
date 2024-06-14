//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro.

#include <stdio.h>

float calcula_volume_cilindro(float altura, float raio) {
    
    	float volume = 3.1414592 * raio * raio * altura;
    	return volume;
}

int main() {
    
    	float altura, raio, volume;

    	printf("Entre com a altura do cilindro em cm: ");
    	scanf("%f", &altura);

    	printf("Entre com o raio do cilindro em cm: ");
    	scanf("%f", &raio);

    	volume = calcula_volume_cilindro(altura, raio);

    	printf("O volume do cilindro é: %.2f cm³.\n", volume);

    return 0;
}

