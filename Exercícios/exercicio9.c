// Modifique o algoritmo anterior, de maneira que o usuário também informe o início e o fim da
// tabuada. Por exemplo: usuário solicitando a tabuada do número 6, com início em 5 e fim em 8.
// 6 x 5 = 30
// 6 x 6 = 36
// 6 x 7 = 42
// 6 x 8 = 48
//
//

#include <stdio.h>

int main(){
  int num;
  
  printf("Digite um numero: ");
  scanf("%d", &num);

  int inicio, fim;

  printf("Digite o inicio da tabuada\n/>");
  scanf("%d", &inicio);

  printf("Digite o fim da tabuada\n/>");
  scanf("%d", &fim);

  for (int i = inicio; i <= fim; i++)
    printf("%d X %d = %d\n", num, i, num * i);

  return 0;

}



