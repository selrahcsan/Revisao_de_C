// 1) Crie um programa que solicite ao usuário dois números decimais, esses números devem ser
// armazenados em variáveis do tipo decimal. Após isso, o sistema deve dar a saída das seguintes
// operações com os números informados: soma, subtração, divisão e multiplicação.
//
#include <stdio.h>

int main(){
  
  float num1 = 0;
  printf("Digite o valor do numero 1:\n/> ");
  scanf("%f", &num1);
  
  float num2 = 0;
  printf("Digite o valor do numero 2:\n/>");
  scanf("%f", &num2);

  printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
  printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
  printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
  printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);


}
