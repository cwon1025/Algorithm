#include <stdio.h>

void merge(int *arr, int start, int middle, int end) {
	int sorted[end + 1];
	int i = start;
	int j = middle + 1;
	int k = start;
	
	// 작은 순서대로 배열에 삽입
	while(i <= middle && j <= end) {
		if(arr[i] <= arr[j]) {
			sorted[k] = arr[i];
			i++;
		} else {
			sorted[k] = arr[j];
			j++;
		}
		k++;
	}
	
	// 남은 데이터도 삽입
	if(i > middle) {
		for(int t = j; t <= end; t++) {
			sorted[k] = arr[t];
			k++;
		}
	} else {
		for(int t = i; t <= middle; t++) {
			sorted[k] = arr[t];
			k++;
		}
	}
	
	// 정렬된 배열 삽입
	for(int t = start; t <= end; t++) {
		arr[t] = sorted[t];
	}
}

void mergeSort(int *arr, int start, int end) {
	if(start < end) {
		int middle = (start + end) / 2;
		mergeSort(arr, start, middle);
		mergeSort(arr, middle + 1, end);
		merge(arr, start, middle, end);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	mergeSort(arr, 0, n - 1);
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
