#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("------------------------------------ \n");
    printf("             Sistema Loja            \n");
    printf("------------------------------------ \n");
    printf("\n");

    /* Array ppara o sistema principal */
    struct listaProdutos
    {
        char nome_prod[100];
        float quantidade;
        float val_unitario;
        float percentual;
    };

    /* Variaveis do sistema de vendas */
    int posicaoVetor = 0;
    struct listaProdutos cadastro;

    do // Inicia o laço ate que se peça para cancelar
    {
        printf("Digite o nome do produto: ");
        fflush(stdin);
        fgets(cadastro.nome_prod, 100, stdin);

        printf("\n");

        printf("########### ENTRE COM A CATEGORIA ########### \n \n1 - Informatica \n2 - Jogos  \n3 - Eletronicos \n \n");
        scanf("%i", &categoria);
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

        printf("Digite a quantidade:  ");
        scanf("%f", &quantidade[posicaoVetor]);

        printf("Digite o valor unitario:  ");
        scanf("%f", &valor_unitario[posicaoVetor]);

        &nome_prod[posicaoVetor] = nome_produto;
        valor2 = valor_unitario[posicaoVetor] * quantidade[posicaoVetor];

        &percentual[posicaoVetor] = valor2 * desconto;
        total = valor2 - percentual[posicaoVetor];

        printf("1  - Continuar cadastrando.  2 - Sair  :");
        scanf("%d", &continuar);
        if (continuar == 1)
        {
            &continua = 1;
            break;
        }
        else
        {
            &continua = 0;
            posicaoVetor++;
        }

    } while (continua == 0);

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
