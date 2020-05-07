#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3;
    char eq, es, is, any;


    printf("\t Descubra o tipo do seu triangulo \n\n");

    printf("\nDigite o valor do primeiro lado: ");
    scanf("%d", &lado1);

    printf("\nDigite o valor do segundo lado: ");
    scanf("%d", &lado2);

    printf("\nDigite o valor do segundo lado: ");
    scanf("%d", &lado3);

    eq = (lado1 == lado2) && (lado2 == lado3);

    es = (lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3);

    is = (lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1);

    if(eq)
    printf("O triangulo e equilatero", eq);
    else
    if(es)
    printf("O triangulo e escaleno", es);
    else
    if(is)
    printf("O triangulo e isosceles", is);
    else
    if(any)
    printf("Seu calculo nao forma um triangulo");


    return 0;
}
