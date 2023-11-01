#include <stdio.h>
int main()
{
int score;
printf("please enter the score of student\n");
scanf("%d",&score);
switch (score/10)
{
case 10:
printf("inavalid grade");
break;
case 9:
printf("distinction 1\n");
break;
case 8:
printf("distinction\n");
break;
case 7:
printf("credit 3\n");
break;
case 6:
printf("credit 4\n");
break;
case 5:
printf("pass 5\n");
break;
case 4:
printf("pass 6\n");
break;
case 3:
printf("refer 7\n");
break;
case 2:
printf("refer 8\n");
break;
default:
case 1:
printf("fail\n");
}
return 0;
}