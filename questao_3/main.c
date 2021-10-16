#include <stdio.h>
#include <stdlib.h>
#include "grafos.h"


int main()
{
    int eh_digrafo = 0, i , pai[7];
    Grafo* gr = cria_Grafo(7, 6, 1);

    insereAresta(gr, 0, 1, eh_digrafo, 337);
    insereAresta(gr, 0, 2, eh_digrafo, 1464);
    insereAresta(gr, 0, 3, eh_digrafo, 1846);
    insereAresta(gr, 0, 6, eh_digrafo, 2704);
    insereAresta(gr, 1, 2, eh_digrafo, 1235);
    insereAresta(gr, 1, 4, eh_digrafo, 2342);
    insereAresta(gr, 2, 3, eh_digrafo, 802);
    insereAresta(gr, 2, 4, eh_digrafo, 1121);
    insereAresta(gr, 3, 5, eh_digrafo, 740);
    insereAresta(gr, 3, 6, eh_digrafo, 867);
    insereAresta(gr, 4, 5, eh_digrafo, 1090);
    insereAresta(gr, 4, 6, eh_digrafo, 1258);
    insereAresta(gr, 5, 6, eh_digrafo, 187);

    printf("SFO = 0 || LAX = 1 || DFW = 2 || ORD = 3 || MIA = 4 || JFK = 5 || BOS = 6\n\n");

    algKruskal(gr, 0, pai);

    printf("Minimal Spanning Tree\n\n");

    for(i=0;i<7;i++)
        printf("o vertice %d eh pai do vertice %d na MST usando o algoritimo de Kruskal\n", pai[i],i);
    libera_Grafo(gr);

    return 0;
}
