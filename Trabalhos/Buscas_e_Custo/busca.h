#ifndef int_busca
#define int_busca

class Vector
{
    public:
        Vector(int indice, int n_max)
        {
            vet = new int [indice];
            n = indice;
            max = n_max;
        }
        
        ~Vector()
        {
            delete vet;
        }
        
       void atribuiValor();
       void imprimeVetor();
       void quickSorting();
       void binarySearch(int, int*);
       void linearSearch(int, int*);
        
    private:
        int *vet;
        int n, max;
};

void Vector::atribuiValor()
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        vet[i] = rand() % (max + 1);
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

void Vector::binarySearch(int obj, int *p)
{
    int low_value, high_value, mid_value, aux(-1);
    
    low_value = 0;
    high_value = n - 1;
    
    while(low_value < high_value)
    {
        mid_value = (low_value + high_value) / 2;
        
        if         (obj == vet[mid_value])
        {
            aux = 1;
            break;
        }
        else if (obj < vet[mid_value])
        {
            high_value = mid_value;
        }
        else
        {
            low_value = mid_value;
        }
    }
    
    if (aux == 1)
        *p = mid_value;
    else
        *p = -1;
}

void Vector::linearSearch(int obj, int *p)
{
    *p = -1;
    
    for (unsigned i = 0; i < n; i++)
    {
        if (obj == vet[i])
        {
            *p = i;
            break;
        }
    }
}

#endif
