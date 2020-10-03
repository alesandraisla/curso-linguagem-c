#include <stdio.h>

int main (){
	
	/*Escreva um programa capaz de calcular o fatorial de um numero*/
	
	/*
	int fatorial = 10;
	int resposta = 1;
	
	
	for (fatorial = 10; fatorial >=1; fatorial--){
	
		resposta *= fatorial;
	
	}
	
	printf("Resultado do fatorial: %i\n", resposta);
	*/
	
	
	int primeiroNumero, segundoNumero;
	
	// esse sinal com os numeros % significa sobra da divisao
	
	printf("Digite o primeiro numero");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo numero");
	scanf("%i", &segundoNumero);	
	
	if (segundoNumero == 0){
		printf("Divisao por 0 nao permitido. \n");
	} else {
		if (primeiroNumero % segundoNumero == 0){
			printf("%i e´ divisivel por %i.\n", primeiroNumero, segundoNumero);
		}else {
			printf("%i nao e´divisivel por %i.\n", primeiroNumero, segundoNumero);		}
	}
	
	
	// Criar um programa que vai inverter a cifra que o usuario digitar
	
	
	
	
		
	return 0;
}
