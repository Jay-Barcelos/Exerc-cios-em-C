#include <stdio.h>
#include <stdlib.h>

//https://www.youtube.com/watch?v=3JLFZWxTruM  video do código

char xadrez[8] [8] = {
    { 'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T' },
    { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
    { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
    { 't', 'c', 'b', 'q', 'k', 'b', 'c', 't' },
    };

int pintarTelaTexto()
{
    system("CLS");
    int lin, col;
    for (lin=0; lin < 8; lin++)
    {
        for (col=0; col < 8; col++)
        {
            printf("\xB2");
        }
        printf("\n");
    }
}

int main()
{
    pintarTelaTexto();
    getch();
    return 0;
}