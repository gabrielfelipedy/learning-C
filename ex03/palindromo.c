#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "palindromo.h"

string copia_palavra(string palavra) {

	string copia = malloc(sizeof(palavra));
	strcpy(copia, palavra);

	for(int i = 0; i < strlen(palavra); i++) {


        	copia[ strlen(copia) - 1 - i] = palavra[i];
	}

	free(copia);

	return copia;
}

bool is_palindromo(string palavra, string palavrareversa) {

	return
		(*palavra == *palavrareversa);
}

int main() {


string frase = "eva asse essa ave";
string copia = copia_palavra(frase);

printf("\nA frase %s ao contrario é %s\n", frase, copia);

if(is_palindromo(frase, copia)) {

	printf("\nÉ um palindromo\n");

} else {

	printf("\nNão é palindromo\n");
}
}
