#include <stdio.h>

int main() {

int n1;
int n2;
int n3;

int maior;
int menor;
int meio;

printf("\n***ORDEM CRESCENTE***\n");
printf("\nDigite o primeiro número: ");
scanf("%d", &n1);

printf("Digite o segundo número: ");
scanf("%d", &n2);

printf("Digite o terceiro número: ");
scanf("%d", &n3); 

if (n1 > n2) {

	if(n1 > n3) {

		maior = n1;

		if(n2 > n3) {
			meio = n2;
			menor = n3;
		} else {
			meio = n3;
			menor = n2;
		}
	} else {

		maior = n3;
		meio = n1;
		menor = n2;
	}

} else {

	if(n2 < n3) {
		maior = n3;
		meio = n2;
		menor = n1;

	} else {

		if(n3 < n1) {

			maior = n2;
			meio = n1;
			menor = n3;
			
		} else {

			maior = n2;
			meio = n3;
			menor = n1;
		}

	}


} 

printf("\nOs números em ordem crescente são: \n\n%d\n%d\n%d\n\n", menor, meio, maior);

}
