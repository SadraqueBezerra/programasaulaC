#include <stdio.h>
#include <stdlib.h>

float conceito(float nota1, float nota2);

int main () {

    float n1, n2, m;
    char letra;

    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);
    
    m = conceito(n1, n2);
    
    if (m <= 4.9)
    {
        letra = 'D';
    }
    if (m >= 5.0 && m <= 6.9)
    {
        letra = 'C';
    }
    if (m >= 7.0 && m <= 8.9)
    {
        letra = 'B';
    }
    if (m >= 9.0 && m <= 10.0)
    {
        letra = 'A';
    }

    printf("\n            Nota                |  Conceito  ");
    printf("\n    Valor da media 'e: %.1f     |     %c     ", m, letra);
   
    return 0;
}

float conceito(float nota1, float nota2)
{   
    float media;
    media = ((nota1 + nota2) / 2);
      
    return media;
}
 