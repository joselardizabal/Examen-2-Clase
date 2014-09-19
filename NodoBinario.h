#ifndef NODOBINARIO_H
#define NODOBINARIO_H

class NodoBinario
{
public:
    int num;
    NodoBinario *izq, *der;
    NodoBinario(int num)
    {
        this->num=num;
        izq=NULL;
        der=NULL;
    }
};


#endif // NODOBINARIO_H
