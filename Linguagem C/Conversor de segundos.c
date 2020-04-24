//#include <stdio.h>
//#include <stdlib.h>


int main()
{


   int tempo, horas, horas_seg, minutos, segundos;
   horas_seg=3600;//horas em segundos

   printf("\t====Conversor de segundos====\n\n");

   printf("Entre com o numero de segundos: ");
   scanf("%d", &tempo);

   horas = (tempo/horas_seg); //resultado da hora
   minutos = (tempo -(horas_seg*horas))/60;
   segundos = (tempo -(horas_seg*horas)-(minutos*60));

	printf("O total de horas eh de -> ");
   	printf("%dh : %dm :%ds \n",horas,minutos,segundos);

   return 0;
}
