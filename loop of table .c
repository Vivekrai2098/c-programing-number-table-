#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int b;
int c;
int i;
clrscr();
printf("enter your first table number you want ?");
scanf("%d"&a);	
printf("enter your second number ....which want to end the table  ?");
scanf("%d"&b);	
printf("your first number is :=%d",a)
printf("your second  end number is :=%d",b);
for(i=1;i<=b;i++){
	c=i*a;
	printf("\n%dX%d=%d",a,i,c);
	
}	
getch();	
	
	
	
	
	
}