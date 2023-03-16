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
	xyz=(x*x)+(y*y)+(z*z)+2*(x*y)+2*(y*z)+2*(z*x);
	printf("xyz=%d",xyz);
}
