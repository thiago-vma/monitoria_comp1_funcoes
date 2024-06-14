
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//9) Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada para o programa principal.

#include <stdio.h>

float calcula_media(float n1, float n2, float n3, char tipo_media) {

    	float media;

    	if (tipo_media == 'A' || tipo_media == 'a') {
        
        	media = (n1 + n2 + n3) / 3;
    	} else if (tipo_media == 'P' || tipo_media == 'p') {
        
        	media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    	
    	} else {
        
        	printf("Tipo inválido.\n");
        	return -1; //erro
    }

    return media;
}

int main() {
    	
    	float nota1, nota2, nota3, media;
    	char tipo;

    	printf("Entre com a primeira nota: ");
    	scanf("%f", &nota1);
    	printf("Entre com a segunda nota: ");
    	scanf("%f", &nota2);
    	printf("Entre com a terceira nota: ");
    	scanf("%f", &nota3);

    	printf("Entre com o tipo de média ('A' -> aritmética, 'P' -> ponderada): ");
    	scanf(" %c", &tipo);

    	media = calcula_media(nota1, nota2, nota3, tipo);

    	if (media != -1) { //pra saber se não deu erro na função de cima
        
        	printf("A média é: %.2f\n", media);
    	}

    	return 0;
}

