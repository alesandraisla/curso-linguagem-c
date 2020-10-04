#include <stdio.h>

int main (){
	
	//Armazena caracterer
	/*
	char variavelChar = 'a';
	printf("%c\n", variavelChar);
	scanf("%c", &variavelChar);
	printf("%c\n", variavelChar);
	*/
	
	/*
	bool variavelBool = true;     // pode ser true é 1 ou false que é 0 usado em programa de sim ou nao
	printf("%i\n", variavelBool);
	*/
	
	
	/*
	int variavelInt = 10;           //   long int (variavel inteira longa espaço dobrado em memória)  // const int (fixando o valor da variavel) // pode aplicar unsigned int
	printf("%i\n", variavelInt);
	scanf("%i", &variavelInt);
	printf("%i\n", variavelInt);
	*/
	
	/*
	float variavelFloat = 10.10;		// pode aplicar o unsigned float
	printf("%0.2f\n", variavelFloat);   //0.2 exibiara a quantidade de casas decimais após a virgula
	scanf("%0.2f", &variavelFloat);
	printf("%0.2f\n", variavelFloat);
	*/
	
	double variavelDouble = 10.10;  // precisão maior que a float // unsigned double (limita a variavel a assumir apenas valores positivos)
	printf("%f\n", variavelDouble);
	scanf("%lf\n", &variavelDouble);  // scanf usa o %lf
	printf("%f\n", variavelDouble);
	
	
		
	
	return 0;
}
