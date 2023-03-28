//Exercício: 4
#include <stdio.h>
int main() {
  float base, altura, area;


  printf("\nQual a medida da base do retângulo em metros?\t");
  scanf("%f", &base);

  printf("\nQual a altura do retângulo?\t");
  scanf("%f", &altura);

  area = base*altura;
  printf("\nA medida da área é de %.2f metros quadrados.\t", area);
  
}
