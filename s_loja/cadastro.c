#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Array ppara o sistema principal */
struct listaProdutos
{
    char nome_prod[30];
    int quantidade;
    float val_unitario;
    float percentual;
};

/* Variaveis do sistema de vendas */
int i = 0, categoria = 1, continua = 1;
struct listaProdutos cadastro[100];
float desconto = 0, valorTotal, totalVendas = 0;;

int main()
{

    do
    // Inicia o laço ate que se peça para cancelar
    {
        // limpar a tela ****
        system("clear"); // para ambientes like unix
        //system("cls"); // para ambientes windows

        printf("------------------------------------ \n");
        printf("             Sistema Loja            \n");
        printf("------------------------------------ \n");
        printf("\n");

        printf("Digite o nome do produto: ");
        fflush(stdin);
        fgets(cadastro[i].nome_prod, 30, stdin);

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

        printf("* * CADASTRAR OUTRO ? * * \n");
        printf(" 1 - Sim.  2 - Não : ");
        int continuar;
        scanf("%d", &continuar);
        
        if (continuar == 1) 
        {
            int continua = 1;
            i++;
        }
        else
        {
            if (continuar == 2)
            {

                // limpar a tela ****
                system("clear"); // para ambientes like unix
                //system("cls"); // para ambientes windows

                printf("\n");
                printf("-------------------------------------------------------------- \n");
                printf("Produto \t \t Valor Total \tDesconto \tValor Final \n ");

                // inicia o loop e impressão da venda
                
                int len_vet = i + 1 ;
                for (int j = 0; j < len_vet; j++)
                {
                    // efetuando os calculos unitarios e totais dos produtos e seus descontos
                    valorTotal = cadastro[j].val_unitario * cadastro[j].quantidade;
                    cadastro[j].percentual = valorTotal * desconto;
                    float valorFinal = valorTotal - cadastro[j].percentual;
                    totalVendas = totalVendas + valorFinal;

                    printf("%s", cadastro[j].nome_prod);
                    printf("\t \t \t %.2f", valorTotal);
                    printf("\t\t%.2f ", cadastro[j].percentual);
                    printf("\t\t%.2f ", valorFinal);
                    printf("\n");

                    
                }

                printf("-------------------------------------------------------------- \n");
                printf("                               Valor total da venda: %.2f", totalVendas);
                printf("\n-------------------------------------------------------------- \n");

                return 0;
            }
        }
    } while (continua == 1);

    printf("\n");

    printf("FIM! \n \n");
    return 0;
}
