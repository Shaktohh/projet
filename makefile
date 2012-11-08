main: main.o outils.o Vue.o Scene.o Nourriture.o
	gcc main.o outils.o Vue.o Scene.o Nourriture.o -o main

main.c :
	gcc -c main.c

outils.c:
	gcc -c outils.c

Vue.c :
	gcc -c Vue.c

Scene.c :
	gcc -c Scene.c

Nourriture.c :
	gcc -c Nourriture.c
