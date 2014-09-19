#ifndef NODOTRINARIO_H
#define NODOTRINARIO_H

class NodoTrinario
{
public:
    int num;
    NodoTrinario *izq, *der, *medio;
    NodoTrinario(int num)
    {
        this->num=num;
        izq=NULL;
        der=NULL;
        medio=NULL;
    }
};

#endif // NODOTRINARIO_H
