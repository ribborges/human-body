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
#include <stdlib.h>
#include <graphics.h>
#include <locale.h>
#include <stdbool.h>

//Programa principal
main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declaracao das variaveis
    int x, y;

    //Cria a janela gráfica de 920x600, desenha a imagem padrão e move o cursor para as coordenadas 0,0
    initwindow(920,600,"Projeto AEDII");
    moveto(0,0);
    readimagefile("HumanBody.jpg",0,0,920,600);

    while(!kbhit()) // aguarda, em loop, até que uma tecla seja pressionada
    {
        //Printa na tela tradicional as coordenadas posicionadas pelo mouse
        printf("\nX=%d, Y=%d ", mousex(), mousey());

        //Botao bexiga
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 22 && mousey() <= 64)
        {
            x = mousex();
            y = mousey();
            readimagefile("bexiga.jpg",0,0,920,600);
        }

        //Botao cerebro
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 68 && mousey() <= 110)
        {
            x = mousex();
            y = mousey();
            readimagefile("cerebro.jpg",0,0,920,600);
        }

        //Botao coracao
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 113 && mousey() <= 155)
        {
            x = mousex();
            y = mousey();
            readimagefile("coracao.jpg",0,0,920,600);
        }

        //Botao estomago
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 159 && mousey() <= 201)
        {
            x = mousex();
            y = mousey();
            readimagefile("estomago.jpg",0,0,920,600);
        }

        //Botao figado
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 206 && mousey() <= 246)
        {
            x = mousex();
            y = mousey();
            readimagefile("figado.jpg",0,0,920,600);
        }

        //Botao intestino
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 250 && mousey() <= 292)
        {
            x = mousex();
            y = mousey();
            readimagefile("intestino.jpg",0,0,920,600);
        }

        //Botao lingua
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 307 && mousey() <= 349)
        {
            x = mousex();
            y = mousey();
            readimagefile("lingua.jpg",0,0,920,600);
        }

        //Botao olhos
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 353 && mousey() <= 395)
        {
            x = mousex();
            y = mousey();
            readimagefile("olhos.jpg",0,0,920,600);
        }

        //Botao pancreas
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 399 && mousey() <= 441)
        {
            x = mousex();
            y = mousey();
            readimagefile("pancreas.jpg",0,0,920,600);
        }

        //Botao pulmao
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 445 && mousey() <= 486)
        {
            x = mousex();
            y = mousey();
            readimagefile("pulmao.jpg",0,0,920,600);
        }

        //Botao rim
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 490 && mousey() <= 532)
        {
            x = mousex();
            y = mousey();
            readimagefile("rim.jpg",0,0,920,600);
        }

        //Botao traqueia
        if (mousex() >= 473 && mousex() <= 647 &&
            mousey() >= 536 && mousey() <= 578)
        {
            x = mousex();
            y = mousey();
            readimagefile("traqueia.jpg",0,0,920,600);
        }

        //Limpa
        if ((mousex() >= 0 && mousex() <= 450 &&
            mousey() >= 0 && mousey() <= 600) ||
            (mousex() >= 672 && mousex() <= 921 &&
            mousey() >= 0 && mousey() <= 600))
        {
            x = mousex();
            y = mousey();
            readimagefile("HumanBody.jpg",0,0,920,600);
        }
    }

    // fecha o modo gráfico e retorna ao modo de saída-padrão (texto)
    closegraph();
}

