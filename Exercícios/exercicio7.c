// Escreva um programa que leia um número inteiro, calcule o dobro do número e some 1 utilizando
// incremento.

#include <stdio.h>

int main(){
  int num;
  printf("Digite um numero: \n/>");
  scanf("%d", &num);

  int dobro = num * num;
  dobro++;

  printf("O dobro de %d, +1 é : %d\n", num, dobro);
}

