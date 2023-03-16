#include<stdio.h>
main()
{
	int x,y,z,xyz;
	 
	printf("Enter value of x=");
	scanf("%d",&x);
	printf("Enter value of y=");
	scanf("%d",&y);
	printf("Enter value of z=");
	scanf("%d",&z);
	//742
	xyz=x*x*x-y*y*y-z*z*z-3*x*x*y+3*x*y*y-3*y*y*z+3*x*z*z-3*x*x*z+6*x*y*z;
	printf("xyz=%d",xyz);
}
