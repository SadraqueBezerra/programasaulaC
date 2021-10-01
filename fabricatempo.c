#include <stdio.h>
#include <stdlib.h>

void tempoDuracao(int tsegundos, int horas, int minutos, int segundos, int resto);

int main () {

    float t1, h, m, s, r;

    printf("\nInforme o valor em segundos da duracao da fabrica expressa: \n");
    scanf("%f", &t1);
    tempoDuracao(t1, h, m, s, r);

    return 0;
}

void tempoDuracao(int tsegundos, int horas, int minutos, int segundos, int resto) 
{    
    horas = tsegundos / 3600;
    resto = tsegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("\n%d segundo(s) equivalem a %d hora(s), %d minuto(s) e %d segundo(s)", tsegundos, horas, minutos, segundos);
    
    return;
}