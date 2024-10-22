main: src/main.c
	clang -o main src/main.c


run: main
	./main

