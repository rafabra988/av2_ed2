#ifndef BUSCA_H_INCLUDED
#define BUSCA_H_INCLUDED

typedef struct grafo Grafo;

Grafo* cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado);

void libera_Grafo(Grafo* gr);

int insereAresta(Grafo* gr, int orig, int dest, int eh_digrafo, float peso);

int removeAresta(Grafo* gr, int orig, int dest, int eh_digrafo);

void imprime_Grafo(Grafo *gr);

void buscaProfundidade(Grafo *gr, int ini, int *visitado, int cont, int *caminho, int fim);

void buscaProfundidade_Grafo(Grafo *gr, int ini, int *visitado, int fim);

#endif // BUSCA_H_INCLUDED
