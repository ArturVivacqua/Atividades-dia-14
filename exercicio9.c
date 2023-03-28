//Exercício 9:
#include <stdio.h>

int main(){
  float nota1, nota2, nota3, media;

  printf("\nDigite a nota 1 do aluno:\t");
  scanf("%f", &nota1);

  printf("\nDigite a nota 2 do aluno:\t");
  scanf("%f", &nota2);

  printf("\nDigite a nota 3 do aluno:\t");
  scanf("%f", &nota3);

  media = ((nota1*2) + (nota2*3) + (nota3*5))/(2+3+5);
  printf("A média final do aluno é %.2f", media);
  
  }
