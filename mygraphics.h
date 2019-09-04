/*
    Projeto Corpo Humano
    AEDII - Lab.AEDII
    Richard de Carvalho Borges - 634853
    Thiago Fonsato Alves - 622022
                                        */

/*
    Referências Bibliográficas:

    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-sistema-excretor.htm#resposta-551
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-pulmao.htm#resposta-4765
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-pancreas.htm#resposta-3745
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-estrutura-interna-dos-olhos.htm#resposta-3651
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-paladar.htm#resposta-2697
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-intestino-delgado.htm#resposta-4241
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-figado.htm#resposta-2900
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-digestao.htm#resposta-469
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-coracao.htm#resposta-2723
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-cerebro.htm#resposta-4230
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-sistema-respiratorio.htm
*/

//Inclusão de biblíotecas
#include <stdio.h>
#include <graphics.h>

//Declaração das funções
void btn(int x1, int y1, int x2, int y2, char rotulo[30]);
void checkbox(int x1, int y1, int x2, int y2);
void checkboxC(int x1, int y1, int x2, int y2);

//Função que desenha os botões
void btn(int x1, int y1, int x2, int y2, char rotulo[30])
{
    setfillstyle(1,8);
    bar(x1,y1,x2,y2);

    setbkcolor(8);
    setcolor(15);
    outtextxy(x1 + ((x2-x1-(strlen(rotulo)*8))/2) + 2, y1+8, rotulo);
}

//Função que desejha as checkbox
void checkbox(int x1, int y1, int x2, int y2)
{
    setfillstyle(1,15);
    bar(x1,y1,x2,y2);

    setbkcolor(15);
    setcolor(16);
    outtextxy(x1 + ((x2-x1-(strlen("")*8))/2) + 2, y1+9, "");
}

//Função que desejha as checkbox preenchidas
void checkboxC(int x1, int y1, int x2, int y2)
{
    setfillstyle(1,15);
    bar(x1,y1,x2,y2);

    setfillstyle(1,4);
    bar(x1+6,y1+6,x2-6,y2-6);
}

