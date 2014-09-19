#include "Evaluador.h"

void evaluar()
{
    double nota =0;

    NodoTrinario* nt1=new NodoTrinario(1);
    NodoTrinario* nt2=new NodoTrinario(2);
    NodoTrinario* nt3=new NodoTrinario(3);
    NodoTrinario* nt4=new NodoTrinario(4);
    NodoTrinario* nt5=new NodoTrinario(5);
    NodoTrinario* nt6=new NodoTrinario(6);
    NodoTrinario* nt7=new NodoTrinario(7);
    NodoTrinario* nt8=new NodoTrinario(8);
    NodoTrinario* nt9=new NodoTrinario(9);

    nt1->izq = nt2;
    nt1->medio = nt3;
    nt1->der = nt4;

    nt2->izq = nt5;
    nt2->medio = nt6;

    nt6->izq = nt7;

    nt3->izq = nt8;
    nt3->medio = nt9;

    cout<<"existe() - trinario:\t";
    if(!existe(nt1,10) && !existe(nt1,12) && !existe(nt2,1) && existe(nt1,1) && existe(nt1,5) && existe(nt6,7))
    {
        cout<<"Correcto"<<endl;
        nota+=2.5;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    NodoNario* n1=new NodoNario(1);
    NodoNario* n2=new NodoNario(2);
    NodoNario* n3=new NodoNario(3);
    NodoNario* n4=new NodoNario(4);
    NodoNario* n5=new NodoNario(5);
    NodoNario* n6=new NodoNario(1);
    NodoNario* n7=new NodoNario(1);
    NodoNario* n8=new NodoNario(2);

    n1->hijos.push_back(n2);
    n1->hijos.push_back(n3);

    n2->hijos.push_back(n4);
    n4->hijos.push_back(n5);

    n5->hijos.push_back(n6);
    n5->hijos.push_back(n7);
    n5->hijos.push_back(n8);

    cout<<"existe() - nario:\t";
    if(!existe(n1,10) && !existe(n1,12) && !existe(n8,1) && existe(n1,1) && existe(n1,5) && existe(n5,2))
    {
        cout<<"Correcto"<<endl;
        nota+=2.5;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoBinario* nb1=new NodoBinario(1);
    NodoBinario* nb2=new NodoBinario(2);
    NodoBinario* nb3=new NodoBinario(3);
    NodoBinario* nb4=new NodoBinario(4);
    NodoBinario* nb5=new NodoBinario(5);
    NodoBinario* nb6=new NodoBinario(1);
    NodoBinario* nb7=new NodoBinario(2);
    NodoBinario* nb8=new NodoBinario(1);

    nb1->izq=nb2;
    nb1->der=nb3;

    nb3->der=nb4;

    nb4->izq=nb5;
    nb5->izq=nb6;

    nb2->izq=nb7;
    nb2->der=nb8;

    cout<<"contar():\t\t";
    if(contar(nb1,1)==3 && contar(nb1,2)==2  && contar(nb1,3)==1  && contar(nb1,50)==0 && contar(nb7,1)==0)
    {
        cout<<"Correcto"<<endl;
        nota+=5;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }



    int arr[5][5]= {{0,1,1,0,0},
                    {0,1,0,0,0},
                    {0,1,1,0,1},
                    {0,1,2,0,1},
                    {0,0,0,1,1}};
    cout<<"puedoLLegar():\t\t";
    if(!puedoLLegar(arr,0,0,2,1,11) && puedoLLegar(arr,0,0,2,1,12))
    {
        cout<<"Correcto"<<endl;
        nota+=5;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
