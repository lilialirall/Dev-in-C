#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int mes, anos, dias;
	
	printf("\t\t======Descubra sua idade em dias======\n\n");
	
	printf("Escreva sua idade em dias: "); 
	scanf("%d", &dias);
	
	printf("Escreva sua idade em meses: ");
	scanf("%d", &mes);
	
	printf("Escreva sua idade em anos: ");
	scanf("%d", &anos);
	
	dias = (dias + (anos * 365) + (mes * 30));
	
	printf("Sua idade em dias e: %d", dias);
	
	return 0;
}
