#include <stdio.h>
#include "math.h"

/* Função para calcular o expoente */
float potencia(float entrada, int base){
    /* Se menor que retorna -1 informando erro */
    if(base < 1) return -1;

    /* Começa com o proprio (x1) */
    float value = 1;
    
    /* Auxiliar do loop */
    int temp = base;

    while(temp-- >= 1) value *= entrada;

    /* retorna o valor processado */
    return value;
}