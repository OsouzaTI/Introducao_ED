/*
    Algorithm: Volume Esf�rico
    Author: Oz�ias Souza
    Data: 30/11/2020
    Hours:  13:41:09
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: Dado um valo do raio calcular o volume
    Inputs: Float -> Raio da esfera
    Outputs: Float -> Volume
*/
#include <stdio.h> // Biblioteca padr�o da linguagem C
#include "../libs/math.h"

int main(void)
{
    /* Raio da esfera */
    float r;
    /* volume */
    float v;
    
    printf("Entre com o raio da esfera: ");
    scanf("%f", &r);

    /* Raio ao cubo */
    r = potencia(r, 3);

    /* Processamento do volume */
    v = 4 / 3.0 * PI * r; // Caso importante: Divis�o retornar� 0 se n�o usar o ".0"


    printf("O volume da esfera : %.3f", v);

    return 0;
}