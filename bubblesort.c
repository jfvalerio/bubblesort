#include <stdio.h>

void swap(int *x, int *y) {
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void printArray(int *array) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

void bubblesort(int *array) {
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

int main(int argc, char **argv) {
	int numbers[] = {5, 3, 1, 4, 2};

	printArray(numbers);
	bubblesort(numbers);
	printArray(numbers);

	return 0;
}
