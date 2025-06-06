programa: main.o funcionario.o subclasses.o
	g++ main.o funcionario.o subclasses.o -o programa

funcionario.o: funcionario.cpp funcionario.h
	g++ funcionario.cpp -c

subclasses.o: subclasses.cpp subclasses.h
	g++ subclasses.cpp -c

main.o: main.cpp funcionario.h subclasses.h
	g++ main.cpp -c
