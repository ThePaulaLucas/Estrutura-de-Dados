reset

set grid
set nokey
set term post eps enhanced color

set title "Busca linear" font 'Helvetica, 15'
set xlabel "Tamanho do vetor V[x]" font 'Helvetica, 15'
set ylabel "Numero de iteracoes" font 'Helvetica, 15'
g(x) = a*x + b
set out 'busca_linear.eps'
fit g(x) 'busca.txt' u ($1):($3) via a, b
plot 'busca.txt' u ($1):($3) w points ps 1 lc 4, g(x) lc 6\

set title "Busca binaria" font 'Helvetica, 15'
set xlabel "Tamanho do vetor V[x]" font 'Helvetica, 15'
set ylabel "Numero de iteracoes" font 'Helvetica, 15'
g(x) = a*log(b*x + c) + d
set out 'busca_binaria.eps'
fit g(x) 'busca.txt' u ($1):($2) via a, b, c, d
plot 'busca.txt' u ($1):($2) w points ps 1 lc 4, g(x) lc 6\
