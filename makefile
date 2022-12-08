#Dictionery:
CC = gcc -c 
CFLAGS = -Wall -g
CCC= gcc -Wall
CLIB = ar rcs  

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c 
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) main.c -lm
 
connections: main.o my_mat.o  
	gcc -Wall main.o my_mat.o -o connections -lm

libmy_mat.a: main.o my_mat.o
	$(CLIB) libmy_mat.a main.o my_mat.o
mains: main.o libmy_mat.a 
	gcc -Wall main.o ./libmy_mat.a -o mains 	

all: connections mains

.PHONY: clean
clean: 
	rm -rf *.o *.a connections mains







