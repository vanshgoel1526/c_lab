// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; 

    
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) { 
                printf("%c", ch);
                return 0;
            }
        }
    }

    printf("No repeating character");
    return 0;
}
