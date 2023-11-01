#include<stdio.h>
int main ()
{
int marks;
printf("please enter the marks of student\n");
scanf("%d",& marks);
if(marks>100)
printf("invalid marks");
else
if(marks>=80)
Printf("the student has a distiction grade");
else
if(marks>=60)
printf("the student has a credit grade");
else
if(marks>=40)
printf("the student has a pass grade");
else
if(marks<20)
printf("this is a refer"); 
else
Printf("this is a fail");
}