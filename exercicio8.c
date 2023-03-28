//Exercício 8:
#include <stdio.h>

int main(){
  float salario, comissao, ncarros, venda, total;

  printf("\nQual o salário fixo do vendedor?\t");
  scanf("%f", &salario);

  printf("\nQuantos carros foram vendidos neste mês?\t");
  scanf("%f", &ncarros);

  printf("\nQual o valor da comissão por carro venddido?\t");
  scanf("%f", &comissao);

  printf("\nQuanto foi ganho em vendas de carro pelo respectivo funcionário no último mês?\t");
  scanf("%f", &venda);

  total = salario + (ncarros*comissao) + (0.05*venda);
  printf("O salário total será %.2f", total);
  
  }