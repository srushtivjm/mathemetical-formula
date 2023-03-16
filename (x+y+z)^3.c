#include<stdio.h>
main()
{
	int x,y,z,xyz;
	
	printf("Enter value of x=");
	scanf("%d",&x);
	printf("Enter value of y=");n
	scanf("%d",&y);
	printf("Enter value of z=");
	scanf("%d",&z);
	
	xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(x+z));
	printf("xyz=%d",xyz);
}
