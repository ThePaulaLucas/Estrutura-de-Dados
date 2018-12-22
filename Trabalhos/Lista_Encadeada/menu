#include <iostream>
#include "lista.cpp"

void menu()
{
    std::cout << "Escolha uma função: "<< std::endl;
    std::cout << "1 - adc um elemento no começo da lista" << std::endl;
    std::cout << "2 - adc um elemento no final lista "<< std::endl;
    std::cout << "3 - remover um elemento no começo" << std::endl;
    std::cout << "4 - remover um elemento no final" << std::endl; 
    std::cout << "5 - remover um nó" << std::endl;
    std::cout << "6 - Procurar na lista" << std::endl;
    std::cout << "0 - fechar programa" << std::endl << std::endl;
}

void interacao_menu(Lista list)
{
    int aux;
    short escolha = -1;
    
    while(escolha)
    {
        menu();
        std::cin >> escolha;
        
        if         (escolha == 1)
        {
            std::cout << "Entre com o valor de elemento: " << std::endl;
            std::cin >> aux;
            list.adc_lista_primeiro(aux);
            
        }
        else if (escolha == 2)
        {
            std::cout << "Entre com o valor de elemento: " << std::endl;
            std::cin >> aux;
            list.adc_lista_ultimo(aux);
        }
        else if (escolha == 3)
        {
            std::cout << "Elemento deletado: " << list.deleta_primeiro() << std::endl << std::endl;
        }
        else if (escolha == 4)
        {
            std::cout << "Elemento deletado: " << list.deleta_ultimo() << std::endl << std::endl;
        }
        else if (escolha == 5)
        {
            std::cout << "Entre com o valor do elemento a ser deletado: " << std::endl;
            std::cin >> aux;
            list.deleta_node(aux);
        }
        else if (escolha == 6)
        {
            std::cout << "Entre com o valor do elemento para ver se possui na lista: " << std::endl;
            std::cin >> aux;
            if(list.tem_na_lista(aux) == 1)
                std::cout << "Tem na lista!" << std::endl << std::endl;
            else
                std::cout << "Não tem na lista!" << std::endl << std::endl;
        }
        else if (escolha == 0)
            std::cout << "Bye!" << std::endl;
        else
            std::cout << "Valor inválido!!" << std::endl << std::endl;
    }
}
