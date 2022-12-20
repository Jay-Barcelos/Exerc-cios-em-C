#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b, soma;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Digite outro valor: ");
    scanf("%d", &b);

    soma = a + b;

    printf("O valor da soma = %d",soma);

    system("pause");
    return 0;
}

