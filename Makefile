CC=g++
CFLAGS=-I.

main: main.o
	$(CC) -o main main.o

main.o: main.cpp
	$(CC) -c -o main.o main.cpp

clean:
	rm -f main.o main
