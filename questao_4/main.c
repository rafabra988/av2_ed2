#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grafos.h"

int main()
{
    int vert1, vert2, peso, eh_digrafo=0, i, pai[6];
    Grafo *gr=cria_Grafo(6,6,1);

    FILE *arquivo = fopen("Comma Separated Values - grafo.csv","r");
    if(arquivo==NULL){
        perror("deu ruim");
        exit(1);
    }

    while(!feof(arquivo)){
        fscanf(arquivo, "%d,%d,%d", &vert1, &vert2, &peso);
        insereAresta(gr,vert1,vert2,eh_digrafo,peso);
    }

    algPRIM(gr,0,pai);
    for(i=0;i<6;i++){
        printf("o vertice %d eh pai do vertice %d na MST usando o algoritimo de Prim\n",pai[i],i);
    }

    libera_Grafo(gr);

    return 0;
}
