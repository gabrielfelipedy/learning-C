#include <stdio.h>

#define TAMANHO_ARRAY 100

int somaarray(int* array) {

	int soma = 0;

	for(int i = 0; i < TAMANHO_ARRAY; i++) {

		soma += array[i];

	}
	return soma;
}

int main() {

	int numeros[TAMANHO_ARRAY];

	for(int i = 0; i < TAMANHO_ARRAY; i++) {
		numeros[i] = i + 1;
	}

	printf("\nA soma vale %d\n", somaarray(numeros));
}
