#include <stdio.h>
unsigned invert(unsigned x, int p, int n);

unsigned invert(unsigned x, int p, int n) {
	
	unsigned result, C, D;
	unsigned a = ~(~0 << n);
	unsigned b = ~(a << (p - n + 1));
	unsigned c = ~(b | x);
	unsigned d = b & x;
	//C = ~(x | ( ~(( ~(1 << n)) << (p -n + 1))));
	//D = x & (~((~(1 << n)) << (p - n + 1)));
	
	return c | d;
}

int main() {
	unsigned result;	
	result = invert(15, 4, 3); 
	printf("result: %d\n", result);
	return result;
}
