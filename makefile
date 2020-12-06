CC=gcc
AR=ar
FLAGs = -Wall -g

all: main.o myBank.o  

mains: main.o myBank.o myBank.h
	$(CC) $(FLAGS) -o main main.o  myBank.o

myBank: libmyBank.a
libmyBank.a: myBank.o
	$(AR) -rcs libmyBank.a myBank.o

myBank.o: myBank.c myBank.h
	$(CC) -fPIC $(FLAGS) -c myBank.c

main.o: main.c
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all myBank

clean:
	-rm -f *.o *.a main
