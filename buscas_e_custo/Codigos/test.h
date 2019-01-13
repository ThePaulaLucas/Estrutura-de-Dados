
TEST(BUSCA, POSSUI_VALOR)
{
    Vector vetor(5);
    vetor.atribuiValorCrescente();
    
    ASSERT_TRUE(vetor.getValor(4) == 4);
}

TEST (BUSCA, INDEX_LINEAR)
{
    int index, *p = &index;
    Vector vetor(10);
    vetor.atribuiValorCrescente();
    vetor.linearSearch(5, p);
    
    ASSERT_TRUE(index == 5);
}

TEST (BUSCA, INDEX_BINARIA)
{
    int index, contador, *q = &index, *count = &contador;
    Vector vetor(10);
    vetor.atribuiValorCrescente();
    vetor.binarySearch(5, q, count);
    
    ASSERT_TRUE(index == 5);
}

TEST (BUSCA, VALOR_CRESCENTE)
{
    Vector vetor(5);
    vetor.atribuiValorCrescente();
    
    ASSERT_TRUE(vetor.getValor(1) < vetor.getValor(2));
}

TEST (BUSCA, VALOR_DECRESCENTE)
{
    Vector vetor(5);
    vetor.atribuiValorDecrescente();
    
    ASSERT_TRUE(vetor.getValor(1) > vetor.getValor(2));
}

TEST (BUSCA, ORDENACAO)
{
    Vector vetor(5);
    vetor.atribuiValorDecrescente();
    vetor.quickSorting();
    
    ASSERT_TRUE(vetor.getValor(1) < vetor.getValor(2));
}

TEST (BUSCA, ORDENACAO_ALEATORIA)
{
    Vector vetor(5);
    vetor.atribuiValorAleatorio(1);
    vetor.quickSorting();
    
    ASSERT_TRUE(vetor.getValor(1) < vetor.getValor(2));
}

TEST (BUSCA, NAO_ENCONTRADO_LINEAR)
{
    int index, *p = &index;
    Vector vetor(5);
    vetor.atribuiValorAleatorio(1);
    vetor.quickSorting();
    vetor.linearSearch(6, p);
    
    ASSERT_TRUE(index = -1);
}

TEST (BUSCA, NAO_ENCONTRADO_BINARY)
{
    int index, contador, *q = &index, *count = &contador;
    Vector vetor(5);
    vetor.atribuiValorAleatorio(1);
    vetor.quickSorting();
    vetor.binarySearch(6, q, count);
    
    ASSERT_TRUE(vetor.getValor(1) < vetor.getValor(2));
}


