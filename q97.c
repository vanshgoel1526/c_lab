// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;

    if (str[i] != ' ' && str[i] != '\n') {
        printf("%c.", toupper(str[i]));
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            printf("%c.", toupper(str[i+1]));
        }
    }

    return 0;
}
