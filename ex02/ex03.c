#include <stdio.h>

int main() {

	int qtde;
	printf("\nDigite a quantidade de números analisados: ");
	scanf("%d", &qtde);

	int soma = 0;

	for(int i = 1; i <= qtde; i++) {

		if(i % 2 == 0) {
			soma = soma + i;
		}

	}

	printf("\nA soma dos pares até %d é %d\n", qtde, soma);


}
