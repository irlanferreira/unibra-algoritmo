#include <stdlib.h>
#include <stdio.h>

int main(){

  float nulos, brancos, validos, nulos_p, brancos_p, validos_p;
  int total;

  printf("Quantos votos nulos?: ");
  scanf("%f", &nulos);
  printf("Quantos brancos?: ");
  scanf("%f", &brancos);
  printf("Quantos válidos?: ");
  scanf("%f", &validos);

  total = nulos + brancos + validos;

  nulos_p=(nulos/total)*100;
  brancos_p=(brancos/total)*100;
  validos_p=(validos/total)*100;
  
  printf("O valor total de votos foi %d.\nVotos nulos: %.2f%\nVotos brancos: %.2f%\nVotos válidos: %.2f%", total, nulos_p, brancos_p, validos_p);

  
  return 0;
  
}