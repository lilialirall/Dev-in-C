//#include <stdio.h>
//#include <stdlib.h>



int main() {
	
	float n1, n2, n3, p1, p2, p3, media;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite o peso de sua primeira nota: ");
	scanf("%f", &p1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite o peso de sua segunda nota: ");
	scanf("%f", &p2);
	
	printf("Digite sua terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite o peso de sua terceira nota: ");
	scanf("%f", &p3);
	
	
	media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
	
	printf("Sua media e: %.2f\n\n", media); 
	
	system("pause");
	
	return 0;
}
