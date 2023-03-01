#include <stdlib.h>
#include <stdio.h>

int main(){

  int numero, resultado;
  printf("Digite um número: ");
  scanf("%d", &numero);
  resultado = (numero*numero) * 3;
  printf("O cubo de %d é %d.", numero, resultado);
  
  return 0;
  
}