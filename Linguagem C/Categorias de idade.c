//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int main (void)
{

   int infa, infb, juva, juvb, senior, idade;

   printf("======Descubra qual sera sua categoria esse ano======\n\n");

   printf("Informe sua idade: ");
   scanf("%d", &idade);


	if(idade >= 5 & idade <= 7)
	{
		printf("\n\n>>Infantil, menor de 8 anos<<\n\n");
	}
	if(idade >= 8 & idade <= 10)
	{
		printf("\n\n>>Infantil, menor de 11 anos<<\n\n");
	}
	if(idade >= 11 & idade <= 14)
	{
		printf("\n\n>>Juvenil, menor de 14 anos<<\n\n");
	}
	if(idade >= 12 & idade <= 17)
	{
		printf("\n\n>>Juvenil, menor de 17 anos<<\n\n");
	}
    if(idade >= 18)
    {
    	printf("\n\n>>Senior, maior de 18 anos<<\n\n");
	}


	return(0);
}
