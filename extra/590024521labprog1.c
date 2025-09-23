#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    if (n < 2) {
        printf("At least two numbers are required to find the second largest.\n");
        return 1;
    }

    int arr[n];

   
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int first, second;

    
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (first == second) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}

