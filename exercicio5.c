
//Exercício: 5
#include <stdio.h>
int main(){
  int ano, dia1, mes1, dia2, mes2, idade2, idade3, idadedias;

  printf("\nQuantos anos você tem?\t");
  scanf("%d", &ano);

  printf("\nQual o mês do seu aniversário?\t");
  scanf("%d", &mes1);

  printf("\nQual o dia do seu aniversário?\t");
  scanf("%d", &dia1);

  printf("\nQual o mês atual?\t");
  scanf("%d", &mes2);

  printf("\nQue dia é hoje?\t");
  scanf("%d", &dia2);

  idade2 = mes2 + (12-mes1);
  idade3 = dia2 - dia1;
   if (idade3 < 0){
   idade3 = idade3*(-1);
   }
  idadedias = (ano*365) + (idade2*30)+idade3;

  printf("\nVocê tem %d anos, %d meses e %d dias de vida\t", ano,idade2, idade3);
  printf("\nSua idade em dias é %d.", idadedias);
  }
