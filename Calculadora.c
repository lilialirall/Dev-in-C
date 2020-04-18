#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{

    float num1, num2, resultado;
    char op = '0';

    do{
       num1 = num2 = resultado = 0;

    printf("\t======Calculadora 2.0====== \n\n");

    //imprimindo opcoes da calculadora
    printf("(1) soma \n");
    printf("(2) subtracao \n");
    printf("(3) divisao \n");
    printf("(4) multiplicacao \n");
    printf("(0) sair do programa \n");

    printf("Informe a operacao: \n");
    op = getche();
    printf("\n");

    printf("Digite o primeiro numero:\n\t");
    scanf("%f", &num1);
    printf("Digite o segundo numero:\n\t");
    scanf("%f", &num2);


    if(op=='1'){
      resultado = num1 + num2;
    }else{
        if(op == '2'){
            resultado = num1 - num2;
        }else{
            if(op== '3'){
                resultado = num1 / num2;
            }else{
                if(op== '4'){
                  resultado = num1 * num2;

                      }

                    }
                 }
              }


    printf("O resultado e: %2.f", resultado);
    }while(op != '0');


    return 0;
}
