#Dictionery:
CC = gcc -c 
CFLAGS = -Wall -g
CCC= gcc -Wall

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c 
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) main.c -lm
 
connections: main.o my_mat.o  
	gcc -Wall main.o my_mat.o -o connections -lm

all: connections

.PHONY: clean
clean: 
	rm -rf *.o connections







