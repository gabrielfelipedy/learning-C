#include <stdio.h>

int main() {

int n1;
int n2;
int operation;
int result;

printf("\n***CALCULADORA***\n");

printf("\nEscolha o primeiro número: ");
scanf("%d", &n1);
printf("\nEscolha o segundo número: ");
scanf("%d", &n2);
printf("\nEscolha a operacao: \n(1)Adicao (2)Subtracao (3)Mutiplicacao (4)Divisao: ");
scanf("%d", &operation);

if (operation == 1) {

	result = n1 + n2;

} else if(operation == 2) {

	result = n1 - n2;

} else if(operation == 3) {

	result = n1 * n2;

} else if(operation == 4) {

	result = n1 / n2;

} else {
	return 0;
}

printf("\nO valor da operacao é %d\n", result);

}
