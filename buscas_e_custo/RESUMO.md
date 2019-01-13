# Custo Computacional
## Custo
Podemos considerar o custo de um problema, como a eficiência necessária para resolve o mesmo. A área que caracteriza esse tipo de medida é chamada **Complexidade Computacional**.

A complexidade computacional nos indica o esforço necessário para um algoritmo resolver um certo problema, ou seja, seu custo.

Para validar um custo de um certo algoritmo não podemos usar uma medida de tempo, pois, o tempo possui algumas variáveis como:

 - Poder computacional
 - Linguagem usada
 - Sistema usado
 - Tamanho dos dados
 - etc
 
 Com isso precisamos de uma unidade lógica para expressar a relação entre o tamanho **n** de um dado ou de uma estrutura e o tempo **t** para ser processado este dado. Onde se houver uma relação linear entre o **n** e o tempo **t**, então se o dado cresce em 5, o tempo também crescerá em 5.


 Analisando a tabela

|<a href="https://www.codecogs.com/eqnedit.php?latex=$$n$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$n$$" title="$$n$$" /></a> |<a href="https://www.codecogs.com/eqnedit.php?latex=$$f(n)=n^3$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$f(n)=n^3$$" title="$$f(n)=n^3$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$f(n)&space;=&space;n^3&space;&plus;n^2$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$f(n)&space;=&space;n^3&space;&plus;n^2$$" title="$$f(n) = n^3 +n^2$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$f(n)=n^3-8n^2&plus;20n$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$f(n)=n^3-8n^2&plus;20n$$" title="$$f(n)=n^3-8n^2+20n$$" /></a>|
|:--:|:--:|:--:|:--:|
|<a href="https://www.codecogs.com/eqnedit.php?latex=$$1$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$1$$" title="$$1$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$1$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$1$$" title="$$1$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$2$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$2$$" title="$$2$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$13$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$13$$" title="$$13$$" /></a>         
|<a href="https://www.codecogs.com/eqnedit.php?latex=$$10$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$10$$" title="$$10$$" /></a>      |<a href="https://www.codecogs.com/eqnedit.php?latex=$$100$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$100$$" title="$$100$$" /></a>        |<a href="https://www.codecogs.com/eqnedit.php?latex=$$1,100$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$1,100$$" title="$$1,100$$" /></a>           |<a href="https://www.codecogs.com/eqnedit.php?latex=$$400$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$400$$" title="$$400$$" /></a>        
|<a href="https://www.codecogs.com/eqnedit.php?latex=$$1000&space;$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$1000&space;$$" title="$$1000 $$" /></a>   |<a href="https://www.codecogs.com/eqnedit.php?latex=$$100,000,000$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$100,000,000$$" title="$$100,000,000$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$101,000,000$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$101,000,000$$" title="$$101,000,000$$" /></a>     |<a href="https://www.codecogs.com/eqnedit.php?latex=$$992,020,000$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$992,020,000$$" title="$$992,020,000$$" /></a>
|<a href="https://www.codecogs.com/eqnedit.php?latex=$$1000,000$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$1000,000$$" title="$$1000,000$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$1.0*10^{18}$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$1.0*10^{18}$$" title="$$1.0*10^{18}$$" /></a> |<a href="https://www.codecogs.com/eqnedit.php?latex=$$1.000001*10^{18}$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$1.000001*10^{18}$$" title="$$1.000001*10^{18}$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$9.99992*10^{17}$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$9.99992*10^{17}$$" title="$$9.99992*10^{17}$$" /></a>
> Tabela do curso CS50

Dada uma função <a href="https://www.codecogs.com/eqnedit.php?latex=$$f(n)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$f(n)$$" title="$$f(n)$$" /></a> vemos que, a medida que o valor de n cresce a função tem um termo dominante, que no caso é o de maior expoente <a href="https://www.codecogs.com/eqnedit.php?latex=$$f(n)&space;=&space;n^3$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$f(n)&space;=&space;n^3$$" title="$$f(n) = n^3$$" /></a>

## Big - O
Usamos essa notação para medir o comportamento de uma função a medida que o n cresce, para a tabela acima, todas as três funções são validadas pela mesma notação: <a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n^3)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n^3)$$" title="$$O(n^3)$$" /></a>

A função:
<a href="https://www.codecogs.com/eqnedit.php?latex=$$f(n)&space;=&space;a_{k}n^{k}&space;&plus;a_{k-1}n^{k-1}&plus;a_{k-2}n^{k-2}&plus;&space;...&space;&plus;&space;a_{1}n&plus;a_{0}&space;$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$f(n)&space;=&space;a_{k}n^{k}&space;&plus;a_{k-1}n^{k-1}&plus;a_{k-2}n^{k-2}&plus;&space;...&space;&plus;&space;a_{1}n&plus;a_{0}&space;$$" title="$$f(n) = a_{k}n^{k} +a_{k-1}n^{k-1}+a_{k-2}n^{k-2}+ ... + a_{1}n+a_{0} $$" /></a>
 é
 <a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n^k)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n^k)$$" title="$$O(n^k)$$" /></a>

A notação **Big-O** é usada para classificar a *pior situação* de uma função, porém há uma outra notação simétrica para classificar a *melhor situação*, essa é chamada de notação **Big-Ω**.

As classificações das funções em ordem de tempo de execução na notação  **Big-O** são:

|Constante|Logarítmica|Linear|n log n|Quadrática|Cúbica|Exponencial
|:--:|:--:|:--:|:--:|:--:|:--:|:--:|
|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(a)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(a)$$" title="$$O(a)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(log(n))$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(log(n))$$" title="$$O(log(n))$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n)$$" title="$$O(n)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(nlog(n))$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(nlog(n))$$" title="$$O(nlog(n))$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n^2)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n^2)$$" title="$$O(n^2)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n^3)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n^3)$$" title="$$O(n^3)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(a^n)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(a^n)$$" title="$$O(a^n)$$" /></a>

Como mostra no gráfico abaixo:

![Gráfico custos](https://i.postimg.cc/TYh9rCFx/plot.png)

Onde n é o tamanho da estrutura e t o tempo de execução.
Alguns algorítmos de busca possuem diferentes custos computacionais, por exemplo:

 - **Busca Linear** : O(n)
- **Busca Binária**: O(log(n))

como visto no gráfico acima, notamos que a busca binária possui uma maior otimização em relação a busca linear.

## Análise experimental 
Vamos analisar esses dois algoritmos de busca, e ver se o que foi dito acima é válido, tanto para a busca Linear quanto para a Binária.

Essa análise consiste em criar uma estrutura de repetição que procurará num vetor, um valor aleatório, e então observaremos seu comportamento à medida em que o número de elementos do vetor cresce,  ambas as amostras vão de 100 até 150.000, incrementando em 1.500 em cada repetição.

O vetor foi definido com o seu número de elementos e o número máximo que pode aparecer aleatoriamente(pseudoaleatório) em seus elementos, que consiste no mesmo valor do tamanho 
do vetor. O valor gerado para ser procurado à cada iteração, também segue o processo pseudoaleatório.

### Busca Linear
A busca linear, também conhecido como busca ingênua, consiste em procurar em cada elemento de nosso vetor, se o valor procurado é igual ao elemento atual, o que nos intui que seu comportamento será linear, pois analisando o pior caso para um vetor de tamanho N, ele levará N iterações para testar todas as possibilidades.

Os dados gerados foram armazenados no arquivo buscas.txt, e extraindo a primeira e terceira coluna(tamanho do vetor e iterações da busca linear), plotamos o gráfico com o gnuplot.

![Gráfico busca linear](https://i.postimg.cc/NMWRfMzy/linear.png)

Como observamos um comportamento linear,  fitamos no gnuplot com a reta y = ax + b, onde y é o número de iterações e x o tamanho do vetor, com isso nossos coeficientes são:

|a       | b       |
|:--:    |:--:     |
| 0.7488 | 1.00441 |

 Com isso, vemos que a busca Linear é de ordem O(n), onde n é o tamanho do vetor.
 
 ### Busca Binária
A busca binária é uma busca em vetores que tem como paradigma a divisão e conquista, que em computação significa dividir um problema de modo iterativo em problemas menores, e então os resolver. A busca binária tem como pressuposto que seu vetor esteja ordenado, pois seu algoritmo consiste em dividir esse vetor de acordo com sua ordenação, dividindo uma amostra ao meio, e assim analisando a direção à seguir no vetor, repetindo o processo, até achar o elemento procurado.

Assim como na busca linear, foi gerado um arquivo "busca.txt" que comporta os dados gerados pelo algoritmo, agora fora usados a primeira e segunda colunas(tamanho do vetor e iterações binárias), gerando o gráfico:

![Busca Binária](https://i.postimg.cc/ZqvPd2yv/binaria.png) 
Observa-se um comportamento logarítmico, então fitou-se com a função y = a log(bx + c) + d, encontrando os coeficientes:

|a       |b       |c      |d     |
|:--:      |:--:      |:--:     |:--:    |
| 1.7388 | 0.0289 | 2.1136|1.4925|

Logo, como foi dito acima, a busca binária possui custo O(log(N)), onde N é o tamanho do vetor.

### Conclusões

Para cada tipo de estrutura de dados possuímos um custo diferente, em nossa análise não consideramos os custos relacionados ao algoritmos de ordenação que nas maiorias das vezes acompanham os algoritmos de busca binária. 

Ao analisarmos os custos relacionados à algoritmos, fica claro a importância dessa classificação, pois, a medida que nossos dados e também a complexidade, cresce, precisamos de ferramentas mais otimizadas para lidar com problemas cada vez maiores.

Contudo nossa discussão consistiu em apenas problemas de tempo polinomial(**P**) , e não houve um debate sobre essa classificação, que fica a cargo da **complexidade computacional** em classificar esse problema, que são subdivididos em P = Polinomial time, NP = Non Polinomial time  e NP-Complete, que são classificações básicas.

### Referências

-   _Complexidade computacional_. Wikipédia. Disponível em: [https://pt.wikipedia.org/wiki/Complexidade_computacional](https://pt.wikipedia.org/wiki/Complexidade_computacional). Acesso em: 15 de dez. de 2018.
-   _Pesquisa Binária_. Wikipédia. Disponível em: [https://pt.wikipedia.org/wiki/Pesquisa_bin%C3%A1ria](http://wiki.icmc.usp.br/images/d/de/Analise_complexidade.pdf). Acesso em: 15 de dez. de 2018.
 - _Divisão e conquista_. Wikipédia. Disponível em: [https://pt.stackoverflow.com/questions/102597/o-que-%C3%A9-um-algoritmo-determin%C3%ADstico-e-n%C3%A3o-determin%C3%ADstico](https://pt.stackoverflow.com/questions/102597/o-que-%C3%A9-um-algoritmo-determin%C3%ADstico-e-n%C3%A3o-determin%C3%ADstico). Acesso em: 10 de jan. de 2019.
-   DROZDEK, A. Data Structures and Algorithms in C++. 4 ed. Boston: CENGAGE Learning, 2012.
-   _Complexidade: problemas NP-completos_. IME-USP. Disponível em: [https://www.ime.usp.br/~pf/analise_de_algoritmos/aulas/NPcompleto.html](http://wiki.icmc.usp.br/images/d/de/Analise_complexidade.pdf). Acesso em: 10 de jan. de 2019.
-    _Gnuplot_. Gnuplotting. Disponível em: [http://www.gnuplotting.org/](http://wiki.icmc.usp.br/images/d/de/Analise_complexidade.pdf). Acesso em: 11 de jan. de 2019.
