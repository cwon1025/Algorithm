#include <stdio.h>

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int *data, int start, int end) {
	if (start >= end) {
		return;
	}

	int key = start;
	int i = start + 1;
	int j = end;

	while (i <= j) {
		while (data[i] <= data[key]) {
			i++;
		}
		while (data[j] >= data[key] && j > start) {
			j--;
		}
		if (i > j) {
			swap(&data[j], &data[key]);
		} else {
			swap(&data[j], &data[i]);
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}


int main(void) {
	int arr[1000001];
	int number;
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		scanf("%d", &arr[i]);
	}
	printf("--------------------\n");
	quickSort(arr, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
