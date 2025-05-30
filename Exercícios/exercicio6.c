// Escreva um programa que leia a idade de uma pessoa e deverá ser
// exibido na tela, se esta pessoa é maior ou menor de idade (considerar 18 anos para
// maior idade). Considere o exemplo:

#include <stdio.h>

int main(){
  int idade;
  printf("Qual a sua idade ?\n/>");
  scanf("%d", &idade);

  const char* resultado = (idade >= 18) ? "true" : "false";
  printf("Maior de Idade: %s\n", resultado);

  return 0;

}
