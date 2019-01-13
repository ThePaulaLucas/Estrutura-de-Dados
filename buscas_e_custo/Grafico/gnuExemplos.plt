set xlabel "n"
set ylabel "t"
set yrange [0:5]
set xrange[1:5]
plot 1 title "O(1)", log(x) title "O(log n)", x title "O(n)", x*log(x) title "O(n log n)", x*x title "O(n²)"
