#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(0,"Portuguese");
	
	
	char nome[120]; 
	int i, tamanho, letraA, letraB, letraC;
	letraA = letraB = letraC = 0;
	printf("digite seu nome completo: " );
	scanf("%s",&nome);
	printf("o nome digitado foi %s \n", nome);
	tamanho = strlen(nome);
	for( i = 0; i < tamanho; i++){
		if(nome[i] == 'a')
			letraA++;
		else if (nome[i] == 'b')
			letraB++;
		else if( nome[i] == 'c')
			letraC++; 
		
	}
	printf("a quantidade de a's é %d, de b's e de c's é %d"
				,letraA,letraB,letraC);
	/*Esreva uma matriz 3x3 com valores pré definidos*/
	/*escreva uma matriz 3x3 que o usuário digite os valores */
//	int matriz[3][3];
//	int linha, coluna;
//	matriz[0][0]= 1;
//	matriz[0][1]= 2;
//	matriz[0][2]= 3;
//	matriz[1][0]= 3;
//	matriz[1][1]= 5;
//	matriz[1][2]= 6;
//	matriz[2][0]= 7;
//	matriz[2][1]= 8;
//	matriz[2][2]= 9;
//	for( linha = 0;linha <3; linha++){
//		printf("digite três valores para a %dª linha: ",linha+1);
//		for(coluna = 0;coluna  <3;coluna++){
//		scanf("%d",&matriz[linha][coluna]);
//		}
//	}
//	for( linha = 0; linha < 3; linha++){
//	for (coluna = 0; coluna < 2; coluna++){
//	printf("%d - ", matriz[linha][coluna ]);
//	}
//	printf("%d\n", matriz[linha][coluna]);
//	}
//	
	
	
	
//-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=	
//	char nome[100];
//	int i;
//	
//	printf("digite seu nome: ");
//	scanf("%s",&nome);
//	int tamanho = strlen(nome);
//	char array[tamanho];
//	for(i = 0; i < tamanho;i++){
//		array[i] = nome[i];
//	}
//	printf("ordem Crescente: \n");
//	for(i = 0; i < tamanho; i++){
//		printf("%c",array[i]);
//	}
//	printf("\n ordem Decrescente: \n");
//	for(i = tamanho-1; i >= 0; i--){
//		printf("%c",array[i]);
//	}

	
//-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
//	int numeros [5], i;
//	for (i = 1; i <= 5 ; i++){
//		printf("digite o %dº. número: ",i);
//		scanf("%d", &numeros[i]);
//	}
//	
//	for (i = 1; i <= 5 ; i++){
//		printf("o valor da %dª posição  é %d\n", i, numeros[i]);
//		}
//-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
return 0;
}
