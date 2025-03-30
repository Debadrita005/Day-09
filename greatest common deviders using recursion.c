#include<stdio.h>
int gcd(int x, int y);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",gcd(x,y));
	return 0;
}
int gcd(int z1,int z2)
{
	if (z2!=0)
	return gcd(z2,z1%z2);
	else
	return z1;
}
