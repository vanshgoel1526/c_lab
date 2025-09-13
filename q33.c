// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num = num / 10;
    }

    if (result == original) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}
