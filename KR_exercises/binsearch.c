#include <stdio.h>
int binsearch(int x, int v[], int n);

int binsearch(int x, int v[], int n){
	
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;

	}
	return -1;
}

int binsearch2(int x, int v[], int n) {
	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while (low <= high && v[mid] != x) {
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	if v[mid] == x
		return mid;
	else
		return -1;
}

int main() {
	
	return 0;
}
