# Makefile

all: main

main: main.o euler.o nwd.o
	clang -Wextra -o main main.o euler.o nwd.o

main.o: main.c
	clang -c main.c

euler.o: euler.c
	clang -c euler.c

nwd.o: nwd.c
	clang -c nwd.c

clean:
	rm -f main *.o *~
