//write a  program to subtract matrix

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int A[10][10], B[10][10], Difference[10][10];

    
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            Difference[i][j] = A[i][j] - B[i][j];
        }
    }

    
    printf("Difference of the matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", Difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}