//Testes para a classe matriz e seus métodos

TEST(MATRIZ, primeiro_teste_pega_linha) {
  Matriz m1(5,5);
  ASSERT_EQ(m1.getLinha(), 5);
}

TEST(MATRIZ, segundo_teste_pega_linha) {
  Matriz m1(5,5);
  Matriz m2(4,4);
  ASSERT_NE(m1.getLinha(), m2.getLinha());
}

TEST(MATRIZ, prmeiro_teste_pega_coluna) {
  Matriz m1(5,5);
  Matriz m2(4,4);
  ASSERT_NE(m1.getColuna(), m2.getColuna());
}

TEST(MATRIZ, segundo_teste_pega_coluna) {
  Matriz m1(5,5);
  ASSERT_EQ(m1.getColuna(), 5);
}

TEST(MATRIZ, teste_retorna_elemento_matriz) {
  Matriz m1(5,5);
  m1[0][1] = 100;
  ASSERT_EQ(m1.get(0,1), 100);
}

TEST(MATRIZ, teste_funcao_valor_matriz_soma) {
  Matriz m1(5,5);
  valorMatrizSoma(m1);
  ASSERT_EQ(m1[0][0], 0);
}

TEST(MATRIZ, teste_funcao_valor_matriz_mul) {
  Matriz m1(5,5);
  valorMatrizMult(m1);
  ASSERT_EQ(m1[0][0], 0);
}

TEST(MATRIZ, teste_operador_colchetes) {
  Matriz m1(5,5);
  m1[0][0] = 100;
  ASSERT_EQ(m1[0][0], 100);
}

TEST(MATRIZ, teste_copia_matriz) {
  Matriz m1(5,5);
  valorMatrizSoma(m1);
  Matriz m2(m1);
  int i, j, l, c;
  l=m1.getLinha();
  c=m1.getColuna();
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
       ASSERT_EQ(m1[i][j], m2[i][j]);
    }
  }
}

TEST(MATRIZ, teste_copia_alterando_valor) {
  Matriz m1(5,5);
  valorMatrizSoma(m1);
  Matriz m2(m1);
  m2[0][0] = 100;
  ASSERT_EQ(m1[0][0], 0);
}

TEST(MATRIZ, primeiro_teste_operador_atribuicao) {
  Matriz m1(5,5);
  valorMatrizSoma(m1);
  Matriz m2(5,5);
  m2 = m1;
  int i, j, l, c;
  l=m1.getLinha();
  c=m1.getColuna();
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
       ASSERT_EQ(m1[i][j], m2[i][j]);
    }
  }
}

TEST(MATRIZ, segundo_teste_operador_atribuicao) {
  Matriz m1(5,5);
  valorMatrizSoma(m1);
  Matriz m2(4,4);
  m2 = m1;
  int i, j, l, c;
  l=m1.getLinha();
  c=m1.getColuna();
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
       ASSERT_EQ(m1[i][j], m2[i][j]);
    }
  }
}

TEST(MATRIZ, terceiro_teste_operador_atribuicao) {
  Matriz m1(5,5);
  valorMatrizSoma(m1);
  Matriz m2(5,5);
  m2 = m1;
  m2[0][0] = 100;
  ASSERT_EQ(m1[0][0], 0);
}
