#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[20];
    float valor1, valor2, salariobruto, FGTS, IR, NSS, totaldedescontos, salarioliquido, isento;

    printf("Digite um nome: ");
    scanf("%[^\n]s", nome);
    printf("\nInforme a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &valor1);
    printf("\nInforme o valor da sua hora: ");
    scanf("\n%f" &valor2);

    salariobruto = valor1 * valor2;
    INSS = 0.10 * salariobruto;
    FGTS = 0.11 * salariobruto;
    IR = 0.05 * salariobruto;
    totaldedescontos = INSS + IR;
    salarioliquido = salariobruto - totaldedescontos;

    printf("\nGerando folha de pagamento: ");
    printf("\nNome: %s",nome);
    printf("\nSalário bruto: R$%.2f", salariobruto);
    printf("\nIR: R$%2.f", IR);
    printf("\nINSS: R$%2.F", INSS);
    printf("\nFGTS: R$%2.F", FGTS);
    printf("\nTotal de desconto: R$%2.f", totaldedescontos);
    printf("\nSalário líquido: R$%2.f", salarioliquido);

    if(salariobruto <= 1000){
        printf("Isento!\n");
    }else if("salariobruto < 2000")
}