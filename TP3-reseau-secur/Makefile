all : prog.e

prog.e : partie_1.o main.o 
	gcc partie_1.o main.o -o prog.e

partie_1.o : partie_1.c
	gcc -c partie_1.c

main.o : main.c
	gcc -c main.c