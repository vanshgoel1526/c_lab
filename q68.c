// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, pos;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &pos);

    
    for (int i = pos + 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    
    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
