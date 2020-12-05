/*
    Algorithm: Gasolina/l no brasil
    Author: Oz�ias Souza
    Data: 01/12/2020
    Hours:  17:06:49
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: Se a gasolina fosse o mesmo valor cobrado nos USA
    Inputs: 
        Float -> Pre�o Gal�o de gasolina (USA)
        Float -> Taxa de convers�o (Dolar -> Real)
    Outputs: Float -> Pre�o da gasolina em reais
    Observations: 1 gal�o -> 3.7854 l
*/
#include <stdio.h> // Biblioteca padr�o da linguagem C
int main(void)
{
    /* Declarando vari�veis necess�rias */
    float fPrecoGalaoGasolinaUSA;
    float fTaxaConversaoUSA;
    float fPrecoLitroGasolinaBRL;
    const float fLitrosPorGalao = 3.7854f;

    /* Capturando dados do teclado */
    printf("Digite o preco do galao de gasolina no USA: ");
    scanf("%f", &fPrecoGalaoGasolinaUSA);
    printf("Digite a taxa de conversao USA para BRL: ");
    scanf("%f", &fTaxaConversaoUSA);
    
    /* Processando pre�o por litro no Brasil */
    fPrecoLitroGasolinaBRL = (fPrecoGalaoGasolinaUSA * fTaxaConversaoUSA) / fLitrosPorGalao;

    /* Exibindo o resultado */
    printf("O preco do litro de gasolina no Brasil e: %.3f", fPrecoLitroGasolinaBRL);


    return 0;
}