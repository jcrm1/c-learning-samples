#include <stdio.h>
int main() {
	int arr[5] = {1,2,3,4,5};
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%i\n", arr[i]);
	}
	int *ptr = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%i\n", *ptr);
		ptr++;
	}
	int *ptr2 = 0;
	printf("%i\n", *ptr2);
}
