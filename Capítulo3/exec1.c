/*
    Algorithm: Maior número de 3 valores inteiros
    Author: Ozéias Souza
    Data: 04/12/2020
    Hours:  17:55:58
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Receber 3 valores inteiro e mostrar o maior
    Inputs: 
        Int -> valor 1
        Int -> valor 2
        Int -> valor 3
    Outputs: Int -> Maior valor
    Observations: Uma variável auxiliar pode melhorar bastante a leitura
		do código, será assim sempre?
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");

	int iValor1;
	int iValor2;
	int iValor3;

	/*
		Opção 1
			Verificação com as 3 variaveis
	*/
	
	printf("--Versão 1--\n");
	
	printf("Digite 3 valores em sequencia: ");
	scanf("%d %d %d", &iValor1, &iValor2, &iValor3);

	/*
		Se valor 1 for maior que valor 2 será verificado
		o valor 1 com o valor 3, assim resultando no maior 
		valor dentre os 3
	 */
	if(iValor1 > iValor2){
		if(iValor1 > iValor3){
			printf("Valor 1 é o maior: %d", iValor1);
		}else{
			printf("Valor 3 é o maior: %d", iValor3);
		}
	}
	/* 
		Caso valor 1 não for maior que valor 2
		o pivot muda, a partir de agora o valor a 
		ser verificado como o 3 será o valor 2
	*/
	else{
		if(iValor2 > iValor3){
			printf("Valor 2 é o maior: %d", iValor2);
		}else{
			printf("Valor 3 é o maior: %d", iValor3);
		}
	}
	
	/* 
		Opção 2
			Verificação 1 a 1, sendo trocado para uma
			variável auxiliar
	*/
	printf("\n--Versão 2--\n");

	/* Variável auxiliar */
	int iMaiorValor;

	printf("Digite o valor 1: ");
	scanf("%d", &iValor1);
	/* 
		Sendo o valor 1 o primeiro a ser dado de entrada
		será considerado como o maior até o momento
	*/
	iMaiorValor = iValor1;
	printf("Digite o valor 2: ");
	scanf("%d", &iValor2);
	/*
		verifica se o valor 2 é maior que o maior valor
		até o momento, e caso for, será feita a troca do
		maior valor, e assim será feito até a 3 entrada.
	*/
	if(iValor2 > iMaiorValor) iMaiorValor = iValor2;
	printf("Digite o valor 3: ");
	scanf("%d", &iValor3);
	if(iValor3 > iMaiorValor) iMaiorValor = iValor3;
	/* No fim será mostrado o conteudo do maior valor */
	printf("Maior valor é %d", iMaiorValor);

	return 0;
}