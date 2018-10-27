#include<stdio.h>
void swap (int *x,int *y)
{
	int temp= *x;
	*x=*y;
	*y=temp;
}
voi main()
{
	int x=10;
	int y=5;

	printf("values before swapping");
	scanf("\n x: %d\n y:%d\n",x,y);
	swap(&x,&y);

	printf("\n values after swapping");
	scanf("\n x:%d\n y:%d\n",x,y);
}

