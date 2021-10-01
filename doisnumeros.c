#include <stdio.h>
#include <stdlib.h>

void calculaSoma(float valor1, float valor2);
int main() 
{
    float Num1, Num2;

    printf("Informe o primeiro numero: ");
    scanf("%f", &Num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &Num2);
    calculaSoma(Num1, Num2);

    return 0;
}

void calculaSoma(float valor1, float valor2) 
{    
    float soma;
    soma = valor1 + valor2;
    printf("Valor da soma 'e: %.2f", soma);
    
    return;
}