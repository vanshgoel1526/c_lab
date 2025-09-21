// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0, i, fact;

    scanf("%d", &num);
    originalNum = num;

    while (num > 0) {
        digit = num % 10;

        
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num = num / 10;
    }

    if (sum == originalNum) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
