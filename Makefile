CC=g++
CFLAGS=-g -Wall -lcurl
NAME=test

all: curl.o test.o
	$(CC) -o $(NAME) curl.o $(NAME).o $(CFLAGS)
test.o: curl.o curl.hpp
	$(CC) -c $(NAME).cpp $(CFLAGS)
curl.o: curl.cpp curl.hpp
	$(CC) -c curl.cpp $(CFLAGS)
clean:
	rm -rf *.o
	rm -rf $(NAME)
