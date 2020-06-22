#include <stdio.h>
#include <stdlib.h>
#define MAX_ESTOQUE 100
/* Array ppara o sistema principal */
struct listaProdutos
{
    char nome_prod[100];
    int quantidade;
    float val_unitario;
    float percentual;
};

/* Variaveis do sistema de vendas */
struct listaProdutos cadastro[MAX_ESTOQUE];
int i, categoria = 1, continua = 1, continuar = 1;
float desconto = 0;

int main()
{

    do
    // Inicia o laço ate que se peça para cancelar
    {
        // limpar a tela ****
        system("clear"); // para hambiente like unix
        //system("cls"); // para hambientes windows

        printf("------------------------------------ \n");
        printf("             Sistema Loja            \n");
        printf("------------------------------------ \n");
        printf("\n");

        printf("Digite o nome do produto: ");
        fflush(stdin);
        fgets(cadastro[i].nome_prod, 100, stdin);

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
        scanf("%d", &cadastro[i].quantidade);

        printf("Digite o valor unitario:  ");
        scanf("%f", &cadastro[i].val_unitario);

        // efetuando os calculos unitarios e totais dos produtos e seus descontos
        float valorTotal = cadastro[i].val_unitario * cadastro[i].quantidade;
        cadastro[i].percentual = valorTotal * desconto;
        float valorFinal = valorTotal - cadastro[i].percentual;

        printf("1  - Continuar cadastrando.  2 - Sair  :");
        scanf("%i", &continuar);
        if (continuar == 0)
        {
            int continua = 0;
            return 0;
        }
    } while (continua == 0);

    /*
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
    
*/

    return (main());
}
