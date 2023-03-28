//Exercício 6:
#include <stdio.h>

int main(){
  float salario, reajuste, novosalario;

  printf("\nQual o salário do funcionário?\t");
  scanf("%f", &salario);

  printf("\nQual o valor em porcentagem do reajuste?\t");
  scanf("%f", &reajuste);

  novosalario = salario + (reajuste*salario);
  printf("\nO novo valor do salário será %.2f\t", novosalario);
  
  }
