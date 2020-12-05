/*
    Algorithm: Maior n�mero de 3 valores inteiros
    Author: Oz�ias Souza
    Data: 04/12/2020
    Hours:  17:55:58
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: Receber 3 valores inteiro e mostrar o maior
    Inputs: 
        Int -> valor 1
        Int -> valor 2
        Int -> valor 3
    Outputs: Int -> Maior valor
    Observations: Uma vari�vel auxiliar pode melhorar bastante a leitura
		do c�digo, ser� assim sempre?
*/
#include <stdio.h> // Biblioteca padr�o da linguagem C
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");

	int iValor1;
	int iValor2;
	int iValor3;

	/*
		Op��o 1
			Verifica��o com as 3 variaveis
	*/
	
	printf("--Vers�o 1--\n");
	
	printf("Digite 3 valores em sequencia: ");
	scanf("%d %d %d", &iValor1, &iValor2, &iValor3);

	/*
		Se valor 1 for maior que valor 2 ser� verificado
		o valor 1 com o valor 3, assim resultando no maior 
		valor dentre os 3
	 */
	if(iValor1 > iValor2){
		if(iValor1 > iValor3){
			printf("Valor 1 � o maior: %d", iValor1);
		}else{
			printf("Valor 3 � o maior: %d", iValor3);
		}
	}
	/* 
		Caso valor 1 n�o for maior que valor 2
		o pivot muda, a partir de agora o valor a 
		ser verificado como o 3 ser� o valor 2
	*/
	else{
		if(iValor2 > iValor3){
			printf("Valor 2 � o maior: %d", iValor2);
		}else{
			printf("Valor 3 � o maior: %d", iValor3);
		}
	}
	
	/* 
		Op��o 2
			Verifica��o 1 a 1, sendo trocado para uma
			vari�vel auxiliar
	*/
	printf("\n--Vers�o 2--\n");

	/* Vari�vel auxiliar */
	int iMaiorValor;

	printf("Digite o valor 1: ");
	scanf("%d", &iValor1);
	/* 
		Sendo o valor 1 o primeiro a ser dado de entrada
		ser� considerado como o maior at� o momento
	*/
	iMaiorValor = iValor1;
	printf("Digite o valor 2: ");
	scanf("%d", &iValor2);
	/*
		verifica se o valor 2 � maior que o maior valor
		at� o momento, e caso for, ser� feita a troca do
		maior valor, e assim ser� feito at� a 3 entrada.
	*/
	if(iValor2 > iMaiorValor) iMaiorValor = iValor2;
	printf("Digite o valor 3: ");
	scanf("%d", &iValor3);
	if(iValor3 > iMaiorValor) iMaiorValor = iValor3;
	/* No fim ser� mostrado o conteudo do maior valor */
	printf("Maior valor � %d", iMaiorValor);

	return 0;
}