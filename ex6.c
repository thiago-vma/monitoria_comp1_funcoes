
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa.

#include <stdio.h>

float calcula_imc(float peso, float altura) {

    	float imc = peso / (altura * altura);
    	return imc;
}

int main() {
    
    	float peso, altura, imc;

    	printf("Entre com o peso da pessoa (Kg): ");
    	scanf("%f", &peso);

    	printf("Entre com a altura da pessoa (m): ");
    	scanf("%f", &altura);

    	imc = calcula_imc(peso, altura);

    	printf("O IMC da pessoa é: %.2f\n", imc);

    	return 0;
}

