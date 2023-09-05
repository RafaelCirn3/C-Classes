#include <stdio.h>
#include <string.h>
#include <locale.h>
#define promocao 80000
int main(){
	setlocale(0,"Portuguese");
	
	float valor;
	printf("digite o valor do Imóvel desejado: ");
	scanf("%f", &valor);
	
	if (valor > promocao)
		printf("fora de promoção, valor final : %f",valor);
	else
		printf("dentro da promoção, valor final : %.2f",valor);
		
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=	

	float valorCarro;
	int DataProducao;
	
	printf("\n digite o valor do seu carro: ");
	scanf("%f",&valorCarro);
	
	printf("informe o ano de produção do carro: ");
	scanf("%d",&DataProducao);
	if (DataProducao > 1990)
		printf("imposto a ser pago: %.2f",valorCarro*0.015);
	else
		printf("imposto a ser pago: %.2f",valorCarro*0.01);
	
	return 0;
}
