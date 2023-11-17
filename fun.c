#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
int sum2(int, int);

int main()
{
	int a = 5, b = 8;

	int x = 10, y = 6;
	 sum(a,b);
	 sum2(x,y);

}

int sum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	printf("sum = %d\n", sum);


}

int sum2(int x, int y)
{
	//int x = 2, y = 3,
	  int sum = 0;
	sum = x + y;
	printf("%d\n", sum);

}
