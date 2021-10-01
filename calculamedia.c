#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float n1, float n2, char l);

int main()
{
    float nota1, nota2, soma;
    char letra;    
    
    while (letra != 'A' && letra != 'P' )
    {
        printf("A - media aritmetrica\n");
        printf("P - media ponderada\n");
        printf("Informe a letra do parametro: ");
        scanf("%c", &letra);
    }
    
    printf("\nInforme a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &nota2);
    
    soma = calculaMedia(nota1, nota2, letra);
    printf("\n Valor da media 'e: %.2f", soma);   

    return 0;
}

float calculaMedia(float n1, float n2, char l)
{
    float media;
    
    if (l == 'A')
    {
        media = (n1 + n2) / 2;       
    }else if (l == 'P') {
        media = (((n1 * 7) + (n2 * 3)) / 10);       
    }
    return media;
}
 