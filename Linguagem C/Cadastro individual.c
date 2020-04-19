//#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int CEP, telefone;
    char nome[61], endereco[61];
    CEP, telefone = 0;

    printf("\t======Cadastro Pessoal=====\n");

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu endereco: ");
    scanf("%s", endereco);

    printf("Digite seu CEP: ");
    scanf("%i", &CEP);

    printf("Digite seu telefone: ");
    scanf("%i", &telefone);

    printf("Parabens, seu cadastro foi efetuado com sucesso");

    return 0;
}
