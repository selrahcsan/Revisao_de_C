// Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida,
// mostrar na tela o maior número do vetor. Mostrar também a posição do maior elemento.
// Caso tenha outro igual, informe primeiro.
// Exemplo:
// Entrada
// Informe o tamanho de N: 6
// Informe os números do vetor:
// 8 4 10 11 13 14
// Saída
// O maior valor é: 14
// Sua posição no vetor é: 5

#include <stdio.h>
#include <stdlib.h> // Para usar malloc e free

int main() {
    int tamanhoDeN, maior = 0, posicao = 0;

    printf("Informe o tamanho de N:\n/> ");
    scanf("%d", &tamanhoDeN);

    int *n = (int *)malloc(tamanhoDeN * sizeof(int));
    if (n == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Entrada de dados
    for (int i = 0; i < tamanhoDeN; i++) {
        printf("Informe o numero da posição [%d]: \n/> ", i);
        scanf("%d", &n[i]);

         if((maior == 0 && i == 0) || n[i] > maior){
           maior = n[i];
           posicao = i;
        }
    }
    
    printf ("O maior valor é: %d\nA posição é: %d\n", maior, posicao);
    free(n);

    return 0;
}
