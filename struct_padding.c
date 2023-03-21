#include <stdio.h>
struct car_struct {
	char id[5];
	float length;
	int num_wheels;
};
typedef struct car_struct car_t;
struct garage_struct {
	char name[24];
	car_t cars[10];
};
int main() {
	printf("Size: %d\n", sizeof(struct garage_struct));
}
