#ifndef LISTA_DUPLA_ENCADEADA
#define LISTA_DUPLA_ENCADEADA

class Node
{
    public:
        Node()
        {
            proximo = anterior = 0;
        }
        Node(int elemento, Node *prox = 0, Node *ant = 0)
        {
            info = elemento;
            proximo = prox;
            anterior = ant;
        }
        
    int info;
    Node *proximo, *anterior;
};

class Lista
{
    public:
        Lista()
        {
            primeiro = ultimo = 0;
        }
        
        ~Lista();
        
        int isEmpty()
        {
            return primeiro == 0;
        }
        
        void adc_primeiro(int);
        void adc_ultimo(int);
        int deleta_primeiro();
        int deleta_ultimo();
        void deleta_node(int);
        bool ta_na_lista(int) const;
    
    private:
        Node *primeiro, *ultimo;
};

#endif 
