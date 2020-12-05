/*
    Algorithm: Cédulas
    Author: Ozéias Souza
    Data: 02/12/2020
    Hours:  20:36:37
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Calcular montante
    Inputs: Float -> Montante
    Outputs: Char** -> Valor correspondente em notas
    Observations: Notas de 100, 5, 2, 1
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
int main(void)
{
    /* Variaveis representando as notas */
    int iMontante;
    int iNotas100;
    int iNotas5;
    int iNotas2;
    int iNotas1;

    /* Auxiliar para calculo com ponto flutuante */
    float aux;
    printf("Digite o montante: ");
    scanf("%d", &iMontante);
    
    /*
        Dividindo o montante por 100 teremos algo do tipo:
            iMontante = 120;
            aux = iMontante / 100; -> aux = 1.2f

            A parte decimal do valor :
                1 representa a quantidade de notas de 100
            A parte fracionaria:
                0.2 representa o restante

     */
    aux = iMontante / 100.0;
    /* Truncando o valor de aux */
    iNotas100 = (int)aux;
    /* Voltando o valor pra escala original */
    aux *= 100;
    /* Subtraindo o valor obtido de notas de 100 */
    aux -= iNotas100 * 100;
    /* Exibindo as notas de 100 e o valor restante */
    printf("Notas de 100: %d, valor restante: %.3f", iNotas100, aux);
    /* Segue o mesmo processo até o fim */
    aux /= 5.0;
    iNotas5 = (int)aux;
    aux *= 5;
    aux -= iNotas5 * 5;
    printf("\nNotas de 5: %d, valor restante: %.3f", iNotas5, aux);
    aux /= 2.0;
    iNotas2 = (int)aux;
    aux *= 2;
    aux -= iNotas2 * 2;
    printf("\nNotas de 2: %d, valor restante: %.3f", iNotas2, aux);
    iNotas1 = (int)aux;
    printf("\nNotas de 1: %d, valor restante: %.3f", iNotas1, aux);
    
    return 0;
}