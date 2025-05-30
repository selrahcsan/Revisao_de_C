// Crie um algoritmo que, dado um número informado pelo usuário, imprima a tabuada dele de 1 a 10.
// Use o formato de apresentação (considerando que o usuário informou o número 5:
// 5 X 1 = 5
// 5 X 2 = 10
// 5 X 3 = 15
// .....

#include <stdio.h>

int main(){
  int num;
  
  printf("Digite um numero: ");
  scanf("%d", &num);
  
for (int i = 0; i <= 10; i++)
    printf("%d X %d = %d\n", num, i, num * i);
  
  return 0;
}
