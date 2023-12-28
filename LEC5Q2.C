#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("Enter the value of a:");
	scanf("%d",&a);

	if(a>0)printf("Number is positive......");
	else if (a<0)  printf("Number is negative.....");
	else if (a==0) printf("Number is neutral.......");

getch();
}
