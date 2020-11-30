/*
    Algorithm: Conversor de Temperatura em Graus Celsius para Graus Fahrenheit
    Author: Ozéias Souza
    Data: 30/11/2020
    Hour:  12:49:08
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Um simples conversor de temperaturas para fins didáticos
    Inputs: Float -> Temperatura em C
    Outputs: Float -> Temperatura em F
*/

#include <stdio.h> // Biblioteca padrão da linguagem C
int main(void)
{
    float c;
    float f;

    /* Constant Of Fahrenheit */
    const unsigned char C_Fahreinheit = 32; // 1 byte 

    printf("Entre com o valor em Graus Celsius: ");
    scanf("%f", &c);

    /* Conversion C -> F: multiply by 1.8 and sum 32 */
    f = 1.8 * c + C_Fahreinheit;

    /* Print in console the output */
    printf("Output: %.3fC equivale a %.3fF", c, f);

    return 0;
}