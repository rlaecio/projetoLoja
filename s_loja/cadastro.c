#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("------------------------------ \n");
    printf("       Sistema Loja            \n");
    printf("------------------------------ \n");
    printf("\n");

    char nome_produto[30], nome_prod[100];
    double quantidade[100], valor_unitario[100], valor2, desconto, total, totalDesconto = 0, percentual[100];
    int categoria, vet_posicao = 0, continuar, continua;

    do
    {
        printf("Digite o nome do produto: ");
        scanf("%s", &nome_produto);

        printf("\n");

        printf("########### ENTRE COM A CATEGORIA ########### \n \n1 - Informatica \n2 - Jogos  \n3 - Eletronicos \n \n");
        scanf("%i", &categoria);

        printf("Digite a quantidade:  ");
        scanf("%f", &quantidade[vet_posicao]);

        printf("Digite o valor unitario:  ");
        scanf("%f", &valor_unitario[vet_posicao]);

        &nome_prod[vet_posicao] = nome_produto; 
        valor2 = valor_unitario[vet_posicao] * quantidade[vet_posicao];
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
        &percentual[vet_posicao] = valor2 * desconto;
        total = valor2 - percentual[vet_posicao];

       
        printf("1  - Continuar cadastrando.  2 - Sair  :");
        scanf("%d", &continuar);
        if(continuar == 1)
        {
            &continua = 1;
            break;
        } else {
            &continua = 0;
            &vet_posicao = vet_posicao + 1;
        }
        
    } while(continua == 0);
    

    printf("\n");
    printf("-------------------------------------------- \n");
    printf("Valor Total \tDesconto \tValor Final \n ");
    printf("%.2f", valor2);
    printf("\t \t%.2f ", valor2 * desconto);
    printf("\t \t%.2f ", total);
    printf("\n");
    printf("-------------------------------------------- \n");

    printf("\n");
    printf("FIM! \n \n");
    system("clear");

    return (main());
}
