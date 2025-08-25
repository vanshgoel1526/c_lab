//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>

int main() {
    double principal, rate;
    int time;
    double si, ci, amount = 1.0;

    scanf("%f %f %d", &principal, &rate, &time);

    si = (principal * rate * time) / 100;
    for (int i = 0; i <time; i++) {
        amount =amount* (1 + rate / 100);
    }

    ci = principal * amount - principal;

    printf("Si=%f, Ci=%f\n", si, ci);

    return 0;
}

