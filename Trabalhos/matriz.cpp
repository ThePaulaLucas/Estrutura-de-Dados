//Estrutura de dados
//Lucas de Paula
//Linguagem: C++

#include <iostream>
#include <iomanip>

using namespace std;

class Matriz
{
    public: 
        
        //Construtor recebe a qtd de linhas e colunas
        Matriz(int l = 5, int c = 5)
        {
            mat = new int*[l];
            for (i=0; i < l; i++)
            {
                mat[i] = new int[c];
            }
            m = l;
            n = c;
        };
        
        Matriz(const Matriz& x)
        {
            this -> m = x.m;
            this -> n = x.n;
            
            mat = new int* [m];
            for (i=0; i < m; i++)
            {
                mat[i] = new int [n];
            }
            
            for(i = 0; i < m; i++)
                    for(j = 0; j < n; j++)
                        mat[i][j] = x.mat[i][j];
            
        };
        
        Matriz& operator = (const Matriz& x)
        {
            if (this != &x)
            {
                this -> m = x.m;
                this -> n = x.n;
                
                mat = new int* [m];
                for (i=0; i < m; i++)
                {
                    mat[i] = new int [n];
                }
                
                for(i = 0; i < m; i++)
                    for(j = 0; j < n; j++)
                        mat[i][j] = x.mat[i][j];
            }
            return *this;
        };
        
        //Overload
        int *operator [] (int valor)
        {
               return mat[valor];
        };
        
        //Destrutor
        ~Matriz()
        {
            for (i = 0; i < n; i++)
            {
                delete mat[i];
            }
            
            delete[] mat;
        };
        
        void imprimeMatriz();
        void valorMatrix1();
        void valorMatrix2();
        
    private:
        int **mat;
        int i, j;
        int n, m;
};

//Atribui o valor i + j à matriz
void Matriz::valorMatrix1()
{
    for (i = 0; i < m; i++)
    {
        for (j =0; j < n; j++)
        {
            mat[i][j] = i + j;
        }
    }
}

//Atribui o valor i * j à matriz
void Matriz::valorMatrix2()
{
    for (i = 0; i < m; i++)
    {
        for (j =0; j < n; j++)
        {
            mat[i][j] = i * j;
        }
    }
}

void Matriz::imprimeMatriz()
{
    for (i = 0; i < m; i++)
    {
        for (j =0; j < n; j++)
        {
            cout  << setw(3) << right << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int l, c;
    
    cout << "Entre com o número de linhas: " << endl;
    cin  >> l;
    cout << "Entre com o número de colunas: " << endl;
    cin >> c;
    
    Matriz matrix1(l, c), matrix2(matrix1), matrix3(80, 80);
    
    //Atribui valores para os elementos da matriz
    matrix1.valorMatrix1();
    matrix2.valorMatrix2();
    matrix3.valorMatrix2();
    
    matrix3 = matrix1;
    
    cout << endl << "  Matriz 1: " << endl;
    matrix1.imprimeMatriz();
    cout << endl;
    
    cout << "  Matriz 2: " << endl;
    matrix2.imprimeMatriz();
    cout << endl;
    
    cout << "  Matriz 3: " << endl;
    matrix3.imprimeMatriz();
    cout << endl;

    return 0;
}


