// Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o
// resultado.
//
#include <stdio.h>

int main(){
  
  int qtdaValores, maiorNumero = 0, menorNumero = 0, valor = 0;
  printf("Digite a quantidade de valores: <0> para o valor padrão (50)\n");
  scanf("%d", &qtdaValores);

  if (qtdaValores == 0)
    qtdaValores = 50;
  
  for(int i=0; i <= qtdaValores; i++){
    int valor;
    printf("Digite o [%d°] numero:\n/>");
    scanf("%d", &valor);

   if ((maiorNumero == 0 && i == 0) || (valor > maiorNumero))
      maiorNumero = valor;

   if ((menorNumero == 0 && i == 0) || (valor < menorNumero))
      menorNumero = valor;
  }

  printf("O maior número é : %d\n", maiorNumero);
  printf("O menor número é : %d\n", menorNumero);
}
