#include <iostream>
#include <cassert>
#include "lista.h"

Lista::~Lista()
{
    for (node *p; !isEmpty(); )//Percorre toda a lista até encontrar um nó vazio
    {
        p = primeiro_node -> proximo; // p é o segundo node
        delete primeiro_node; //apaga o primeiro node
        primeiro_node = p; // primeiro node recebe o valor do proximo
    }
}

void Lista::adc_lista_primeiro(int valor)
{
    primeiro_node = new node(valor, primeiro_node); // agora o primeiro node, é um node que aponta para o primeiro node antigo
    if(ultimo_node == 0) // se ultimo node for nul, só temos um node na nossa lista
        ultimo_node = primeiro_node;
}

void Lista::adc_lista_ultimo(int valor)
{
    if (ultimo_node != 0) //se o ultimo node nao for NULL
    {
        ultimo_node->proximo = new node(valor); // ultimo node aponta para o novo
        ultimo_node = ultimo_node -> proximo; //o novo node se torna o ultimo nó
    }
    else
        primeiro_node = ultimo_node = new node(valor); //se possui apenas um elemento, o node é o primeiro e ultimo
}

int Lista::deleta_primeiro()
{
    assert(!isEmpty());
    int elemento = primeiro_node -> info; // guarda a informação do nó
    node *tmp = primeiro_node; // tmp agora aponta para o primeiro_node
    
    if(primeiro_node == ultimo_node) //se possui apenas um elemento
        primeiro_node = ultimo_node = 0;
    else
        primeiro_node = primeiro_node -> proximo; // primeiro node passa ser o  segundo
    delete tmp;
    return elemento;
}

int Lista::deleta_ultimo()
{
    assert(!isEmpty());
    int elemento = ultimo_node -> info;
    
    if (ultimo_node == primeiro_node)
    {
        delete primeiro_node;
        primeiro_node = ultimo_node = 0;
    }
    else
    {
        node *tmp;
        for (tmp = primeiro_node; tmp->proximo != ultimo_node; tmp = tmp ->proximo); //Percorre a lista até o predecessor do ultimo
        delete ultimo_node;
        ultimo_node = tmp;
        ultimo_node -> proximo = 0;
    }
    return elemento;
}

void Lista::deleta_node(int valor)
{
    assert(!isEmpty());
    if(primeiro_node != 0) //Se nao for lista nula
    {
        if (primeiro_node == ultimo_node && valor == primeiro_node->info) //se possuir apenas 1 elemento na lista
        {
            delete primeiro_node;
            primeiro_node = ultimo_node = 0;
        }
        else if(valor == primeiro_node->info) //se o node que é deletado for o head
        {
            node *tmp = primeiro_node;
            primeiro_node = primeiro_node -> proximo;
            delete tmp;
        }
        else
        {
            node *pred, *tmp;
            for (pred = primeiro_node, tmp = primeiro_node -> proximo;
                    tmp != 0 && !(tmp -> info == valor);
                    pred = pred -> proximo, tmp = tmp -> proximo);
            if (tmp != 0)
            {
                pred -> proximo = tmp -> proximo;
                if(tmp == ultimo_node)
                    ultimo_node = pred;
                delete tmp;
            }
        }
    }
}

bool Lista::tem_na_lista(int valor) const
{
    node *tmp;
    for(tmp = primeiro_node; tmp != 0 && !(tmp -> info == valor); tmp = tmp -> proximo);
    return tmp != 0;
}
