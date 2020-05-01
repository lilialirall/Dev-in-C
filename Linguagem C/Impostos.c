//#include <stdio.h>
//#include <stdlib.h>



int main() {
	
	int PercImpostos, PercDestribuidor;
	float CustoFabrica, ValorDestribuidor, ValorImposto, CustoConsumidor;
	PercDestribuidor = 29; 
	PercImpostos = 47;
	
	printf("Informe o valor do custo de fabrica: ");
	scanf("%f", &CustoFabrica);
	
	ValorDestribuidor = CustoFabrica + (CustoFabrica * PercDestribuidor / 100);
	
	ValorImposto = CustoFabrica + (CustoFabrica * PercImpostos / 100);
	
	CustoConsumidor = CustoFabrica + ValorDestribuidor + ValorImposto;
	
	printf("O custo do consumidor e: %2.f", CustoConsumidor);
	
	
	
	return 0;
}
