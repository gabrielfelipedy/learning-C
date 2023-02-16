#include <stdio.h>

int main() {

int number = 1;
int number2 = 2;
int soma;
int result = 0;

while(number2 <= 100) {

	soma = number + number2;
	result = result + soma;
	number = number + 2;
	number2 = number2 + 2;

	printf("\n%d", result);
}

printf("\nA soma de 1 ate 100 vale %d!\n", result);

}
