#ifndef NODONARIO_H
#define NODONARIO_H

#include <list>          // std::list
using namespace std;

class NodoNario
{
public:
    int num;
    NodoNario*sig;
    list<NodoNario*>hijos;
    NodoNario(int num)
    {
        this->num=num;
    }
};

#endif // NODONARIO_H
