#include <stdlib.h>
#include <stdio.h>

int main(){

  float salario, reajuste;
  printf("Digite o salário atual: ");
  scanf("%f", &salario);
  printf("Digite o reajuste: ");
  scanf("%f", &reajuste);
  salario = salario + (reajuste / 100) * salario;
  printf("O salário final será de %.2f", salario);
    
  
  return 0;
  
}