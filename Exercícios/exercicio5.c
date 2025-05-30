// Crie um programa que solicite ao usuário o comprimento em cm dos três lados de um triângulo e
// após isso indique se o triângulo é do tipo: equilátero (todos os lados iguais), escaleno (todos os lados
// diferentes) ou isósceles (quando dois lados possuem a mesma medida). Exemplo de saída do
// programa:

#include <stdio.h>
#include <stdbool.h>

void resultado(int ladoUm, int ladoDois, int ladoTres) {
    bool equilatero = (ladoUm == ladoDois) && (ladoUm == ladoTres);
    bool escaleno = (ladoUm != ladoDois) && (ladoUm != ladoTres) && (ladoDois != ladoTres);
    bool isosceles = !equilatero && !escaleno;

    if (equilatero) {
        printf("Triângulo Equilátero: true\n");
        printf("Triângulo Escaleno: false\n");
        printf("Triângulo Isósceles: false\n");
    } else if (escaleno) {
        printf("Triângulo Equilátero: false\n");
        printf("Triângulo Escaleno: true\n");
        printf("Triângulo Isósceles: false\n");
    } else if (isosceles) {
        printf("Triângulo Equilátero: false\n");
        printf("Triângulo Escaleno: false\n");
        printf("Triângulo Isósceles: true\n");
    } else {
        printf("Não é um triângulo válido\n");
    }
}


int main(){
  
  int ladoUm, ladoDois, ladoTres;

  printf("Qual o primeiro lado do triângulo:\n/>");
  scanf("%d", &ladoUm);

  printf("Qual o segundo lado do triângulo:\n/>");
  scanf("%d", &ladoDois);
  
  printf("Qual o terceiro lado do triângulo:\n/>");
  scanf("%d", &ladoTres);
 
  resultado(ladoUm, ladoDois, ladoTres);
}

