//Exercício 7:
#include <stdio.h>

int main(){
  float fabrica, distribuidor, impostos, total;

  printf("\nQual o custo de fábrica do automóvel?\t");
  scanf("%f", &fabrica);

  distribuidor = fabrica*0.28;
  impostos = fabrica*0.45;
  total = fabrica + distribuidor + impostos;
  
  printf("\nO valor de venda final do carro será de %.2f.\t", total);
  }