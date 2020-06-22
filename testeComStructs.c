#include <stdlib.h>
#include <stdio.h>
#define MAX_PESSOAS 5
 
// 1. Declaração da estrutura s_pessoa
// e do vetor pessoas com 5 posições
struct s_pessoa
{
    char nome[50];
    char rg[15];
    char cpf[14];
    int idade;
};
 
struct s_pessoa pessoas[MAX_PESSOAS];
int i;
 
int main()
{
    // 2. Fazendo a leitura dos dados
    for(i = 0; i < MAX_PESSOAS; i++)
    {
        printf("Lendo dados na posicao %d\n", i);
        printf("Digite seu nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 50, stdin);
 
        printf("Digite seu RG: ");
        fgets(pessoas[i].rg, 15, stdin);
 
        printf("Digite seu CPF: ");
        fgets(pessoas[i].cpf, 14, stdin);
 
        printf("Digite sua idade: ");
        fflush(stdin);
        scanf("%d", &pessoas[i].idade);
        printf("\n");
    }
 
    // 3. Exibindo dados na tela
    printf("\n===== EXIBINDO DADOS =====\n");
    for (i = 0; i < MAX_PESSOAS; i++)
    {
        printf("Nome..: %s", pessoas[i].nome);
        printf("RG....: %s", pessoas[i].rg);
        printf("CPF...: %s", pessoas[i].cpf);
        printf("Idade.: %d \n\n", pessoas[i].idade);
    }
    return 0;
}