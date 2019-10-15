#include "matriz.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Matriz::alocaMatriz(int m, int n)
{
    mat = new int*[m];
    for (unsigned i = 0; i < n; ++i)
    {
        mat[i] = new int[n];
    }
    l = m;
    c = n;
}

//Construtor recebe a quantidade de linhas e colunas
Matriz::Matriz(int l, int c)
{
    alocaMatriz(l, c);
}

//Retorna a quantidade de linhas da matriz
int Matriz::getLinha() const
{
    return l;
}

//Retorna a quantidade de colunas da matriz
int Matriz::getColuna() const
{
    return c;
}

//Retorna o elemento da posição i,j da matriz
int Matriz::get(int i, int j) const
{
    return mat[i][j];
}

//Construtor por cópia
Matriz::Matriz(const Matriz& x)
{
    this -> l = x.getLinha();
    this -> c = x.getColuna();

    alocaMatriz(l,c);

    for(unsigned i = 0; i < l; ++i)
    {
        for(unsigned j = 0; j < c; ++j)
        {
            mat[i][j] = x.get(i,j);
        }
    }

}

//Sobrecarga do operador =
Matriz& Matriz::operator =(const Matriz& x)
{
    if(this != &x)
    {
        this -> l = x.getLinha();
        this -> c = x.getColuna();

	alocaMatriz(l,c);

        for(unsigned i = 0; i < l; ++i)
        {
            for(unsigned j = 0; j < c; ++j)
            {
                mat[i][j] = x.get(i,j);
            }
        }
    }
    return *this;
}

//Overloading do operador []
int* Matriz::operator[](int valor)
{
    return mat[valor];
}

//Destrutor
Matriz::~Matriz()
{
    for (unsigned i = 0; i < c; ++i)
    {
        delete mat[i];
    }
    delete[] mat;
}

//Atribui o valor i + j à matriz
void valorMatrizSoma(Matriz& matrix)
{
    int l, c;
    l = matrix.getLinha();
    c = matrix.getColuna();

    for (unsigned i = 0; i < l; ++i)
    {
        for (unsigned j = 0; j < c; ++j)
        {
            matrix[i][j] = i + j;
        }
    }
}

//Atribui o valor i * j à matriz
void valorMatrizMult(Matriz& matrix)
{
    int l, c;
    l = matrix.getLinha();
    c = matrix.getColuna();

    for (unsigned i = 0; i < l; ++i)
    {
        for (unsigned j = 0; j < c; ++j)
        {
            matrix[i][j] = i * j;
        }
    }
}


void imprimeMatriz(Matriz& matrix)
{
    int m, n;
    m = matrix.getLinha();
    n = matrix.getColuna();
    for (unsigned i = 0; i < m; i++)
    {
        for (unsigned j =0; j < n; j++)
        {
            cout  << setw(3) << right << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
