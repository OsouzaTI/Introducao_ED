/*
    Algorithm: Jogo par ou impar
    Author: Ozéias Souza
    Data: 08/12/2020
    Hours:  22:07:14
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Modificar código do jogo
    Inputs: 
    Outputs: 
    Observations: 
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
#include <locale.h> // Biblioteca para mudar o padrão de caracteres
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese" ); // Mudando a linguagem, permitindo caracteres especiais
    
    int escolha; /* Escolha binária : (0 par) (1 impar) */
    int usuario; /* escolha de número do usuario */
    int computador; /* Escolha de número do computador */
    system("cls");
    printf("Entre com sua escolha: 0 (par) ou 1 (impar): ");
    scanf("%d", &escolha);
    printf("Entre com seu número: ");
    scanf("%d", &usuario);

    srand(time(NULL)); /* Inicializa o gerador com time */
    computador = rand() % 10; /* número aleatório de 1 a 10 */
    printf("Computador: %d\n", computador);

    /*
        Se a soma do número do usuario
        com o número do computador for igual ao 
        valor da escolha do usuário, o vencedor é o usuario
        caso contrario, o computador ganha.
    */
    if( ((usuario+computador)%2) == escolha ){
        printf("Voce (usuario) ganhou!");
    }else{
        printf("Eu (computador) ganhou!");
    }

    return 0;
}