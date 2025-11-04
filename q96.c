// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    
   
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        int start = i;

       
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        int end = i - 1;

       
        for (int j = end; j >= start; j--)
            printf("%c", str[j]);

       if (str[i] == ' ')
            printf(" ");

        i++;
    }

    return 0;
}
