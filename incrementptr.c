#include <stdio.h>

int main() {
	int a = 184;
	int *p = &a;
	int *p1 = p + 1;
	printf("Value at incremented pointer: %i\n", *p1);
}
