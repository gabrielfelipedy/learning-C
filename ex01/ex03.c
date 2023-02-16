#include <stdio.h>

int main() {

int number;

printf("\n***TABUADA***\n");
printf("\nEscolha o número que voce quer saber a tabuada: ");
scanf("%d", &number);

printf("\n\nA tabuada do %d é: \n\n", number);

for(int i = 1; i <=10; i++) {

	printf("%d x %d = %d \n", i, number, i * number);

}

}
