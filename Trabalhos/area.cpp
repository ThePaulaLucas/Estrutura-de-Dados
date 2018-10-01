//Estrutura de dados
//Lucas de Paula
//C++

#include <iostream>
#include <vector>

using namespace std;

double f1(double x, vector<double> coef)
{
    return (coef[0] * x) + coef[1]; // ax + b
}

double f2(double x, vector<double> coef)
{
    return (coef[0] * x * x) + (coef[1] * x) + coef[2]; // ax² + bx +c
}

double calculoArea(double (*f)(double, vector<double>), vector<double> coef, double Inicial, double Final, int qtdRet)
{
    short i;
    double deltaX, soma = 0.0;
    
    deltaX = (Final - Inicial) / qtdRet;
    
    for(i=0; i < qtdRet; i++)
    {
        soma  += (deltaX * ( f(Inicial, coef) ));
        Inicial += deltaX;
    }
    
    return soma;
}

short retangulos()
{
    short ret;
    cout << "Entre com a qtd de retângulos(1 - 10000): " << endl;
    cin >> ret;
    return ret;
}

void intervalo(double* a, double* b)
{
    double aux;
    
    aux = *a;
    *a = *b;
    *b = aux;
}

void area(short func)
{
    short qtdRet;
    double area, inicial, Final, aux;
    vector <double> coef;
    
    cout << "Entre com o intervalo: " << endl;
    cin >> inicial;
    cin >> Final;
    
    if (inicial > Final)
        intervalo(&inicial, &Final);

    qtdRet = retangulos();
    
    cout << "Entre com o coeficiente a: " << endl;
    cin >> aux;
    coef.push_back(aux);
    cout << "Entre com o coeficiente b: " << endl;
    cin >> aux;
    coef.push_back(aux);
    
    if (func == 1)
    {
        area = calculoArea(f1, coef, inicial, Final, qtdRet);
    }
    else if (func == 2)
    {
        cout << "Entre com o coeficiente c:" << endl;
        cin >> aux;
        coef.push_back(aux);
        area = calculoArea(f2, coef, inicial, Final, qtdRet);
    }

    cout << "A área com " << qtdRet << " retângulo(s) é: " << area << endl;
}

int main()
{
    short func;
    
    cout << "Qual função quer calcular?" << endl;
    cout << "1 - Função linear" << endl;
    cout << "2 - Função quadrática" << endl;
    cin >> func;
    
    area(func);

    return 0;
}
