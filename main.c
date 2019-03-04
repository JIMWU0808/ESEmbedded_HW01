#include <stdio.h>
#include <stdlib.h>

int (*p[4])(int x,int y);
int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{

	p[0] =plus;
	p[1] =minus;
	p[2] =multiply;
	p[3] =divided;	

	int a,b,c;
	int ans;
        printf("enter two number:");
	scanf("%i %i", &a, &c);	//IF ELSE IF
	printf("0:plus,1:minus,2:multiply,3:divided\n");
	printf("enter operation:");
	scanf("%d", &b);
	ans=(*p[b])(a,c);
	printf("%d", ans);
        return 0; 
}
