// O que esse algoritmo faz?
#include <stdio.h>
int main(){
  char letra = '\0';
  while (letra!='a' && letra!='A'){ //Tabela ASCII
    printf("%c", letra);
    letra= getchar();
  }
  printf("Você digitou a tecla: %c", letra);
  return 0;
}