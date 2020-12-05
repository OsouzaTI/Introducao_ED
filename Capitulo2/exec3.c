/*
    Algorithm: Segundos Transcorridos
    Author: Oz�ias Souza
    Data: 01/12/2020
    Hours:  17:53:07
    Book: Introdu��o A Estrutura de dados com t�cnicas de programa��o em C
    About Code: Ser� capturado o numeros de segundos transcorridos em um evento
    Inputs: Int -> Tempo em segundos transcorridos
    Outputs: Char* -> Texto no formato Hora-Minuto-Segundo
    Observations: Dever� conter zeros a esquerda    
*/
#include <stdio.h> // Biblioteca padr�o da linguagem C
int main(void)
{
    int iTempoTranscorrido;
    int iHoras;
    int iMinutos;
    int iSegundos;
    float aux;
    const float fSegundosHora = 3600;
    printf("Digite o tempo total do evento: ");
    scanf("%d", &iTempoTranscorrido);

    /* Vers�o sem refatora��o */
    {
        iHoras   = iTempoTranscorrido / (int)fSegundosHora;       
        iMinutos = ((iTempoTranscorrido / fSegundosHora) - iHoras) * 60;
        iSegundos = ((((iTempoTranscorrido / fSegundosHora) - iHoras) * 60) - iMinutos) * 60;
        printf("%02d:%02d:%02d", iHoras, iMinutos, iSegundos);
    }
    printf("\n");
    /* Vers�o Refatorada */
    {
        /* Auxiliar recebe o tempo transcorrido e � convertido para horas */
        aux  = iTempoTranscorrido / fSegundosHora; 
        /* iHoras recebe o valor de aux truncado pegando somente a parte decimal */
        iHoras = (int)aux;
        /* � subtraida de aux as Horas restando somente os minutos n�o convertidos */
        aux -= iHoras;
        /* Convers�o dos minutos */
        aux *= 60;
        /* Mesmo processo de antes */
        iMinutos = (int)aux;
        aux -= iMinutos;
        aux *= 60;
        iSegundos = (int)aux;
        printf("%02d:%02d:%02d", iHoras, iMinutos, iSegundos);
    }

    return 0;
}