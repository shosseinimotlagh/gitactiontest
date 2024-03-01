# Makefile
CC=g++
CFLAGS=-I/usr/local/include -L/usr/local/lib -std=c++14
GTEST_LIB=-lgtest -lgtest_main -pthread

main: main.o
 $(CC) $(CFLAGS) -o main main.o $(GTEST_LIB)

main.o: main.cpp
 $(CC) $(CFLAGS) -c -o main.o main.cpp

check: main
 ./main

clean:
 rm -f main.o main

