#include <iostream>
#include <random>
#include <time.h>
#include "busca.h"
#include "gtest/gtest.h"
#include "test.h"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}

/*
    int tamanho, n_max, procura, indexLinear, indexBinario, contadorBinario,  *p = &indexLinear, *q = &indexBinario, *count = &contadorBinario;

    std::cout << "Entre com o tamanho do vetor maximo: " << std::endl;
    std::cin >> tamanho;
    std::cout << std::endl << std::endl;
    
    for (int i = 10; i <= tamanho; i += 1500)
    {
        *p = *q = *count = 0;
       
        Vector vetor(i, i);
        vetor.atribuiValorAleatorio(i);
        vetor.quickSorting();
        procura = vetor.aleatorio(i);
        
        vetor.linearSearch(procura, p);

        vetor.binarySearch(procura, q, count);

        std::cout << i << " " << contadorBinario << " ";
        if (indexLinear == -1)
            std::cout << i << std::endl;
        else
            std::cout << indexLinear << std::endl;

        vetor.destroiVetor();
    }
*/
