/*
    Algorithm: Notas
    Author: Oz�ias Souza
    Data: 04/12/2020
    Hours:  22:02:40
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: Inicialmente lemos duas notas, posteriormente
        dependento do caso lemos mais uma
    Inputs: 
        Int -> Nota 1
        Int -> Nota 2
    Outputs: char** -> Nota de situa��o
    Observations: 
*/
#include <stdio.h> // Biblioteca padr�o da linguagem C
#include <locale.h> // Biblioteca para mudar o padr�o de caracteres
int main(void)
{
    setlocale(LC_ALL, "Portuguese"); // Mudando a linguagem, permitindo caracteres especiais
    
    float fNota1;
    float fNota2;
    float fMedia;
    printf("Digite as duas notas em sequ�ncia: ");
    scanf("%f %f", &fNota1, &fNota2);
    
    fMedia = (fNota1 + fNota2) / 2;
    /* Se a m�dia for maior que 5, e as duas s�o diferentes de 3 */
    if(fMedia > 5.0 && (fNota1 >= 3.0 && fNota2 >= 3.0)){
        printf("Sua m�dia foi %.2f, portanto est� Aprovado!", fMedia);
    }else{
        float fNota3;
        printf("� necess�rio uma terceira prova!!\n");
        printf("Entre com a pontua��o da prova 3: ");
        scanf("%f", &fNota3);

        if((fNota2 - fNota1) < 0){
            /* Nota 1 � maior que a nota 2 */
            fMedia = (fNota3 + fNota1) / 2;            
        }else{
            /* Nota 2 � maior que a nota 1 */
            fMedia = (fNota3 + fNota2) / 2;
        }
        
        /* M�dia recalculada */
        if(fMedia > 5) printf("Parab�ns, foi Aprovado!");
        else printf("Reprovado!");

    }


    return 0;
}