#include<stdio.h>
main ()
{
int salary;
printf("please enter the salary\n");
scanf("%d",&salary);
switch (salary/20000)
{
case 1:
printf("error\n");
break;
case 2:
printf("job group H\n");
break;
case 3:
printf("job group j\n");
break;
case 4:
printf("job group k\n");
break;
case 5:
printf("job group l\n");
break;
case 6:
printf("job group M\n");
break;
case 7:
printf("job group N\n");
break;
case 8:
printf("job group P\n");
break;
default:
case 9:
printf("job group Q");
}
return 0;
}