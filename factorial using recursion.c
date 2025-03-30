#include<stdio.h>
int fact(int n);
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",fact(x));
	return 0;
}
int fact(int z)
{
	int pdt=1;
	if (z!=0)
	{
		return z*fact(z-1);
	}
	else
	{
		return 1;
	}
}
