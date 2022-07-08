/*
project:  simple calculator that takes two numbers and outputs the sum ,difference, product and quotient of the numbers
Author: waithira philip mburu
Compiler:C89
License: MIT
Date:July 2022
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // variable declaration
    float num1,num2,sum,difference,product,quotient;
    printf("tCalculator!\n");
   // input
    printf("Enter two numbers: ");
    scanf("%f%f",&num1,&num2);
    // computation
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    // output
    printf("%8.2f + %8.2f = %8.2f\n",num1,num2,sum);
    printf("%8.2f - %8.2f = %8.2f\n",num1,num2,difference);
    printf("%8.2f * %8.2f = %8.2f\n",num1,num2,product);
    printf("%8.2f / %8.2f = %8.2f\n",num1,num2,quotient);
    return 0;
}
