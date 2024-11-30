#include <stdio.h>
int setbits(unsigned x, int p, int n, int y);
int getbits(unsigned x, int p, int n);

int getbits(unsigned x, int p, int n) {
	return (x >> (p + 1-n)) & ~(~0 << n);
}

int setbits(unsigned x, int p, int n, int y) {
	//x = 0000 0000
	//p = 4 n = length of x - p
	//ex, x = 0100 1001 and y = 1001 1111 and p = 3, n = 2
	//result should be 0111 1001
	//return (x | (~(1 << n) << (n -p +1))) & (y << (n-p+1)) | (~(~(1 << n) << (n -p +1)));
	unsigned a = ~(1 << n) << (p - n + 1);
	unsigned b = y << (p - n + 1);
	unsigned C = x | a;
	unsigned D = b | ~a;

	return C & D;
}

int main() {
	
	int result1 = getbits(12, 4,3);
	printf("getbits: %d\n",result1);	
	int result2 = setbits(222, 6, 4, 26);
	printf("getbits: %d\n",result2);	
	return 0;
}
