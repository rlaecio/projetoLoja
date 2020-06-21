#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int escolha = 1;

    // se a escolha for diferente de 5, ele continua... o que inicialmente é verdade
    // pois escolha é igual a 1
    while (escolha != 5)
    {

        printf("\n\n ----------------------- ");

        printf("\n       1 - Opcao 1 ");
        printf("\n       2 - Opcao 2 ");
        printf("\n       3 - Opcao 3 ");
        printf("\n       4 - Opcao 4 ");
        printf("\n       5 - Sair");
        printf("\n\n  Escolha uma opcao: ");
        scanf("%d", &escolha);

        // estrutura switch
        switch (escolha)
        {

        case 1:
        {

            system("clear");

            printf("\n\n Opcao escolhida: 1 ");

            break;
        }

        case 2:
        {
            system("clear");

            printf("\n\n Opcao escolhida: 2 ");
            break;
        }

        case 3:
        {
            system("clear");

            printf("\n\n Opcao escolhida: 3 ");
            break;
        }

        case 4:
        {
            system("clear");

            printf("\n\n Opcao escolhida: 4 ");
            break;
        }

        // opção padrão
        default:
        {
            system("clear");

            // se for escolhida a opção 5, ele pula o while utilizando continue para isso
            if (escolha == 5)
            {
                continue;
            }
            // caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
            printf("\n\n Nenhuma opcao foi escolhida ");
            break;
        }
        }
    }

    if (escolha == 5)
        printf("\n\n O Programa foi fechado");

    return (0);
}