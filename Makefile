Bubble_Sort: func.o main.o
	gcc -Wall -o Bubble_Sort func.o main.o

func.o: func.c
	gcc -c func.c

main.o: main.c
	gcc -c main.c
