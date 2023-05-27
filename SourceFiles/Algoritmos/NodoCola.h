#include "../Libraries.h"

template <class T>
class NodoCola
{
public:
    T * elemento;
    NodoCola * next;

public:
    NodoCola(){};
    ~NodoCola(){};

    void insertarElementoCola(NodoCola *& frente, NodoCola *& fin, T * elementoClase)
    {
        //Creación del nuevo nodo
        NodoCola * nuevoNodo = new NodoCola();
        //Asignación del valor al nuevo nodo
        nuevoNodo->elemento = elementoClase;
        //Al ser una cola, el ultimo elemento apunta a NULL
        nuevoNodo->next = NULL;
        //Función lambda que evalua si la cola está vacía
        auto estaVacia = [&](){return (frente == NULL) ? true : false;};
        if (estaVacia()){frente = nuevoNodo;}
        else {fin->next = nuevoNodo;}
        fin = nuevoNodo;
    }
};