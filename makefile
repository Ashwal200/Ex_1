#Dictionery:
CC = gcc -c 
CFLAGS = -Wall -g
CCC= gcc -Wall
CLIB = ar rcs  

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c 
main.o: main.c  my_mat.h
	$(CC) $(CFLAGS) main.c 

libmy_mat.a: main.o my_mat.o
	$(CLIB) libmy_mat.a main.o my_mat.o

connections: main.o  libmy_mat.a 
	$(CCC) main.o ./libmy_mat.a -o connections 	

all: connections libmy_mat.a

.PHONY: clean
clean: 
	rm -rf *.o *.a connections 







