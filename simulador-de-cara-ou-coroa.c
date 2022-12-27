#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define CARA 1
#define COROA 2

int pontosJogador;
int pontosComputador;

void jogo();
void imprimeItem(int item);
int verifica(int p1, int p2);


int main()
{
    srand(time(NULL)); //gera números aleatórios diferentes

    printf("-------------------------------------------------------------------------------\n");
    printf("                               CARA - COROA                                    \n");
    printf("-------------------------------------------------------------------------------\n");

    int i;
    for(i=0; i<3; i++) 
    { //roda o jogo 3 vezes
    jogo();
    printf("-----------------------------------------------------------------------------------\n");
    }

    //mostra o resultado quem foi o melhor das 3 partidas
    printf("Melhor de 3: ");
    if(pontosJogador>pontosComputador)
    {
        printf("Parabéns você ganhou!\n");
    }
    else
    {
        printf("Você perdeu! mais sorte na proxima vez...\n");
    }

    printf("\n Obrigada por jogar!");

    system("pause>nil");
    return 0;
}

void jogo()
{
    int ladoJogador;
    int ladoSorteado;

    printf("\n Faça sua aposta 1.CARA 2.COROA \n Escolha: ");
    scanf("%d", &ladoJogador);

    //mostra sua aposta
    printf("\n Você escolheu: ");
    imprimeItem(ladoJogador);

    printf("\n Jogando moeda...");
    ladoSorteado = rand()%2+1; //sorteia 1 ou 2 

    //mostra qual lado saiu
    printf("\n A moeda caiu com ");
    imprimeItem(pontosComputador);
    printf("para cima.\n");

    int ganhador = verifica(ladoJogador, ladoSorteado);

    printf("\n");
    if(ganhador == 1)
    {
        printf(" Você acertou! Você ganhou 1 pponto.\n");
        pontosJogador++;
    }
    else if(ganhador ==2)
    {
        printf("Você errou! O computador ganhou 1 ponto.\n");
        pontosComputador++;
    }

    printf("\n");
}

void imprimeItem(int item)
{
    if(item == CARA)
    {
        printf("CARA");
    }
    else
    {
        printf("COROA");
    }
}

/*Função que verifica qual jogador ganhou e retorna 1 ou 2*/
int verifica(int p1, int p2)
{
    int ganhador;

    if(p1 == p2)
    {
        ganhador = 1;
    }
    else
    {
        ganhador = 2;
    }

    return ganhador;
}