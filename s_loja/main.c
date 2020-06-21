/*
* Programa para calculo de venda de produtos
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int categoria = 1, qtdvendida = 0;
    float pr_unit = 0, pr_total = 0, pr_vend = 0, tx_entrega = 0, prComDesconto = 0;
    float desconto = 0;

    float CalculaDesconto(int categoria);
    {
        switch (categoria)
        {

        case 1:
        {
            desconto = 0.05;
            break;
        }
        case 2:
        {
            desconto = 0.08;
            break;
        }
        case 3:
        {
            desconto = 0.1;
            break;
        }
        default:
            desconto = 0.05;
            break;
        }
        return desconto;
    }

    

    system("clear");

    printf("\n\n * * * CALCULO DO PREÇO DE VENDA - FLORICULTURA * * * \n\n");

    printf("Quantidade : ");
    scanf("%d", &qtdvendida);

    printf("Preço unitário .....: ");
    scanf("%f", &pr_unit);

    do
    {
        fflush(stdin);
      

       

    pr_vend = pr_total * desconto;
    pr_vend = pr_total - pr_vend;

    printf("\nPreço de custo .: R$ %.2f", pr_custo);
    printf("\nTaxa de entrada : R$ %.2f", tx_entrega);
    printf("\nPreço de venda .: R$ %.2f", pr_vend);
    printf("\n\n");

    return (0);
}