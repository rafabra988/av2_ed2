#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grafos.h"

int main()
{
    int eh_digrafo=0, pai[6],mat[6][6],i=0, j=1;
    Grafo *gr=cria_Grafo(6,6,1);

    FILE *arquivo = fopen("Comma Separated Values - grafo.csv","r");
    if(arquivo==NULL){
        perror("deu ruim");
        exit(1);
    }

    while(!feof(arquivo)){
        fscanf(arquivo, "%d,%d,%d,%d,%d,%d,%d", &mat[i][0],&mat[i][1],&mat[i][2],&mat[i][3],&mat[i][4],&mat[i][5],&mat[i][6]);
        i++;
    }

//    for(i=0;i<6;i++){
//        for(j=0;j<6;j++){
//            printf("%d ",mat[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");

    i=2;
    while(j<6){
        for(int h=i;h<7;h++)
            insereAresta(gr, h-1,j-1,eh_digrafo,mat[h][j]);
            //printf("(%d-%d %d)",h-1,j-1, mat[h][j]);
//        printf("\n");
        i+=1;
        j+=1;
    }

    algPRIM(gr,0,pai);
    for(i=0;i<6;i++){
        printf("o vertice %d eh pai do vertice %d na MST usando o algoritimo de Prim\n",pai[i],i);
    }

    libera_Grafo(gr);

    return 0;
}
