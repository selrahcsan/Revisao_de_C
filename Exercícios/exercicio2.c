// Solicite ao usuário uma fruta, sua cor e uma característica, com essas informações o sistema
// deve dar a saída de uma frase no seguinte formato: “a é uma fruta b e c”, sendo que a é o
// nome da fruta, b a cor e c sua característica. Veja alguns exemplos:
// a. Dado que o usuário deu de entrada a fruta “banana”, cor “amarela” e a característica
// “doce” o algoritmo deverá dar como saída a seguinte frase “Banana é uma fruta amarela e
// doce”;
// b. Dado que o usuário deu de entrada a fruta “limão”, cor “verde” e a característica “ácido” o
// algoritmo deverá dar como saída a seguinte frase “Limão é uma fruta verde e ácida”;
// 3)
// Para realizar a atividade você deve utilizar variáveis do tipo “string” e a frase deve ser
// montada dinamicamente conforme as entradas do usuário, de forma que qualquer fruta,
// cor e característica seja possível de ser informada.
//

#include <stdio.h>

int main(){
  char nomeUsuario[16];
  char nomeFruta[16];
  char corFruta[6];
  char característicaFruta[100];

  printf("Olá, qual o seu nome?\n/>");
  scanf("%s", nomeUsuario);

  printf("%s, escolha uma fruta:\n/>", nomeUsuario);
  scanf("%s", nomeFruta);

  printf("%s, qual a cor da fruta %s?\n/>", nomeUsuario, nomeFruta);
  scanf("%s", corFruta);

  printf("%s, qual a característica dessa fruta %s?\n/>", nomeUsuario, nomeFruta);
  scanf("%s", característicaFruta);

  printf("%s, a %s, é uma fruta, %s e %s\n", nomeUsuario, nomeFruta, corFruta, característicaFruta);
  return 0;

  }
