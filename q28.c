//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n;
    long long product = 1;  
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    int hasEven = 0;

   
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("%lld\n", product);
    } else {
        printf("No even numbers in the range.\n");
    }

    return 0;
}
