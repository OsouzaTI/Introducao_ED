/*
    Algorithm: Movimento Fisico
    Author: Ozéias Souza
    Data: 07/12/2020
    Hours:  20:25:56
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: recebe s0, v0, a e t
    Inputs: 
    Outputs: 
    Observations: 
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
#include <locale.h> // Biblioteca para mudar o padrão de caracteres
#include <math.h>
int main(void)
{
    setlocale(LC_ALL,"Portuguese" ); // Mudando a linguagem, permitindo caracteres especiais

    float fPosicaoInicial;
    float fVelocidadeInicial;
    float fAceleracao;
    float fInstante;
    float fPosicaoFinal;
    float fVelocidadeFinal;


    printf("Entre com a posição inicial: ");
    scanf("%f", &fPosicaoInicial);
    printf("Entre com a velocidade inicial: ");
    scanf("%f", &fVelocidadeInicial);
    printf("Entre com a aceleração: ");
    scanf("%f", &fAceleracao);
    printf("Entre com o instante: ");
    scanf("%f", &fInstante);

    if(fInstante < 0){
        printf("Não existe tempo negativo");
        return 0;
    }else{

        fPosicaoFinal = fPosicaoInicial +
            (fVelocidadeInicial * fInstante) +
            (fAceleracao * powf(fInstante, 2)) / 2.0;
        
        fVelocidadeFinal = fVelocidadeInicial +
            (fAceleracao * fInstante);
        
        printf("A posição final da partícula: %.3f\n", fPosicaoFinal);
        printf("A velocidade final: %.3f", fVelocidadeFinal);

    }



    return 0;
}