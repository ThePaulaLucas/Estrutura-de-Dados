#include <iostream>
#include <cassert>
#include "lista-dupla.h"

Lista::~Lista()
{
    for(Node *p; !isEmpty(); )
    {
        p = primeiro -> proximo;
        delete primeiro;
        primeiro = p;
    }
}

void Lista::adc_primeiro(int elemento)
{
    if(isEmpty())
    {
        primeiro = new Node(elemento);
    }
    else
    {
        primeiro -> anterior = new Node(elemento, primeiro);
        primeiro = primeiro -> anterior;
    }
    if(ultimo == 0)
        ultimo = primeiro;
}

void Lista::adc_ultimo(int elemento)
{
    if (isEmpty())
    {
        ultimo = new Node(elemento);
        primeiro = ultimo;
    }
    else
    {
        Node *tmp;
        ultimo -> proximo = new Node(elemento, 0, ultimo);
        tmp = ultimo;
        ultimo = ultimo -> proximo;
        ultimo -> anterior = tmp;
        delete tmp;
    }
}

int Lista::deleta_primeiro()
{
    int aux = primeiro -> info;
   
    if(isEmpty())
    {
        std::cout << "ERROR: LISTA VAZIA!!" << std::endl;
        assert(!isEmpty());
        return 0;
    }
    else if(primeiro == ultimo)
    {
        delete primeiro;
        primeiro = ultimo = 0;

    }
    else
    {
        primeiro = primeiro -> proximo;
        delete primeiro -> anterior;
        primeiro -> anterior = 0;
    }
    
    return aux;
}

int Lista::deleta_ultimo()
{
    int aux = ultimo -> info;
    
    if(isEmpty())
    {
        std::cout << "ERROR: LISTA VAZIA!!" << std::endl;
        assert(!isEmpty());
    }
    else if(primeiro == ultimo)
    {
        delete primeiro;
        primeiro = ultimo = 0;
    }
    else
    {
        ultimo = ultimo -> anterior;
        delete ultimo-> proximo;
        ultimo -> proximo = 0;
    }
    
    return aux;
}

void Lista::deleta_node(int elemento)
{
    if(isEmpty())
    {
        std::cout << "ERROR: LISTA VAZIA!!" << std::endl;
        assert(!isEmpty());
    }
    else if(primeiro == ultimo)
    {
        delete primeiro;
        primeiro = ultimo = 0;
    }
    else
    {
        Node *tmp, *pred;
        for (tmp = primeiro; tmp != 0 && tmp -> info != elemento; tmp = tmp -> proximo);
        if(tmp != 0)
        {
            if(tmp == primeiro)
            {
                primeiro = primeiro -> proximo;
                delete primeiro -> anterior;
                primeiro -> anterior = 0;
            }
            else if(tmp == ultimo)
            {
                ultimo = ultimo -> anterior;
                delete ultimo-> proximo;
                ultimo -> proximo = 0;
            }
            else
            {
                pred = tmp -> proximo;
                pred -> anterior = tmp -> anterior;
                tmp -> anterior -> proximo = pred;
                delete tmp;
            }
        }
    }
}

bool Lista::ta_na_lista(int elemento) const
{
    Node *tmp;
    for (tmp = primeiro; tmp != 0 &&  tmp -> info != elemento; tmp = tmp -> proximo);
    return tmp != 0;
}
