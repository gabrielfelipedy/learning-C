#include <stdio.h>

int main() {

int n1;
int fatorial = 1;

printf("\n***FATORIAL***\n");
printf("\nDigite o número que quer calcular: ");
scanf("%d", &n1);

while(n1 > 1) {

	fatorial = fatorial * (n1 * (n1 - 1));
	n1 = n1 - 2;
}

printf("\nO fatorial do número escolhido vale %d\n\n", fatorial);

}
