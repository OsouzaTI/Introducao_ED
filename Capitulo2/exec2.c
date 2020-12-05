/*
    Algorithm: Gasolina/l no brasil
    Author: Ozéias Souza
    Data: 01/12/2020
    Hours:  17:06:49
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Se a gasolina fosse o mesmo valor cobrado nos USA
    Inputs: 
        Float -> Preço Galão de gasolina (USA)
        Float -> Taxa de conversão (Dolar -> Real)
    Outputs: Float -> Preço da gasolina em reais
    Observations: 1 galão -> 3.7854 l
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
int main(void)
{
    /* Declarando variáveis necessárias */
    float fPrecoGalaoGasolinaUSA;
    float fTaxaConversaoUSA;
    float fPrecoLitroGasolinaBRL;
    const float fLitrosPorGalao = 3.7854f;

    /* Capturando dados do teclado */
    printf("Digite o preco do galao de gasolina no USA: ");
    scanf("%f", &fPrecoGalaoGasolinaUSA);
    printf("Digite a taxa de conversao USA para BRL: ");
    scanf("%f", &fTaxaConversaoUSA);
    
    /* Processando preço por litro no Brasil */
    fPrecoLitroGasolinaBRL = (fPrecoGalaoGasolinaUSA * fTaxaConversaoUSA) / fLitrosPorGalao;

    /* Exibindo o resultado */
    printf("O preco do litro de gasolina no Brasil e: %.3f", fPrecoLitroGasolinaBRL);


    return 0;
}