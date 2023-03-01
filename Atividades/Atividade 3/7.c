#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float combustivel_preco, km_inicio, km_fim, gasolina_gasta, valor_total_recebido, media, lucro;
    
    printf("Qual o preço do combustivel?: ");
    scanf("%f", &combustivel_preco);
    printf("Quantos Km no início?: ");
    scanf("%f", &km_inicio);
    printf("Quantos Km no fim?: ");
    scanf("%f", &km_fim);
    printf("Quantos litros foram gastos?: ");
    scanf("%f", &gasolina_gasta);
    printf("Quanto foi recebido?: ");
    scanf("%f", &valor_total_recebido);
    
    media = (km_fim - km_inicio) / gasolina_gasta;
    lucro = valor_total_recebido - (combustivel_preco*gasolina_gasta);
    
    printf("A média de consumo é: %.2f\n", media);
    printf("Lucro do dia: R$ %.2f\n", lucro);
    
    return 0;
}