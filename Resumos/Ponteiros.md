# Ponteiros

Ponteiros são variáveis auxiliares que guardam um endereço de memória, isso permite acessar outras variáveis indiretamente, declaramos um ponteiro da seguinte forma: 


	  int i, *b; 
	  b = &i; //b aponta p/ i
	  b = 20; //i recebe o valor 20;

Um ponteiro também pode ser usado para apontar para uma estrutura de dados como uma `array` , por exemplo:

    int x[10];

nessa declaração temos que `x` é um ponteiro que aponta para um bloco que memória que guarda 10 inteiros, como esse bloco é do tipo `int`, e supondo que o primeiro endereço seja `#1015`, temos :
| Bloco | Endereço |   
|--|--|
|1|#1015|
|2|#1017|
|3|#1019|
|...|...|
Isso ocorre porque o inteiro ocupa `2 bytes` de memória, se nossa `array` fosse uma `array de char`, nosso endereço ia andar de 1 em 1, pois um `char` ocupa apenas `1 byte` de memória. Dado um ponteiro que aponta para um bloco de memória, seu endereço é dado por:

    c + (i * sizeof(type))

 - `c` é a variável
 - `i` é a distancia do primeiro espaço de memória
 - `sizeof(type)` é o tamanho do tipo

### Variável de referência
consideramos a declaração:

    int x = 10, *p = &n, &q = x;

Temos que `p` é do tipo `int*`, um ponteiro que aponta para uma inteiro, e `q` é do tipo `int&`, uma variável de referência para um inteiro. Uma variável de referência deve ser inicializada no momento da declaração e sua referência não pode mudar, podemos considerar uma variável de referência como sendo um ponteiro constante e podemos declarar da seguinte forma:

      int& q = x; //ou
      int *const q = &x;

 ### Funções
 Da mesma forma que  variáveis possuem seu endereço de memória, funções também possuem seu endereço de memória que indica a localização do seu conteúdo, podemos usar ponteiros para função oque é útil para passar uma função como parâmetro para outra. Por exemplo:

    double f(double x)
    {
	    return 2*x;
    }
e queremos implementar a soma:

$$
\sum_{i =n}^{m}  f(i)
$$
Fazemos:

    double sum(double (*f)(double), int n int m)
    {
	    double result = 0;
	    for(i = n; i <= m; i++)
		    result +=f(i);
	    return result;
    }

Onde `double (*f)(double)` significa que f é um ponteiro para função que recebe e retorna um double.


#### Bibliografia

 - _Data structures and algorithms in C_++,  Adam Drozdek, Boston: Cengage Learning 2013 (4th ed.)
