
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Strings

//2) Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril.

#include <stdio.h>

void retorna_mes(int mes) {
    
	switch(mes) {
    
        case 1:
            	printf("Janeiro - 31 dias\n");
            	break;
        case 2:
            	printf("Fevereiro - 28 ou 29 dias\n");
            	break;
        case 3:
            	printf("Março - 31 dias\n");
            	break;
        case 4:
            	printf("Abril - 30 dias\n");
            	break;
        case 5:
            	printf("Maio - 31 dias\n");
            	break;
        case 6:
            	printf("Junho - 30 dias\n");
            	break;
        case 7:
            	printf("Julho - 31 dias\n");
            	break;
        case 8:
            	printf("Agosto - 31 dias\n");
            	break;
        case 9:
            	printf("Setembro - 30 dias\n");
            	break;
        case 10:
            	printf("Outubro - 31 dias\n");
            	break;
        case 11:
            	printf("Novembro - 30 dias\n");
            	break;
        case 12:
            	printf("Dezembro - 31 dias\n");
            	break;
        default:
            	printf("Número inválido.");
    }
}

int main() {

	int num_mes;

    	printf("Entre com um número de 1 a 12 para saber o respectivo mês e a sua quantidade de dias: ");
    	scanf("%d", &num_mes);

    	retorna_mes(num_mes);

    	return 0;
}

