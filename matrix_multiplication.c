#include <stdio.h>
#include <stdlib.h>

int main() {
    int **a, **b, **result;
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Allocate memory for matrices
    a = (int **)malloc(r1 * sizeof(int *));
    b = (int **)malloc(r2 * sizeof(int *));
    result = (int **)malloc(r1 * sizeof(int *));

    for (i = 0; i < r1; i++)
        a[i] = (int *)malloc(c1 * sizeof(int));

    for (i = 0; i < r2; i++)
        b[i] = (int *)malloc(c2 * sizeof(int));

    for (i = 0; i < r1; i++)
        result[i] = (int *)malloc(c2 * sizeof(int));

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;

            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < r1; i++)
        free(a[i]);

    for (i = 0; i < r2; i++)
        free(b[i]);

    for (i = 0; i < r1; i++)
        free(result[i]);

    free(a);
    free(b);
    free(result);

    return 0;
}
