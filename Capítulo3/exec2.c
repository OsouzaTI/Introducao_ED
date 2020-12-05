/*
    Algorithm: Números em ordem crescente
    Author: Ozéias Souza
    Data: 04/12/2020
    Hours:  18:42:36
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Receba 3 números interos e imprima em ordem crescente
    Inputs: 
        Int -> Número 1
        Int -> Número 2
        Int -> Número 3
    Outputs: 
        Int -> Número em ordem 1
        Int -> Número em ordem 2
        Int -> Número em ordem 3
    Observations: É indiscutível que as estruturas de loops facilitam e muito
        na compactação dos códigos escritos, esse arquivo contém mais de 100
        linhas para coisas simples como mostrar uma sequência de 3 números em
        ordem crescente, apesar que essa praticidade tem um custo um pouco maior
        do se fosse feito apenas com ifs.
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
#include <locale.h> // Biblioteca para mudar o padrão de caracteres
int main(void)
{
    setlocale(LC_ALL,"Portuguese" ); // Mudando a linguagem, permitindo caracteres especiais
    
    int iNumero1;
    int iNumero2;
    int iNumero3;

    printf("Digite em sequência 3 números: ");
    scanf("%d %d %d", &iNumero1, &iNumero2, &iNumero3);

    /* 
        Existem várias respostas para essa pergunta, porem ao se tratar
        de verificar-mos manualmente usando if, matérial estudado no capítulo 3
        teremos um total de 3! (3 fatorial) possibilidades, ou seja, 6 possibilidades
        
        |||||||||||||||||||||||||||
        || MAPA DE POSSIBILIDADES||
        |||||||||||||||||||||||||||
        ||                       ||
        ||     n1 n2 n3 #1       ||
        ||     n2 n1 n3 #2       ||
        ||     n2 n3 n1 #3       ||
        ||                       ||
        ||     n3 n2 n1 #4       ||
        ||     n3 n1 n2 #5       ||
        ||     n1 n3 n2 #6       ||
        ||                       ||
        |||||||||||||||||||||||||||

        Possibilidades:
            n1 < n2 && n2 < n3 #1 
            n2 < n1 && n1 < n3 #2
            n2 < n3 && n3 < n1 #3

            n3 < n2 && n2 < n1 #4
            n3 < n1 && n1 < n2 #5
            n1 < n3 && n3 < n2 #6
    
    */
    printf("Solução 1\n");
    /*
        Solução 1:
            Estrutura com ifs não aninhados
    */
    if(iNumero1 <= iNumero2 && iNumero2 <= iNumero3)
        printf("%d %d %d", iNumero1, iNumero2, iNumero3);

    else if(iNumero2 <= iNumero1 && iNumero1 <= iNumero3)
        printf("%d %d %d", iNumero2, iNumero1, iNumero3);

    else if(iNumero2 <= iNumero3 && iNumero3 <= iNumero3)
        printf("%d %d %d", iNumero2, iNumero3, iNumero1);

    else if(iNumero3 <= iNumero2 && iNumero2 <= iNumero1)
        printf("%d %d %d", iNumero3, iNumero2, iNumero1);

    else if(iNumero3 <= iNumero1 && iNumero1 <= iNumero2)
        printf("%d %d %d", iNumero3, iNumero1, iNumero2);

    else if(iNumero1 <= iNumero3 && iNumero3 <= iNumero2)
        printf("%d %d %d", iNumero1, iNumero3, iNumero2);    

    printf("\nSolução 2\n");

    /* 
        Solução 2:
            Estrutura de ifs aninhados
    */
    if(iNumero1 <= iNumero2){
        if(iNumero2 <= iNumero3){
            /* 1 2 3 */
            printf("%d %d %d", iNumero1, iNumero2, iNumero3);
        }else{
            /* 1 3 2 */
            printf("%d %d %d", iNumero1, iNumero3, iNumero2);
        }
    }else if(iNumero2 <= iNumero1)
    {
        if(iNumero1 <= iNumero3){
            /* 2 1 3 */
            printf("%d %d %d", iNumero2, iNumero1, iNumero3);
        }else{
            /* 2 3 1 */
            printf("%d %d %d", iNumero2, iNumero3, iNumero1);
        }
    }else if(iNumero3 <= iNumero1)
    {
        if(iNumero1 <= iNumero2){
            /* 3 1 2 */
            printf("%d %d %d", iNumero3, iNumero1, iNumero2);
        }else{
            /* 3 2 1 */
            printf("%d %d %d", iNumero3, iNumero2, iNumero1);
        }
    }
    
    

    return 0;
}