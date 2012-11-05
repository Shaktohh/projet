main: main.o outils.o
	gcc main.o outils.o -o main

main.c : main.c
	gcc -c main.c

outils.c: outils.c
	gcc -c outils.fr
