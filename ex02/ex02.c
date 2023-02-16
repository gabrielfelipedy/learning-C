#include <stdio.h>

int main() {

	int numero;
	printf("\nQual tabuada voce quer escrever? >>> ");
	scanf("%d", &numero);

	FILE* f;
	f = fopen("ex02.txt", "a");

	fprintf(f, "Tabuada do %d\n", numero);

	for (int i = 1; i <= 20; i++) {

		fprintf(f, "\n%d x %d = %d", numero, i, numero * i);

	}

	fprintf(f, "\n\n");

	fclose(f);
}
