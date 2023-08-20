#include <stdio.h>

void print_kth_row(int M, int N, int matrix[M][N], int k) {

    printf("Elements %d matrix line:\n", k);
    for (int j = 0; j < N; j++) {
        printf("%d ", matrix[k-1][j]);
    }
    printf("\n");
}

void find_max_in_columns(int M, int N, int matrix[M][N]) {

    int max_elements[N];
    for (int j = 0; j < N; j++) {
        int max_element = matrix[0][j];
        for (int i = 1; i < M; i++) {
            if (matrix[i][j] > max_element) {
                max_element = matrix[i][j];
            }
        }
        max_elements[j] = max_element;
    }

    printf("Max elements in matrix column:\n");
    for (int j = 0; j < N; j++) {
        printf("%d ", max_elements[j]);
    }
    printf("\n");
}

int main() {

    int M = 3;
    int N = 4;
    int K;
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printf("Enter the number of column: ");
    scanf("%d", &K);

    print_kth_row(M, N, matrix, K);
    find_max_in_columns(M, N, matrix);

    return 0;
}
