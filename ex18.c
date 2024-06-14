
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//18) Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule o valor do seno desse ângulo usando a sua respectiva série de Taylor.
// sin(x)=∑n=05​(2n+1)!(−1)n⋅x2n+1​

#include <stdio.h>
#include <math.h>


double mudanca_unidade(double graus) {

    	return graus * M_PI / 180.0;

}

long long int fatorial(int num) {

    	long long int fat = 1;
    	
    	for (int i = 1; i <= num; i++) {
        
        	fat *= i;
    	}
    	
    	return fat;
}


double calculo_seno(double graus) { //função que calcula o seno

    	double rad = mudanca_unidade(graus);
    	double seno = 0.0;

    	for (int n = 0; n <= 5; n++) {
        
        	double aux = pow(-1, n) * pow(rad, 2 * n + 1) / fatorial(2 * n + 1);
        	seno += aux;
    	}

    	return seno;
}

int main() {

    	double graus, res;

    	printf("Entre com o valor do ângulo (graus): ");
    	scanf("%lf", &graus);

    	res = calculo_seno(graus);

    printf("O valor do seno de %.2f graus é: %.6f\n", graus, res);

    return 0;
}

