// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    char *words[100];
    int count = 0;

    
    char *token = strtok(str, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    
    printf(" %s", words[count - 1]);

    return 0;
}
