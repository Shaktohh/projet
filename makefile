main: main.o outils.o Vue.o Scene.o
	gcc main.o outils.o Vue.o Scene.o -o main

main.c : main.c
	gcc -c main.c

outils.c: outils.c
	gcc -c outils.fr

Vue.c : Vue.c
	gcc -c Vue.c

Scene.c : Scene.c
	gcc -c Scene.c
