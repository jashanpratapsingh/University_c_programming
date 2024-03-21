set terminal pngcairo size 800,600 enhanced font 'Verdana,12'
set output 'blackbody_radiation.png'
set title "Planck's Law of Black-body Radiation"
set xlabel "Wavelength (μm)"
set ylabel "Spectral Energy Density (J/m^3)"
set key top left
plot "data.txt" using 1:3 title "T=3000K" with lines lc rgb "blue" dt 1 lw 2, \
     "" using 1:3 title "T=4000K" with lines lc rgb "red", \
     "" using 1:3 title "T=5000K" with lines lc rgb "green" dt 2
