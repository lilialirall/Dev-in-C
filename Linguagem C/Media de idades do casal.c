//#include <stdio.h>
//#include <stdlib.h>


int main () {

	int idade1, idade2, media;
	char nome1[61], nome2[61];


	printf("\t======Cadastro de casais======\n\n");

	printf("Informe seu nome: ");
	scanf("%s", &nome1);

	printf("Informe o nome do seu conjuge: ");
	scanf("%s", &nome2);

 	printf("Digite sua idade: ");
	scanf("%d", &idade1);

	printf("Digite a idade de seu conjuge: ");
	scanf("%d", &idade2);

	media = (idade1 + idade2) / 2;

	if(idade1 <= 59){
		printf("Voces formam um casal jovem com uma media de %d", media);
	}
	if(idade2 >= 60){
		printf("Voces formar um casal idoso com uma media de %d", media);
	}


	return 0;
}
