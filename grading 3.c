#include<stdio.h>
int main ()
{
int a;
printf("please enter the marks of student\n");
scanf("%d",&a);
if(a>=80)
printf("this a distiction grade");
else
if(a>=60)
printf("this is a credit grade");
else
if(a>=40)
printf("this is a pass grade");
else
printf("refer");
}