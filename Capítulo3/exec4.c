/*
    Algorithm: Coordenadas Polares
    Author: Oz�ias Souza
    Data: 05/12/2020
    Hours:  14:37:08
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: O programa recebe coordenadas polares e os
        transforma para cartesianos.
    Inputs: 
        float -> Raio
        float -> �ngulo ( radianos )
    Outputs:  
        Float -> X
        Float -> Y
    Observations: 
*/
#include <stdio.h> // Biblioteca padr�o da linguagem C
#include <locale.h> // Biblioteca para mudar o padr�o de caracteres
#include <math.h> // Biblioteca padr�o de matem�tica em C

int main(void)
{
    setlocale(LC_ALL,"Portuguese" ); // Mudando a linguagem, permitindo caracteres especiais
    
    float fRaio;
    float fAngulo;
    float x, y;

    printf("Digite o radio: ");
    scanf("%f", &fRaio);
    printf("Digite o angulo: ");
    scanf("%f", &fAngulo);

    x = fRaio * cosf(fAngulo);
    y = fRaio * sinf(fAngulo);

    printf("O valor no plano correspondente � (%.3f ; %.3f) ", x, y);

    return 0;
}