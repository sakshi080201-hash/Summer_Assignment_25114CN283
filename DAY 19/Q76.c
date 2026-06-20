#include <stdio.h>
int main() {
    int n, i, j;    
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    int diagonalSum = 0;
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }
    printf("Sum of principal diagonal elements = %d\n", diagonalSum);
    return 0;
}