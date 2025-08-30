// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int ts, hours, minutes, seconds;

    scanf("%d", &ts);

    
    hours = ts / 3600;

    
    ts = ts % 3600;

   
    minutes = ts/ 60;

  
    seconds = ts % 60;

    
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

