#include <stdio.h>

int main(void) {
	int i, j, temp;
	int arr[10] = {10, 1, 5, 8, 7, 6, 4, 3, 2, 9};
	for (i = 0; i < 9; i++) {
		j = i;
		while (j >= 0 && arr[j] > arr[j + 1]) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
