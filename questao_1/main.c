#include <stdio.h>
#include <stdlib.h>
#include "busca.h"

int main(){
    int eh_digrafo = 0;
    Grafo* gr = cria_Grafo(37, 5, 0);

    insereAresta(gr, 1, 2, eh_digrafo, 0);
    insereAresta(gr, 2, 6, eh_digrafo, 0);
    insereAresta(gr, 2, 3, eh_digrafo, 0);
    insereAresta(gr, 3, 8, eh_digrafo, 0);
    insereAresta(gr, 3, 4, eh_digrafo, 0);
    insereAresta(gr, 4, 17, eh_digrafo, 0);
    insereAresta(gr, 8, 9, eh_digrafo, 0);
    insereAresta(gr, 8, 7, eh_digrafo, 0);
    insereAresta(gr, 7, 12, eh_digrafo, 0);
    insereAresta(gr, 12, 11, eh_digrafo, 0);
    insereAresta(gr, 11, 18, eh_digrafo, 0);
    insereAresta(gr, 11, 10, eh_digrafo, 0);
    insereAresta(gr, 10, 5, eh_digrafo, 0);
    insereAresta(gr, 10, 25, eh_digrafo, 0);
    insereAresta(gr, 25, 30, eh_digrafo, 0);
    insereAresta(gr, 25, 26, eh_digrafo, 0);
    insereAresta(gr, 26, 32, eh_digrafo, 0);
    insereAresta(gr, 32, 33, eh_digrafo, 0);
    insereAresta(gr, 32, 31, eh_digrafo, 0);
    insereAresta(gr, 12, 19, eh_digrafo, 0);
    insereAresta(gr, 19, 20, eh_digrafo, 0);
    insereAresta(gr, 20, 28, eh_digrafo, 0);
    insereAresta(gr, 28, 27, eh_digrafo, 0);
    insereAresta(gr, 27, 24, eh_digrafo, 0);
    insereAresta(gr, 24, 23, eh_digrafo, 0);
    insereAresta(gr, 28, 34, eh_digrafo, 0);
    insereAresta(gr, 34, 35, eh_digrafo, 0);
    insereAresta(gr, 35, 36, eh_digrafo, 0);
    insereAresta(gr, 35, 22, eh_digrafo, 0);
    insereAresta(gr, 22, 21, eh_digrafo, 0);
    insereAresta(gr, 21, 29, eh_digrafo, 0);
    insereAresta(gr, 21, 14, eh_digrafo, 0);
    insereAresta(gr, 14, 13, eh_digrafo, 0);
    insereAresta(gr, 13, 15, eh_digrafo, 0);
    insereAresta(gr, 15, 16, eh_digrafo, 0);

    int vis[37], fim=36;

    buscaProfundidade_Grafo(gr, 1, vis, fim);

    libera_Grafo(gr);


    return 0;
}
