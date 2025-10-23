// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int first = 1; 
    for (int d = 0; d < n + m - 1; d++) {
        int row, col;

        
        if (d < m)
            row = 0, col = d;
        else
            row = d - m + 1, col = m - 1;

       
        while (row < n && col >= 0) {
            if (!first) printf(" ");
            printf("%d", matrix[row][col]);
            first = 0;
            row++;
            col--;
        }
    }

    printf("\n");
    return 0;
}

