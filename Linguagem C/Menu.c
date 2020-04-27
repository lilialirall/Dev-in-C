//#include <stdio.h>
//#include <stdlib.h>

int main()
{

    int opcao;

    printf("\n1 - Opcao 1");
    printf("\n2 - Opcao 2");
    printf("\n3 - Opcao 3\n");

    printf("\nDigite uma das opcoes:");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("\nA opcao escolhida foi 1");
        break;
        case 2:
            printf("\nA opcao escolhida foi 2");
        break;
        case 3:
            printf("\nA opcao escolhida foi 3");
        break;
        default:
            printf("\nOpcao invalida");
    }


    return 0;
}
