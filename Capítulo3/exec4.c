/*
    Algorithm: Notas
    Author: Ozéias Souza
    Data: 04/12/2020
    Hours:  22:02:40
    Book: Introdução A Estrutura de dados com técnicas de programação em C
    About Code: Inicialmente lemos duas notas, posteriormente
        dependento do caso lemos mais uma
    Inputs: 
        Int -> Nota 1
        Int -> Nota 2
    Outputs: char** -> Nota de situação
    Observations: 
*/
#include <stdio.h> // Biblioteca padrão da linguagem C
#include <locale.h> // Biblioteca para mudar o padrão de caracteres
int main(void)
{
    setlocale(LC_ALL, "Portuguese"); // Mudando a linguagem, permitindo caracteres especiais
    
    float fNota1;
    float fNota2;
    float fMedia;
    printf("Digite as duas notas em sequência: ");
    scanf("%f %f", &fNota1, &fNota2);
    
    fMedia = (fNota1 + fNota2) / 2;
    /* Se a média for maior que 5, e as duas são diferentes de 3 */
    if(fMedia > 5.0 && (fNota1 >= 3.0 && fNota2 >= 3.0)){
        printf("Sua média foi %.2f, portanto está Aprovado!", fMedia);
    }else{
        float fNota3;
        printf("É necessário uma terceira prova!!\n");
        printf("Entre com a pontuação da prova 3: ");
        scanf("%f", &fNota3);

        if((fNota2 - fNota1) < 0){
            /* Nota 1 é maior que a nota 2 */
            fMedia = (fNota3 + fNota1) / 2;            
        }else{
            /* Nota 2 é maior que a nota 1 */
            fMedia = (fNota3 + fNota2) / 2;
        }
        
        /* Média recalculada */
        if(fMedia > 5) printf("Parabéns, foi Aprovado!");
        else printf("Reprovado!");

    }


    return 0;
}