/*
    Algorithm: Jogo par ou impar
    Author: Oz�ias Souza
    Data: 08/12/2020
    Hours:  22:07:14
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: Modificar c�digo do jogo
    Inputs: 
    Outputs: 
    Observations: 
*/
#include <stdio.h> // Biblioteca padr�o da linguagem C
#include <locale.h> // Biblioteca para mudar o padr�o de caracteres
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese" ); // Mudando a linguagem, permitindo caracteres especiais
    srand(time(NULL)); /* Inicializa o gerador com time */
    
    int escolha; /* Escolha bin�ria : (0 par) (1 impar) */
    int usuario; /* escolha de n�mero do usuario */
    int computador; /* Escolha de n�mero do computador */

    system("cls");
    printf("O computador ir� escolher...\n");
    escolha = rand() % 2;
    printf("Escolha do computador: %d -> ", escolha);
    printf( escolha % 2 == 0 ? "PAR" : "IMPAR" );
    printf("\n"); /* Quebra de linha */
    printf("Entre com seu n�mero: ");
    scanf("%d", &usuario);

    computador = rand() % 10; /* n�mero aleat�rio de 1 a 10 */
    printf("Computador: %d\n", computador);

    /*
        Se a soma do n�mero do usuario
        com o n�mero do computador for igual ao 
        valor da escolha do usu�rio, o vencedor � o usuario
        caso contrario, o computador ganha.
    */
    if( !(((usuario+computador)%2) == escolha) ){
        printf("Voce (usuario) ganhou!");
    }else{
        printf("Eu (computador) ganhou!");
    }

    return 0;
}

















