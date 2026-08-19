/*
	Name: SomaNumeros.cpp
	Author: Rafael A. Queiroz
	Date: 19/08/26 09:56
	Description: Programa para somar dois numeros por meio de uma função.
*/

#include <stdio.h>
#include <locale.h>

//Sessão de prototipação de funções
int somar(int a, int b);

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, soma;
	
	a = b = soma = 0;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	soma = somar(a, b);
	
	printf("\nA soma de %d + %d é igual a %d", a, b, soma);
		
} //fim do programa

// Função para realizar a soma entre dois números inteiros
int somar(int a, int b) {
	
	int result = 0;
	result = a + b;
	return result;
			
}
