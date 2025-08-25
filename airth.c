// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/


#include<stdio.h>

int main(void){
int a,b,sum,pro,dif,quo;
printf("enter a no");
scanf("%d" ,&a);
printf("enter a no");
scanf("%d" ,&b);
 sum=a+b;
 pro=a*b;
 dif=a-b;
 quo=a/b;

printf("the sum is %d \n", sum);
printf("the product is %d \n", pro);
printf("the difference is %d \n", dif);
printf("the quotient is %d \n", quo);
return 0;
}
