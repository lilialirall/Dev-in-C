//#include <stdio.h>
//#include <stdlib.h>


int main ()
{
	float N1, N2, N3, N4, resultado;

	printf("====== Descubra sua media! ======\n\n");

	printf("Informe sua primeira nota: ");
	scanf("%f", &N1);

	printf("Informe sua segunda nota: ");
	scanf("%f", &N2);

	printf("Informe sua terceira nota: ");
	scanf("%f", &N3);

	printf("Informe sua quarta nota: ");
	scanf("%f", &N4);

	resultado = ( N1 + N2 + N3 + N4) / 4;

	if(resultado <= 5 )
	{
		printf("Voce foi reprovado");
	}
	if(resultado >= 5.1 & resultado <= 6.9)
	{
		printf("Voce esta em recuperacao");
	}
	if(resultado >= 7 & resultado <= 10)
	{
		printf("Parabens! Voce foi aprovado!");
	}



	return (0);
}
