/*
    Algorithm: Coordenadas Polares
    Author: Ozéias Souza
    Data: 05/12/2020
    Hours:  14:37:08
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: O programa recebe coordenadas polares e os
        transforma para cartesianos.
    Inputs: 
        float -> Raio
        float -> Ângulo ( radianos )
    Outputs:  
        Float -> X
        Float -> Y
    Observations: 
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
#include <locale.h> // Biblioteca para mudar o padrão de caracteres
#include <math.h> // Biblioteca padrão de matemática em C

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

    printf("O valor no plano correspondente é (%.3f ; %.3f) ", x, y);

    return 0;
}