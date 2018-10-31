#include <iostream>
#ifndef Matriz_h
#define Matriz_h

class Matriz{

    public:
        Matriz(int l = 5, int c = 5);
        Matriz(const Matriz& x);
        Matriz& operator = (const Matriz& x);
        int *operator [] (int valor);
        int getLinha() const;
        int getColuna() const;
        int get(int i, int j) const;
        ~Matriz();
    private:
        int **mat;
        int l, c;
        void alocaMatriz(int m, int n);

};

#endif // Matriz_h
