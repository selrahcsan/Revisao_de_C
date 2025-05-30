// 2) Crie um programa que calcule a área de um triângulo equilátero. A medida dos lados deve ser
// informada pelo usuário.
//
#include <stdio.h>

int main(){
  
  printf("Programa Calcula a Base de um triângulo:\n");

  float base;
  printf("Qual o valor da base?\n/>");
  scanf("%f", &base);

  float altura;
  printf("Qual o valor da altura?\n/>");
  scanf("%f", &altura);

  float resultado = (base * altura) / 2;

  printf("O resultado é :%.1f", resultado);

}
