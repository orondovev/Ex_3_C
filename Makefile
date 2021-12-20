CC=gcc
FLAGS= -Wall -g

all: stringProg

stringProg: main.o functions.o
	$(CC) $(FLAGS) -o stringProg main.o functions.o


main.o: main.c functions.h
	$(CC) $(FLAGS) -c main.c

functions.o: functions.c functions.h
	$(CC) $(FLAGS) -c functions.c



.PHONY: clean all

clean:
	rm -f *.o stringProg