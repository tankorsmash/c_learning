.PHONY: main
main: src/main.c
	clang -o main \
		-Wall -Wpedantic -Werror -Wformat \
		-fdiagnostics-color=always \
		src/main.c

.PHONY: run
run: main
	./main


.PHONY: watch
watch: main
	watch -n 0.01 -c make run
