//WAP to find the sum of two numbers using pointer.
#include<stdio.h>
int main()
{	
	int a=45,b=8;
	int *p1,*p2,sum;
	p1=&a;
	p2=&b;
	
	 sum=*p1+*p2;
	 printf("The sum is : %d",sum);
	 return 0;

}
