CC=g++
CFLAGS=-I.

main: main.o
	$(CC) -o main main.o

main.o: main.cpp
	$(CC) -c -o main.o main.cpp

check: main
	./main

distcheck: check
 # Add commands to check the distribution here

clean:
	rm -f main.o main
