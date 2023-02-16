#include <stdio.h>

int ehprimo(int numero) {

	int divisores = 0;

	for(int i = 1; i <= numero; i++) {

		if (numero % i == 0) {
			divisores++;
		}

	}

	if(divisores == 2) {
		return 1;
	}

	return 0;
}

int main() {

	int numero;
	printf("\nType a number: ");
	scanf("%d", &numero);

	printf("\nO número%s é primo\n", (!ehprimo(numero)?" não":""));
}
