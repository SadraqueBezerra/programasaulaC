#include <stdio.h>
#include <stdlib.h>

void Verifica(int N);
int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%s", &valor);
    Verifica(valor);
    system("pause>>null");
    return 0;
}
void Verifica(int N) {
    if(N%2==0)
        printf("Valor par");
    else
        printf("Valor impar");
    
    return;
}