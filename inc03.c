#include <stdio.h>
int main()
{
	int a,b,c;
	
	a = 6;

	b= a++;
    printf("%d %d\n", a, b);

    c = ++a;
    printf("%d %d\n", a, c);
	

	
	return 0;
}
