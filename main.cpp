#include "Evaluador.h"
#include <iostream>
#include <list>
#include "NodoBinario.h"
#include "NodoTrinario.h"
#include "NodoNario.h"

using namespace std;

//Devuelve true si encuentra num dentro del arbol raiz
//2.5pts
bool existe(NodoTrinario* raiz, int num)
{
 if(raiz==NULL)
        return false;

    if(raiz->num == num)
        return true;

    return existe(raiz->izq,num) || existe(raiz->der,num) ||existe(raiz->medio,num);
return true;
}

//Devuelve true si encuentra num dentro del arbol raiz
//2.5pts
bool existe(NodoNario* raiz, int num)
{
int cont=0;
if(raiz == NULL)
return false;
if(raiz->num==num)

cont++;

return false;
}

//Devuelve la cantidad de veces que encuentre el numero "num" dentro del arbol "raiz"
//5pts
int contar(NodoBinario* raiz, int num)
{
int cont=0;
   if(raiz==NULL)
        return 0;

    contar(raiz->der,num);
    contar(raiz->izq,num);
    cont++;
    return cont;
}

//Dado un tablero bidiensional donde:
//0 representa los pasillos donde puedo caminar
//1 representa las paredes donde no puedo caminar
//2 representa el terreno dificil (quita un paso)
//la cantidad de casillas donde me puedo desplazar "pasos"
//Devuelve true si puedo llegar desde las coordenadas [y_inicial][x_inicial] hasta [y_destino][x_destino], de lo contrario devuelve false
//Solo se puede desplazar hacia arriba, abajo, izquierda y derecha
//5pts
bool puedoLLegar(int tablero[5][5],
            int x_inicial, int y_inicial,
            int x_destino, int y_destino,
            int pasos)
{
      if(x_inicial>=5 || x_inicial<0 || y_inicial>=5 || y_inicial<0)
        return false;
    if(tablero[y_inicial][x_inicial]==1)
        return false;
    if(tablero[y_destino][x_destino]==1)
        return false;
    if(x_destino>=5 || x_destino<0 || y_destino>=5 || y_destino<0)
        return false;
    if(x_inicial==x_destino && y_inicial==y_destino)
        return true;
    if(pasos<=0)
        return false;
    if(tablero[y_inicial][x_inicial]==2)
        --pasos;


    bool puedo_der = puedoLLegar(tablero,
                x_inicial+1,y_inicial,
                x_destino,y_destino,
                pasos-1);

    bool puedo_izq = puedoLLegar(tablero,
                x_inicial-1,y_inicial,
                x_destino,y_destino,
                pasos-1);

    bool puedo_arriba = puedoLLegar(tablero,
                x_inicial,y_inicial-1,
                x_destino,y_destino,
                pasos-1);

    bool puedo_abajo = puedoLLegar(tablero,
                x_inicial,y_inicial+1,
                x_destino,y_destino,
                pasos-1);

    return puedo_der || puedo_izq || puedo_arriba || puedo_abajo;
}



int main ()
{
    evaluar();

    return 1;
}
