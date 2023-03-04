all : prog.e

prog.e : exo1_1.o main.o 
	gcc exo1_1.o main.o -o prog.e

exo1_1.o : exo1_1.c
	gcc -c exo1_1.c

main.o : main.c
	gcc -c main.c