#include <stdio.h>
#include <string.h>
#include <locale.h> // para definir a regi�o, e buscar uma linguagem (utiliza-se setlocale(0,"Portuguese") para definir em portugu�s)
#define ANO_ATUAL 2023
#define PI 3.14159
#define INSSPercent  7.5
int main(){
	setlocale(0,"Portuguese");
//	
//	float nota1, nota2;
//    
//    printf("Digite a primeira nota: ");
//    scanf("%f", &nota1);
//
//    printf("Digite a segunda nota: ");
//    scanf("%f", &nota2);
//
//    float media = (nota1 + nota2) ;
//
//     if (media >= 6.0) {
//        printf("Aluno aprovado!\n");
//        
//        if (media >=10.0) {
//            printf("Parab�ns pela nota m�xima!\n");
//        }
//    } else {
//        printf("Aluno reprovado.\n");
//    }
//
////-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-
//
//    int numero;
//    
//    printf("Digite um n�mero inteiro: ");
//    scanf("%d", &numero);
//
//    if (numero % 2 == 0) {
//        printf("%d � um n�mero par.\n", numero);
//    } else {
//        printf("%d � um n�mero �mpar.\n", numero);
//    }
//
//
//
//
//
////=-=-=-=-=-=-=--=-=-=-=-=-=-=--=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-
//
//	   int ano_nascimento, idade;
//
//    printf("digite o ano de nascimento do nadador: ");
//    scanf("%d", &ano_nascimento);
//	
//	idade =  ANO_ATUAL - ano_nascimento;
//	if(idade <5 || idade > 80)
//		printf("n�o permitido");
//    else if (idade >= 5 && idade <= 7) 
//    	printf("INFANTIL A");
//    else if (idade >= 8 && idade <= 10) 
//    	printf("INFANTIL B");
//    else if (idade >= 11 && idade <= 13) 
//    	printf("JUVENIL A");
//    else if (idade >= 14 && idade <= 17) 
//    	printf("JUVENIL B");
//    else if (idade >= 17 ) 
//    	printf("SENIOR ");
//
////=-=--=-=-=-=-=-=--=-=-=-=-=--=-=-=-=-=-=--=-=-=-=-=--=-=-=-=--=
//	   int ano_nasc, age;
//
//    printf("digite o ano de nascimento do nadador: ");
//    scanf("%d", &ano_nasc);
//    	age =  ANO_ATUAL - ano_nasc;
//    if (age < 5 || age >80 )
//    	printf("idade %d n�o categorizada", age);
//    else{
//	
//		switch(age) {
//			case 5:
//			case 6:
//			case 7:
//				printf("nadador de idade %d � da categoria Infatil A",age);
//				break;
//			case 8:
//			case 9:
//			case 10:
//				printf("nadador de idade %d � da categoria Infatil B",age);
//				break;
//			case 11:
//			case 12:
//			case 13:
//				printf("nadador de idade %d � da categoria Juvenil A",age);
//				break;
//			case 14:
//			case 15:
//			case 16:
//			case 17:
//				printf("nadador de idade %d � da categoria Juvenil B ",age);
//				break;
//			default:
//				printf("nadador de idade %d � da categoria S�nior", age);}}
//
////=-=--=-=-=-=-=-=--=-=-=-=-=--=-=-=-=-=-=--=-=-=-=-=--=-=-=-=--=
//	float Raio,Area;
//	printf("digite o raio da circunfer�ncia: ");
//	scanf("%f",&Raio);
//	Area = (Raio*Raio) * PI;
//	printf("a �rea do resultado � %.2f ",Area);
//=-=--=-=-=-=-=-=--=-=-=-=-=--=-=-=-=-=-=--=-=-=-=-=--=-=-=-=--=
	float SalarioBruto, // quanto ele ganha sem descontos
	 	  SalarioLiquido, // quanto ele recebe ao final
		  HorasTrabalhadas, // quantas horas ele trabalha
		  ValorHora, // qaunto ganha por hora
		  desconto; // desconto do INSS
	printf("digite seu n�mero de horas trabalhadas: ");
	scanf("%f",&HorasTrabalhadas);

	printf("digite seu ganho por hora: ");
	scanf("%f",&ValorHora);
	
	SalarioBruto = HorasTrabalhadas*ValorHora; // calcula quanto ele ganha
	desconto = SalarioBruto *INSSPercent/100; // calcula quanto ele perde pro INSS
	SalarioLiquido = SalarioBruto - desconto; // calcula o sal�rio liquido
	printf("seu sal�rio l�quido equivale � :%f", SalarioLiquido);
		
    return 0;
	}    
