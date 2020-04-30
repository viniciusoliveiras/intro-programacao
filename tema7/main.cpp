#include <stdio.h>
#include <stdlib.h>

main(){
	int num, par=0, impar=0, total=0;
	float media, soma=0, mediapar, somapar=0;
	
	while ((num>=0) && (total<20)){
		printf("Insira um numero positivo:  "); scanf("%d",&num);
	
		total += 1;
		if(num>=0){
		soma += num;			
		}
		if(num%2==0){
			par += 1;
			somapar += num;
		} else{
			impar += 1;
		}
	}
		
	media = soma / 5;
	mediapar = somapar / par;
	
	if(num<0){
		printf("\n[ERRO] Numero negativo inserido. Programa encerrado.");
	}
	
	printf("\n\n-----//-----//-----//-----//-----\n");
	printf("\n\nQUANTIDADE DE NUMEROS PARES: %d\n",par);
	printf("\nQUANTIDADE DE NUMEROS IMPARES: %d\n",impar);	
	printf("\nMEDIA DOS NUMEROS PARES: %0.2f\n",mediapar);
	printf("\nMEDIA GERAL: %0.2f\n",media);
	} 
