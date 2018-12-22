#include <iostream>
#include <random>
#include <time.h>
#include "busca.h"

int main()
{
    int tamanho, n_max, procura, index,  *p = &index;    
    
    std::cout << "Entre com o tamanho do vetor: " << std::endl;
    std::cin >> tamanho;
    std::cout << "Entre com o número máximo: " << std::endl;
    std::cin >> n_max;
    std::cout << "Entre com o número a ser procurado: " << std::endl;
    std::cin >> procura;
    std::cout << std::endl << std::endl;

    Vector Vector1(tamanho, n_max);
    Vector1.atribuiValor();
    
    Vector1.imprimeVetor();
    Vector1. linearSearch(procura, p);
    if (index != -1)
        std::cout << "Número na posição(Linear Search): " << index + 1 << std::endl;
    else
        std::cout << "Número não encontrado!" << std::endl;
    
    std::cout << std::endl << std::endl;
    std::cout << std::endl << std::endl;
    
    Vector1.quickSorting();
    Vector1.imprimeVetor();
    Vector1.binarySearch(procura, p);
    if (index != -1)
        std::cout << "Número na posição(Binary Search): " << index + 1 << std::endl;
    else
        std::cout << "Número não encontrado!" << std::endl;
        std::cout << std::endl << std::endl;
 
    return 0;
}
