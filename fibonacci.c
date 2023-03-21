#include <stdio.h>

#define SIZE 20000

int main(int argc, char **argv) {
	if (argc != 2) return -1;
	unsigned long seq[SIZE];
	seq[0] = 0; /* Avoid errors in the for loops by setting the first couple values ahead of time */
	seq[1] = 1; /* (see above) */
	int max = -1;
	int status = sscanf(argv[1], "%i", &max);
	if (status != 1) return -2;
	for (int i = 2; i < max; i++) {
		seq[i] = seq[i - 1] + seq[i - 2];
	}
	for (int i = 0; i < max; i++) {
		printf("%lu", seq[i]);
		if (i != max - 1) printf(" ");
	}
	printf("\n");
	return 0;
}
