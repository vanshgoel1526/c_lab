// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, n, firstDigit, lastDigit, digits = 0, pow = 1;

    scanf("%d", &num);

    n = num;
    lastDigit = n % 10;

    
    while (n >= 10) {
        n = n / 10;
        pow = pow * 10; 
        digits++;
    }
    firstDigit = n;

   
    if (firstDigit == lastDigit || num < 10) {
        printf("%d\n", num);
        return 0;
    }

    
    int middle = (num % pow) / 10;

    
    int newNum = lastDigit * pow + middle * 10 + firstDigit;

    printf("%d\n", newNum);

    return 0;
}
