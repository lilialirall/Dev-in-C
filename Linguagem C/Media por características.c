/*      Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A – azul, P- preto, V – verde, C – castanho ) e a cor dos cabelos (P – preto, C – castanho, L – louro e R – ruivo ) de 20 pessoas e calcule e mostre na tela:

	A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos;
	A média das idades das pessoas com altura inferior a 1,50;
	A percentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
	A quantidade de pessoas ruivas que não possuem olhos azuis.

*/


//#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int idade, peso, mediaazul, qntpesoalt, qntpesmais50, qntruivas, contador, mediap1, cor_olhos, cor_cabelo;
    float altura;

    mediap1 = 0; qntruivas = 0; qntpesmais50 = 0; qntpesoalt = 0;  mediaazul=0; idade = 0;





    printf("=====Preencha com seu grupo de amigos=====\n");

    for(contador = 1; contador = 20; contador++)
    {
    printf("\nQual a idade: ");
    scanf("%d", &idade);
    printf("\nPeso: ");
    scanf("%d", &peso);
    printf("\nQual a altura: ");
    scanf("%f", &altura);
    printf("\nCor dos olhos 1-azul, 2-preto, 3-verde, 4-castanho: ");
    scanf("%d", &cor_olhos);
    printf("\nCor dos cabelos 1-preto, 2-castanho, 3-louro, 4-ruivo: ");
    scanf("%d", &cor_cabelo);
    system("cls");
    }

    if (idade>50 && peso<60);

    {

    qntpesmais50=qntpesmais50+1;

    }

    if(altura<1.5);

    {

    qntpesoalt=qntpesoalt+1;

    idade=idade+idade;

    mediap1=idade/qntpesoalt;

    }

    if (cor_olhos == 1);

    {

    mediaazul =mediaazul+1;

    mediaazul=(mediaazul/20)*100;

    }

    {

    if (cor_cabelo==4 && cor_olhos!=1);

    qntruivas=qntruivas+1;

    }


    return 0;
}
