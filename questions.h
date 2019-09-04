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
void qquest(int x);
void contPontos(int x, int pontos);

//Função que conta e verifica os pontos, exibindo uma mensagem no final do quiz
void contPontos(int x, int pontos)
{
    if (x == 13)
    {
        if (pontos == 0)
        {
            readimagefile("p0.jpg",0,0,920,600);
            outtextxy(140, 280, "Que horrível! Você errou tudo! Falta-lhe conhecimento!!!");
            outtextxy(140, 200, "PONTOS: 0 de 12");
        }

        if (pontos == 1)
        {
            readimagefile("p1.jpg",0,0,920,600);
            outtextxy(140, 280, "Horrível!");
            outtextxy(140, 200, "PONTOS: 1 de 12");
        }

        if (pontos == 2)
        {
            readimagefile("p2.jpg",0,0,920,600);
            outtextxy(140, 280, "Péssimo!");
            outtextxy(140, 200, "PONTOS: 2 de 12");
        }

        if (pontos == 3)
        {
            readimagefile("p3.jpg",0,0,920,600);
            outtextxy(140, 280, "Muito ruim!");
            outtextxy(140, 200, "PONTOS: 3 de 12");
        }

        if (pontos == 4)
        {
            readimagefile("p4.jpg",0,0,920,600);
            outtextxy(140, 280, "Bem ruim!");
            outtextxy(140, 200, "PONTOS: 4 de 12");
        }

        if (pontos == 5)
        {
            readimagefile("p5.jpg",0,0,920,600);
            outtextxy(140, 280, "Regular!");
            outtextxy(140, 200, "PONTOS: 5 de 12");
        }

        if (pontos == 6)
        {
            readimagefile("p6.jpg",0,0,920,600);
            outtextxy(140, 280, "Você é melhor que isso!");
            outtextxy(140, 200, "PONTOS: 56 de 12");
        }

        if (pontos == 7)
        {
            readimagefile("p7.jpg",0,0,920,600);
            outtextxy(140, 280, "Precisa melhorar seu desempenho!");
            outtextxy(140, 200, "PONTOS: 7 de 12");
        }

        if (pontos == 8)
        {
            readimagefile("p8.jpg",0,0,920,600);
            outtextxy(140, 280, "Muito bem!");
            outtextxy(140, 200, "PONTOS: 8 de 12");
        }

        if (pontos == 9)
        {
            readimagefile("p9.jpg",0,0,920,600);
            outtextxy(140, 280, "UAU! Parabéns");
            outtextxy(140, 200, "PONTOS: 9 de 12");
        }

        if (pontos == 10)
        {
            readimagefile("p10.jpg",0,0,920,600);
            outtextxy(140, 280, "Incrível!");
            outtextxy(140, 200, "PONTOS: 10 de 12");
        }

        if (pontos == 11)
        {
            readimagefile("p11.jpg",0,0,920,600);
            outtextxy(140, 280, "UAU, você foi muito bem!");
            outtextxy(140, 200, "PONTOS: 11 de 12");
        }

        if (pontos == 12)
        {
            readimagefile("p12.jpg",0,0,920,600);
            outtextxy(140, 280, "PARABÉNS, você foi INCRÍVEL!!! Pontuação máxima!");
            outtextxy(140, 200, "PONTOS: 12 de 12");
        }
    }
}

//Função que desenha as questoes e as alternativas na tela do quiz
void qquest(int x)
{
    if (x == 1)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "1- O hormônio ADH atua sobre os túbulos renais promovendo absorção de água do filtrado glomerular. A deficiência na");
        outtextxy(90, 110, "secreção desse hormônio faz com que a pessoa produza:");
        outtextxy(140, 200, "a) muita urina, com alta concentração de excreções.");
        outtextxy(140, 240, "b) muita urina, com baixa concentração de excreções.");
        outtextxy(140, 280, "c) pouca urina, com alta concentração de excreções.");
        outtextxy(140, 320, "d) pouca urina, com baixa concentração de excreções.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 2)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "2- Entre as funções relatadas a seguir, qual não pode ser completamente associada ao cérebro?");
        outtextxy(140, 200, "a) Equilíbrio");
        outtextxy(140, 240, "b) Memória");
        outtextxy(140, 280, "c) Linguagem");
        outtextxy(140, 320, "d) Consciência");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 3)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "3- O coração realiza contrações rítmicas que garantem que o sangue seja impulsionado pelo corpo. Quando ocorre a");
        outtextxy(90, 110, "contração da câmera cardíaca, denominamos o movimento de");
        outtextxy(140, 200, "a) sístole.");
        outtextxy(140, 240, "b) pressão arterial.");
        outtextxy(140, 280, "c) peristáltico.");
        outtextxy(140, 320, "d) diástole.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 4)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "4- Uma pessoa com deficiência na produção de ácido clorídrico pelas glândulas da parede do estômago provavelmente");
        outtextxy(90, 110, "tem dificuldade de digerir:");
        outtextxy(140, 200, "a) carne");
        outtextxy(140, 240, "b) arroz");
        outtextxy(140, 280, "c) batata");
        outtextxy(140, 320, "d) pão");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 5)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "5- O fígado desempenha importantes papeis na manutenção da saúde humana. Analise as alternativas a seguir e");
        outtextxy(90, 110, "marque aquela que não indica uma função que pode ser atribuída ao fígado.");
        outtextxy(140, 200, "a) Secretar bile");
        outtextxy(140, 240, "b) Armazenamento de glicose");
        outtextxy(140, 280, "c) Produção de proteínas");
        outtextxy(140, 320, "d) Produção dos hormônios insulina e glucagon.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 6)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "6- No intestino delgado, observa-se a presença de glândulas que produzem uma secreção rica em bicarbonato que");
        outtextxy(90, 110, "diminui a acidez do quimo e, consequentemente, ajuda na ação das enzimas presentes no suco pancreático.");
        outtextxy(90, 130, "Essas glândulas são chamadas de:");
        outtextxy(140, 200, "a) Células caliciformes");
        outtextxy(140, 240, "b) Glândulas de Brunner");
        outtextxy(140, 280, "c) Glândulas de Peyer");
        outtextxy(140, 320, "d) Glândulas de Lieberkühn");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 7)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "7- Nas papilas gustativas estão localizados os botões gustativos, que são formados por células sensoriais.");
        outtextxy(90, 110, "Essas células especializadas em sentir o gosto dos alimentos podem ser classificadas como");
        outtextxy(140, 200, "a) mecanorreceptores");
        outtextxy(140, 240, "b) quimiorreceptores");
        outtextxy(140, 280, "c) fonorreceptores");
        outtextxy(140, 320, "d) fotorreceptores");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 8)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "8- A forma arredondada do olho é garantida graças a um material em consistência de gel localizado logo após a");
        outtextxy(90, 110, "lente. Esse material é formado principalmente por água, fibras e ácido hialurônico e recebe o nome de");
        outtextxy(140, 200, "a) Pupila");
        outtextxy(140, 240, "b) Cristalino");
        outtextxy(140, 280, "c) Humor aquoso");
        outtextxy(140, 320, "d) Humor vítreo");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 9)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "9- Após a refeição, o pâncreas lança na corrente sanguínea uma substância que garante a estabilidade da concentração");
        outtextxy(90, 110, "de glicose no sangue. Analise as alternativas e marque aquela que indica corretamente o nome dessa substância:");
        outtextxy(140, 200, "a) amilase");
        outtextxy(140, 240, "b) insulina");
        outtextxy(140, 280, "c) lipase");
        outtextxy(140, 320, "d) glucagon");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 10)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "10- Os pulmões são órgãos que se destacam por sua consistência esponjosa. Essa característica deve-se à presença dos(as):");
        outtextxy(140, 200, "a) brônquios");
        outtextxy(140, 240, "b) bronquíolos");
        outtextxy(140, 280, "c) alvéolos");
        outtextxy(140, 320, "d) traqueias");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 11)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "11- Sabemos que a urina é formada nos rins, mais precisamente nos néfrons. O processo inicia-se com a filtração do");
        outtextxy(90, 110, "sangue na região:");
        outtextxy(140, 200, "a) da cápsula renal");
        outtextxy(140, 240, "b) do túbulo renal");
        outtextxy(140, 280, "c) do túbulo contorcido proximal");
        outtextxy(140, 320, "d) da alça néfrica");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 12)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "12- O que é a ventilação pulmonar?");
        outtextxy(140, 200, "a) É a passagem do ar nas vias respiratórias.");
        outtextxy(140, 240, "b) É a circulação do ar no corpo humano.");
        outtextxy(140, 280, "c) É o acto de circulação do ar.");
        outtextxy(140, 320, "d) É a presença do ar dentro do pulmões.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }
}
