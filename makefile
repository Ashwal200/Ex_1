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

# mat: libmy_mat.a
# libmat.a: main.o my_mat.o
# 	$(CLIB) libmy_mat.a main.o my_mat.o
# mains: main.o libmy_mat.a 
# 	gcc -Wall main.o ./libmat.a -o mains 	

all: connections 

.PHONY: clean
clean: 
	rm -rf *.o *.a connections 







