#include<stdio.h>
main ()
{
int instruct,dig1,dig2,result;
printf("key section\n");
printf("what operation do you want to do?\n");
printf("press 1 for addition(+)\n");
printf("press 2 for substraction(-)\n");
printf("press 3 for multiplication(*)\n");
printf("press 4 for division(/)\n\n");
scanf("%d",& instruct);
printf("\n enter the first number");
scanf("%d",&dig1);
printf("\n enter the second number");
scanf("%d",&dig2);
switch(instruct)
{
case 1:
result =dig1+dig2;
printf("\n the addition of the two digits is %d,result");
break;
case 2:
result =dig1-dig2;
printf("\n the substraction of the two digits is %d",result);
break;
case 3:
result =dig1*dig2;
printf("\n the multiplication of the two digits is %d",result);
break;
case 4:
result =dig1/dig2;
printf("\n the division of the two digits is %d",result);
break;
default:
printf("\n\n error, please follow the instructions at the key section ");
}
} 