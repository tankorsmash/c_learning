#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
};

int add(int a, int b) {
	return a + b;
}

int main() {
	struct Person p;
	p.age = 10;
	printf("Hello, World: %d!!\n%s", add(1, 2), p);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}
	return 0;
}
