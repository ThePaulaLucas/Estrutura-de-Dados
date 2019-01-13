#ifndef int_busca
#define int_busca

class Vector
{
    public:
        Vector(int indice)
        {
            vet = new int [indice];
            n = indice;
            numero_maximo = indice;
        }
        
        ~Vector()
        {
            destroiVetor();
        }
        
        int aleatorio(int);
       void destroiVetor();
       int getValor(int);
       void atribuiValorAleatorio(int);
       void atribuiValorCrescente();
       void atribuiValorDecrescente();
       void imprimeVetor();
       void quickSorting();
       void binarySearch(int, int*, int*);
       void linearSearch(int, int*);
        
    private:
        int n, numero_maximo, *vet;
};

void Vector::destroiVetor()
{
    delete [] vet;
}

int Vector::getValor(int valor)
{
    return vet[valor];
}

int Vector::aleatorio(int coef)
{
    srand(coef + time(NULL));
    return (rand() % (numero_maximo + 1));
}

void Vector::atribuiValorAleatorio(int coef)
{
    
    srand(coef + time(NULL));
    for (int i = 0; i < n; i++)
        vet[i] = rand() % (numero_maximo + 1);
}

void Vector::atribuiValorCrescente()
{
    for (int i = 0; i < n; i++)
        vet[i] = i;
}

void Vector::atribuiValorDecrescente()
{
    int c(0);
    for(int i = n - 1; i >= 0; i--)
    {
        vet[i] = c;
        c++;
    }
}

void Vector::imprimeVetor()
{
    for(int i = 0; i < n; i++)
        std::cout << vet[i] << " ";
    std::cout << std::endl;
}

void Vector::quickSorting()
{
    for(unsigned i = 0; i < n; ++i)
    {
        for(unsigned j = i + 1; j < n; ++j)
        {
            if(vet[i] > vet[j])
            {
                double aux(vet[i]);
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void Vector::binarySearch(int obj, int *q, int *count)
{
    int low_value, high_value, mid_value, aux(-1), aux1(0);
    
    //*q eh o ponteiro que aponta para o index da busca binaria
    low_value = 0;
    high_value = n - 1;
    
    if (obj == vet[low_value])  
    {
        *q = low_value;
        aux1++;
    }
    else if (obj == vet[high_value])
    {
        *q = high_value;
        aux1++;
    }
    else
    {
        while(low_value < high_value)
        {
            mid_value = low_value + ((high_value - low_value) / 2);
            
            if         (obj == vet[mid_value])
            {
                aux = 1;
                aux1++;
                break;
            }
            else if (obj < vet[mid_value])
                high_value = mid_value - 1;
            
            else
                low_value = mid_value + 1;
            
            aux1++;
        }

        if (aux == 1)
            *q = mid_value;
        else
            *q = -1;
    }
    
    *count = aux1;
}

void Vector::linearSearch(int obj, int *p)
{
    int aux1(0);
    *p = -1;
    
    //*p eh o ponteiro que aponta para o index da busca linear
    for (int i = 0; i <= numero_maximo; i++)
    {
        aux1++;
        if (vet[i] == obj)
        {
            *p = aux1 - 1;
            break;
        }
    }
}

#endif
