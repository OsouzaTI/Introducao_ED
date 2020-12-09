/*
    Algorithm: Pedra, papel e tesoura
    Author: Ozéias Souza
    Data: 08/12/2020
    Hours:  22:41:17
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Jogo do pedra, papel ou tesousa
    Inputs: 
    Outputs: 
    Observations: 
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
#include <locale.h> // Biblioteca para mudar o padrão de caracteres
#include <stdlib.h>
#include <time.h>


int main(void)
{
    setlocale(LC_ALL,"Portuguese" ); // Mudando a linguagem, permitindo caracteres especiais
    srand(time(NULL));
    system("cls");

    int computador;
    int jogador;

    
    printf("Escolha entre \n 1 - Pedra\n 2 - Papel\n 3 - Tesoura\nEscolha: ");
    scanf("%d", &jogador);

    computador = (rand() % 3)+1; /* Escolha do computador */
    if(computador == 1) printf("Computador: Pedra");
    if(computador == 2) printf("Computador: Papel");
    if(computador == 3) printf("Computador: Tesoura");
    printf("\nResultado: ");

    if(computador == 1 && jogador == 1) printf("Empate");
    if(computador == 1 && jogador == 2) printf("Jogador Ganhou");
    if(computador == 1 && jogador == 3) printf("Computador ganhou");
    if(computador == 2 && jogador == 1) printf("Computador ganhou");
    if(computador == 2 && jogador == 2) printf("Empate");
    if(computador == 2 && jogador == 3) printf("Jogador Ganhou");
    if(computador == 3 && jogador == 1) printf("Jogador Ganhou");
    if(computador == 3 && jogador == 2) printf("Computador Ganhou");
    if(computador == 3 && jogador == 3) printf("Empate");

    return 0;
}