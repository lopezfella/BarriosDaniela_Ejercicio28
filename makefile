plot.png: runk4.dat grafica.py
	python grafica.py

%.dat : a.out
	./a.out

a.out: clase28.cpp
	c++ clase28.cpp
