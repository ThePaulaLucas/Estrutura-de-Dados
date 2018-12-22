#ifndef lista_encadeada_simples
#define lista_encadeada_simples

class node
{
    public:
        node()
        {
            proximo = 0;
        }
        node(int inf, node* p = 0)
        {
            info = inf;
            proximo = p;
        }
        
        int info;
        node *proximo;
};

class Lista
{
    public:

        Lista()
        {
            primeiro_node = ultimo_node = 0;
        }
        
     ~Lista();
     
        int isEmpty()
        {
            return primeiro_node == 0;
        }
     
        void adc_lista_primeiro(int);
        void adc_lista_ultimo(int);
        int deleta_primeiro();
        int deleta_ultimo();
        void deleta_node(int);
        bool tem_na_lista(int) const;
        
    private:
        node *primeiro_node, *ultimo_node;
};

#endif
