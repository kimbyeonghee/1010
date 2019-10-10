#include <stdio.h>

int main()

{
	int x,y;
	
	printf("x의 값을 입력해주세요: ");
	scanf("%d", &x);
	
	y = 2*x+3;
	
	printf("y의 값은 %d 입니다.", y);
	
	return 0; 
}
