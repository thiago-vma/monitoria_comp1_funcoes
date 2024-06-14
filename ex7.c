
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//7) Elabore uma função que receba três números inteiros como parâmetro, representando horas, minutos e segundos. A função deve retornar esse horário convertido em segundos.

#include <stdio.h>

int converte_para_segundos(int horas, int minutos, int segundos) {
    
    	int somatorio_segundos = (horas * 3600) + (minutos * 60) + segundos;
    	return somatorio_segundos;
    
}

int main() {

    	int horas, minutos, segundos, somatorio_segundos;

    	printf("Entre com as horas: ");
    	scanf("%d", &horas);
    	printf("Entre com os minutos: ");
    	scanf("%d", &minutos);
    	printf("Entre com os segundos: ");
    	scanf("%d", &segundos);
	
    	somatorio_segundos = converte_para_segundos(horas, minutos, segundos);

    	printf("O horário convertido em segundos é: %d segundos\n", somatorio_segundos);

    	return 0;
}

