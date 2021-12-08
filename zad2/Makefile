# Makefile

all: main

main: main.o wynik.o f.o
	clang -o main main.o wynik.o f.o -lm

main.o: main.c
	clang -Wextra main.c

wynik.o: wynik.c
	clang -Wextra wynik.c
	
f.o: f.c
	clang -Wextra f.c

clean:
	rm -f main *.o *~
