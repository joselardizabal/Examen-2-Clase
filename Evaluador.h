#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <list>       // std::cin, std::cout

#include <list>          // std::list
#include "NodoBinario.h"
#include "NodoTrinario.h"
#include "NodoNario.h"

using namespace std;

void evaluar();

bool existe(NodoTrinario* raiz, int num);
bool existe(NodoNario* raiz, int num);
int contar(NodoBinario* raiz, int num);
bool puedoLLegar(int tablero[5][5],
            int x_inicial, int y_inicial,
            int x_destino, int y_destino,
            int pasos);

//bool existeCamino(int grafo[5][5], int inicio, int destino);
//
//set<int> obtenerAdjacentes(int grafo[5][5], int inicio, int profundidad);

#endif // EVALUADOR_H
