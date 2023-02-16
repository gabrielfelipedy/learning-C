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

	int minimo;
	int maximo;

	printf("\nDigite o primeiro valor do intervalo: ");
	scanf("%d", &minimo);
	printf("Digite o ultimo valor do intervalo: ");
	scanf("%d", &maximo);

	int soma = 0;

	for(int i = minimo; i<=maximo; i++) {

		if(ehprimo(i))
			soma += i;
	}

	printf("\nA soma dos primos entre %d e %d vale %d\n", minimo, maximo, soma);
}
