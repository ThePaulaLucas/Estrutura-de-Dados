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
 
 Com isso precisamos de uma unidade lógica para expressar a relação entre o tamanho **n** de um dado ou de uma estrutura e o tempo **t** para ser processado este dado. Onde se houver uma relação linear entre meu dado **n** e o meu tempo **t**, então se meu dado cresce em 5, meu tempo também crescerá em 5


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

A notação **Big-O** é usada para classificar a *pior situação* de uma função, porém há uma outra notação simétrica para classificar a *melhor situação*, essa é chamada de notação **Big-Ω**

As classificações das funções em ordem de tempo de execução na notação  **Big-O** são:

|Constante|Logarítmica|Linear|n log n|Quadrática|Cubica|Expoencial
|:--:|:--:|:--:|:--:|:--:|:--:|:--:|
|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(a)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(a)$$" title="$$O(a)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(log(n))$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(log(n))$$" title="$$O(log(n))$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n)$$" title="$$O(n)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(nlog(n))$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(nlog(n))$$" title="$$O(nlog(n))$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n^2)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n^2)$$" title="$$O(n^2)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(n^3)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(n^3)$$" title="$$O(n^3)$$" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=$$O(a^n)$$" target="_blank"><img src="https://latex.codecogs.com/gif.latex?$$O(a^n)$$" title="$$O(a^n)$$" /></a>

Como mostra no gráfico abaixo:

<a href="http://pt-br.tinypic.com?ref=11adem0" target="_blank"><img src="http://i63.tinypic.com/11adem0.png" border="0" alt="Image and video hosting by TinyPic"></a>
