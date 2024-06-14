
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//10) Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a operação que se deseja efetuar com os números. Assim, se o símbolo for “+”, deverá ser realizada uma adição, se for “−”, uma subtração, se for “/”, uma divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da operação para o programa principal.

#include <stdio.h>

float calcula_operacao(float num1, float num2, char operacao) {
    
    	float resultado;

    	switch (operacao) {
        	case '+':
            	resultado = num1 + num2;
            	break;
        case '-':
            	resultado = num1 - num2;
            	break;
        case '*':
            	resultado = num1 * num2;
            	break;
        case '/':
            	if (num2 != 0) {
                	resultado = num1 / num2;
            	} else {
                	printf("Erro: divisão por zero.\n");
                	return -1; //erro
            	}
            	break;
        default:
            	printf("Operação inválida.\n");
            	return -1; //erro
    	}

    	return resultado;
}

int main() {
    
    	float num1, num2, resultado;
    	char operacao;

    	printf("Entre com o primeiro número: ");
    	scanf("%f", &num1);
    	printf("Entre com o segundo número: ");
    	scanf("%f", &num2);
    	printf("Qual operação deseja fazer? (+, -, *, /) ");
    	scanf(" %c", &operacao);

    	resultado = calcula_operacao(num1, num2, operacao);

    	if (resultado != -1) {
        	printf("O resultadoé: %.2f\n", resultado);
    	}

    return 0;
}

