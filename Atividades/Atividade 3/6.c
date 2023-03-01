#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int prestacoes, pagas, faltam;
    float valor_total, deve, valor_prestacao_unica;
    
    printf("Quantas prestações já foram pagas?: ");
    scanf("%d", &pagas);
    printf("Quantas prestações são no total?: ");
    scanf("%d", &prestacoes);
    printf("Qual o valor total das prestações?: ");
    scanf("%f", &valor_total);
    
    faltam = prestacoes-pagas;
    valor_prestacao_unica = valor_total/prestacoes;
    deve = faltam * valor_prestacao_unica;
    
    printf("De %d prestações, foram pagas %d. Com uma dívida de %.2f, faltam %d prestações.", prestacoes, pagas, deve, faltam);
    
    return 0;
}