// A prefeitura de uma cidade gostaria de um software para dar entrada numa pesquisa entre
// seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja
// saber:
// a) média do salário da população;
// b) média do número de filhos;
// c) maior salário;
// d) percentual de pessoas com salário até R$100,00.
// O final da leitura de dados se dará com a entrada de um salário negativo.

#include <stdio.h>

int main(){
  int salario = 0,somaSalario = 0, filhos = 0, percentual = 0;
  int controle = 0, salarioMaior = 0, somaFilhos = 0;
  float mediaSalario = 0, percPessoasSal100 = 0, mediaFilhos = 0;
  
  do{
    printf("Digite o salário do cidadão:\n/>");
    scanf("%d", &salario);
    somaSalario += salario;

    if (salario >= salarioMaior)
      salarioMaior = salario;
    
    if (salario <= 100)
      percPessoasSal100;

    if (salario < 0)
      break;

    printf("Digite o numero de filhos: \n/>");
    scanf("%d", &filhos);
    somaFilhos += filhos;
    controle++;

  }while(salario > 0);
  
  mediaSalario = somaSalario / controle;
  percentual = (percPessoasSal100 * 100) / controle;

  printf("A média de salários da população, é de %.2f\n", mediaSalario);
  printf("O maior salário é de R$:%d\n/>", salarioMaior);
  printf("Percentual de pessoas com salário menor ou igual a 100 é %.2f.\n", percPessoasSal100);

  mediaFilhos = somaFilhos / controle;
  printf("A média de filhos é de: %.2f\n", mediaFilhos);

  return 0;
}

