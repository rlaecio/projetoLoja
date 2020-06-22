#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tipo_endereco
{
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[30];
    char sigla_estado[3];
    long int CEP;
};

struct nascimento
{
    int dia;
    int mes;
    int ano;    
};

struct ficha_pessoal
{
    char nome[50];
    long int telefone;
    struct tipo_endereco endereco;
    
    struct nascimento dtnasc;
    
    
} ficha[3];



int main() 
{
    int i = 0;
    for (i = 0; i < 3; i++)
    {   
        printf("\nNome : ");
        gets (ficha[i].nome);

        printf("\nRua :");
        gets (ficha[i].)
    }
    
}

