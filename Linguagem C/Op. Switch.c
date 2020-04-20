//#include <stdio.h>
//#include <stdlib.h>
    /* O comando switch. E uma forma de reduzir a complexidade de varios
    if/else encadeados. O conteudo de uma variavel sera comparado com um valor
    constante, e caso a comparacao seja verdadeira, um determinado comando
    sera executado.
    */
int main()
{
    printf("Digite um valor entre 0 e 9\n");
    int i;
    scanf("%i", &i);

    switch(i){

    case 0:
     printf("A opcao digitada foi 'zero' ");
     break;

    case 1:
        printf("A opcao digitada foi 'um' ");
        break;
    case 2:
        printf("A opcao digitada foi 'dois'");
        break;
    case 3:
        printf("A opcao digitada foi 'tres'");
        break;
    case 4:
        printf("A opcao digitada foi 'quatro'");
        break;
    case 5:
        printf("A opcao digitada foi 'cinco'");
        break;
    case 6:
        printf("A opcao digitada foi 'seis'");
        break;
    case 7:
        printf("A opcao digitada foi 'sete'");
        break;
    case 8:
        printf("A opcao digitada foi 'oito'");
        break;
    case 9:
        printf("A opcao digitada foi 'nove'");
        break;
    default:
      printf("Default, opcao nao encontrada");

    }


    return 0;
}
