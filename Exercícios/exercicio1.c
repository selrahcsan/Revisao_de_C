// Crie um programa que solicite o nome do usuário e depois imprima 
// “Olá” precedida do nome que o usuário digitou. Exemplo do resultado esperado:
//
// Qual é o seu nome ?
// Olá Charles
//
#include <stdio.h>

int main(void){

	char nome[15];
	printf("Qual é o seu nome ?\n");
	scanf("%s", nome);
	printf("Olá %s\n", nome);

	return 0;
}


