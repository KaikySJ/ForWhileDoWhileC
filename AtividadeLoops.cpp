#include <stdio.h>

int main(){
	
	//for crescente
	printf("For crescente\n");
	for(int i = 0; i <= 10; i++){
		printf("%d\n", i);
	}
	//for decrescente
	
	printf("For decrescente\n");
	for(int i = 10; i >= 0; i--){
		printf("%d\n", i);
	}
	
	//while crescente
	printf("while crescente\n");
	int iWhile = 0;
	while(iWhile <= 10){
		printf("%d\n", iWhile);
		iWhile++;
	}
	
	//while decrescente

	printf("while decrescente\n");
	while(iWhile >= 0){
		printf("%d\n", iWhile);
		iWhile--;
	}
	
	//do while crescente
	printf("Do while crescente\n");
	int doWhilei = 0;
	do{
		printf("%d\n", doWhilei);
		doWhilei++;
	} while(doWhilei <= 9);


	//do while decrescente
	printf("Do while decrescente\n");
	do{
		printf("%d\n", doWhilei);
		doWhilei--;
	} while(doWhilei >= 0);



	return 0;
	}
