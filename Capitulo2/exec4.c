/*
    Algorithm: Converter Radianos
    Author: Oz�ias Souza
    Data: 01/12/2020
    Hours:  20:49:40
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: Recebendo um valor em radianos, a saida deve ser em graus, minutos e segundos
    Inputs: 
    Outputs: 
    Observations: 
*/

#include <stdio.h> // Biblioteca padr�o da linguagem C
int main(void)
{
    const float fRadianosGraus = 57.29578f;
    float fRadianos;
    int fGraus;
    int fMinutos;
    int fSegundos;
    float aux;

    printf("Digite uma unidade em radianos: ");
    scanf("%f", &fRadianos);

    aux = fRadianos * fRadianosGraus;
    fGraus = (int)aux;
    aux -= fGraus;
    aux *= 60;
    fMinutos = (int)aux;
    aux -= fMinutos;
    aux *= 60;
    fSegundos = (int)aux;
    printf("%d Graus %d' %d''", fGraus, fMinutos, fSegundos);


    return 0;
}