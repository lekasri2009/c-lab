#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("=====BRANCHING STATEMENTS=====\n");
printf("Enterthefirstnumber:");
scanf("%d",&a);
printf("Enter the secondnumber:");
scanf("%d",&b);
printf("\n-----MENU-----\n");
printf("1.Check Positive,Negative or zero\n");
printf("2.Check even or Odd\n");
printf("3. Find the largest ofTwo Number\n");
printf("\nenter your choice:");
scanf("%d",&choice);
printf("\n-----RESULT-----\n");
switch(choice)
{
case1:
if(a>0)
printf("%d isPositive",a);
else if(a<0)
printf("%d is Negative",a);
else
printf("%d is Zero",a);
break;
case2:
if(a%2==0)
printf("%d is Even",a);
else
printf("%disOdd",a);
break;
case3:
if(a>b)
{
res=a;
printf("%d is the largest Number",res);
}
else if(b>a)
{
res=b;
printf("%d is the largest Number",res);
}
else
{
printf("Both numbers are equal");
}
break;
case4:
if(a%5==0)
printf("%d is Divisible by 5",a);
else
printf("%d is Not Divisible by 5",a);
break;
default:
printf("Invalid choice.");
}
return 0;
}

