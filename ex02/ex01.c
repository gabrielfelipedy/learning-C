#include <stdio.h>

int main() {

	int base;
	int expoente;
	int potencia = 1;

	printf("\nDigite a base: ");
	scanf("%d", &base);

	printf("\nDigite o expoente: ");
	scanf("%d", &expoente);

	for(int i = 0; i < expoente; i++) {

		potencia = potencia * base;

	}

	printf("\n\nO resultado de %d elevado a %d é %d\n\n", base, expoente, potencia);

}
