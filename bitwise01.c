#include <stdio.h>

int main()
{
	int a = 5, b = 3, c;
	
	c = a & b;
	printf("%d %d %d\n", a,b,c);
	
	c = a | b;
	printf("%d %d %d\n", a,b,c);
	
	c = a ^ b;
	printf("%d %d %d\n", a,b,c);
	
	c = ~a;
	printf("%d %d\n", a,c);
	
	return 0;
	
}
