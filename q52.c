/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    
    int starGroups[] = {1, 3, 5, 3, 1};
    int numGroups = sizeof(starGroups) / sizeof(starGroups[0]);

    for (int i = 0; i < numGroups; i++) {
        for (int j = 0; j < starGroups[i]; j++) {
            printf("*\n");
        }

        
        if (i != numGroups - 1) {
            printf("\n");
        }
    }

    return 0;
}
