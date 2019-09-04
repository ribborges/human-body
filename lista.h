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
#include <windows.h>
#include <stdlib.h>
#include <graphics.h>
#include <locale.h>
#include <stdbool.h>

struct no
{
  struct no *ant;
  int dado;
  struct no *prox;
};

typedef struct
{
    struct no *inicio;
    struct no *fim;
} listacircularde;

//Declaração das funções
void criaLista(listacircularde *q);
int  insereLista(listacircularde *q, int d);
int  navega(listacircularde q, int d);
void mostraLista(listacircularde q, int s);

//Função que cria a lista
void criaLista(listacircularde *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

//Função que insere um dado na lista
int  insereLista(listacircularde *q, int d)
{
    struct no *aux;
    aux = (struct no*) malloc(sizeof(struct no));
    if (aux == NULL)
        return 0;

    if (q->inicio == NULL)
    {
        aux->dado = d;
        q->inicio = aux;
        q->fim = aux;
        aux->prox = q->inicio;
        aux->ant = q->fim;
        return 1;
    }

    aux->dado = d;
    q->fim->prox = aux;
    aux->ant = q->fim;
    q->fim = aux;
    aux->prox = q->inicio;
    q->inicio->ant = aux;
    return 1;
}

//Função que ira retornar a resposta correta de acordo com o numero da questão
int  navega(listacircularde q, int d, int i)
{
    struct no *aux;

    aux = q.inicio;

    if (d == 0)
    {
        return aux->dado;
    }

    if (d == 1)
    {
        if (i == 2)
        {
            aux = aux->prox;
            return aux->dado;
        }

        if (i == 3)
        {
            aux = aux->prox->prox;
            return aux->dado;
        }

        if (i == 4)
        {
            aux = aux->prox->prox->prox;
            return aux->dado;
        }

        if (i == 5)
        {
            aux = aux->prox->prox->prox->prox;
            return aux->dado;
        }

        if (i == 6)
        {
            aux = aux->prox->prox->prox->prox->prox;
            return aux->dado;
        }

        if (i == 7)
        {
            aux = aux->prox->prox->prox->prox->prox->prox;
            return aux->dado;
        }

        if (i == 8)
        {
            aux = aux->prox->prox->prox->prox->prox->prox->prox;
            return aux->dado;
        }

        if (i == 9)
        {
            aux = aux->prox->prox->prox->prox->prox->prox->prox->prox;
            return aux->dado;
        }

        if (i == 10)
        {
            aux = aux->prox->prox->prox->prox->prox->prox->prox->prox->prox;
            return aux->dado;
        }

        if (i == 11)
        {
            aux = aux->prox->prox->prox->prox->prox->prox->prox->prox->prox->prox;
            return aux->dado;
        }

        if (i == 12)
        {
            aux = aux->prox->prox->prox->prox->prox->prox->prox->prox->prox->prox->prox;
            return aux->dado;
        }
    }
}

void mostraLista(listacircularde q, int s)
{
    struct no *aux;

    if (s == 0)
        aux = q.inicio;
    if (s == 1)
        aux = q.fim;

    if (aux == NULL)
        printf("\nLista vazia...\n\n");
    else
    {
            if (s == 0)
            {
                do
                {
                    printf("%3d-%3d", aux->dado, aux->prox->dado);
                    aux = aux->prox;
                } while (aux != q.inicio);
            }
            if (s == 1)
            {
                do
                {
                    printf("%3d-%3d", aux->dado, aux->ant->dado);
                    aux = aux->ant;
                } while (aux != q.fim);
            }
    }
}
