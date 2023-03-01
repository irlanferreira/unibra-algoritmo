#include <stdlib.h>
#include <stdio.h>

int main(){

  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  printf("O antecessor de %d é %d, e o sucessor é %d.", numero, numero - 1, numero + 1);
  
  return 0;
  
}