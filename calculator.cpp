#include<stdio.h>
int main()
{
int a,b,opt;
printf("enter two intergers\n");
printf("enter the first integer\t");
scanf("%d",&a);
printf("enter the second integer\t");
scanf("%d",&b);
printf("enter the operator\t");
printf("eneter 1 ---Addition\n");
printf("eneter 2 ---Subtraction\n");
printf("eneter 3 ---MUL\n");
printf("eneter 4 ---Modulus\n");
scanf("%d",&opt);

switch(opt)
{
case 1://addittion
printf("the sum of the integers=%d",a+b);
break;
case 2://subtraction
printf("the difference of the integers=%d",a-b);
break;
case 3://multiplication
printf("the product of the integers=%d",a*b);
break;
case 4://modulus
printf("the remainder of the division%d",a%b);
break;
default:
printf("syntax error\n");

}
}
