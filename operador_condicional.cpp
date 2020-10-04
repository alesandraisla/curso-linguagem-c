#include <stdio.h>


int main (){
	
	/*
	
	int num1 = 10;
	int num2 = 20;
	int resposta;
	
	//operador condicional
	
	num1 < num2 ? printf("sim\n"): printf("nao\n"); // caso seja verdade faça isso, senao faça aquilo
	
	num1 < num2 ? (resposta = 10) : (resposta = -10);
	
	printf("%i\n", resposta);
		
	*/	
		
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%i", &idade);
	
	idade = (idade < 18 ) ? printf("Voce e´ menor de idade"): printf("Voce e´maior de idade");	
	
	

	
	
	
	return 0;
}
