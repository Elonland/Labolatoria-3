# Makefile

all: main

main: main.o wynik.o f.o
	clang -Wextra -o main main.o wynik.o f.o -lm

main.o: main.c
	clang -c main.c

wynik.o: wynik.c
	clang -c wynik.c

f.o: f.c
	clang -c f.c

clean:
	rm -f main *.o *~
