
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Funções

//19) Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule o valor do cosseno desse ângulo usando a sua respectiva série de Taylor.
//cos(x)=∑n=05​(2n)!(−1)n⋅x2n​

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


double calculo_cosseno(double graus) {//função que calcula o cosseno
    
    	double rad = mudanca_unidade(graus);
    	double cos = 0.0;

    	for (int n = 0; n <= 5; n++) {
        
        	double aux = pow(-1, n) * pow(rad, 2 * n) / fatorial(2 * n);
        	cos += aux;
    	}

    	return cos;
}

int main() {
    
    	double graus, res;

    	printf("Entre com o valor do ângulo (graus): ");
    	scanf("%lf", &graus);

    	res = calculo_cosseno(graus);

    	printf("O valor do cosseno é: %.3f\n", res);

    	return 0;
}

