//Vas
#include <stdio.h>
#include <math.h>
void sort(int b[][5]) {
	for (int j = 0; j < 5; j++)
		for (int n = 4; n >= 0; n--) {
			for (int i = 0; i < n; i++) {
				if (b[i][j] > b[i+1][j]) {
					int min = b[i][j];
					b[i][j] = b[i+1][j];
					b[i+1][j] = min;
				}
			}
		}
	printf("Sorted matrix:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d,   ", b[i][j]);
		}
		printf("\n");
	}
}
/*
 66   21  -3   -1  90
 1    74  -2   80  -1
10   30  20 -50  91
 2     4    5   81   0
33   69  -5   51  24
 */
double geom_average(int b[][5], int j) {
	double sum = 1;
	for (int g = 0; g < 5; g++) {
		sum *= b[j][g];
	}
	return(pow(abs(sum), 0.2));
}
int main() {
	printf("Enter the elements of the matrix\n");
	int i, j;
	static int a[5][5];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("a[%d][%d]=", i + 1, j + 1);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("Unsorted matrix:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d,   ", a[i][j]);
		}
		printf("\n");
	}
	sort(a);
	double arr[5];
	for (int q = 0; q < 5; q++) {
		arr[q] = geom_average(a, q);
	}
	for (int n = 4; n >= 0; n--) {
		for (int l = 0; l < n; l++) {
			if (arr[l] > arr[l + 1]) {
				double temp = arr[l];
				arr[l] = arr[l + 1];
				arr[l + 1] = temp;
			}			
		}
	}
	for (int m = 0; m < 5; m++) {
		printf("%f, ", arr[m]);
	}
	printf("\n");
	double averagemean = 0;
	for (int m = 0; m < 5; m++) {
		averagemean += arr[m];
	}
	printf("%f", averagemean / 5);
}