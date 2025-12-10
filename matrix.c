#include <stdio.h>

int main() {
    int n;

    printf("Enter the  row & column : ");
    scanf("%d", &n);

    int array[n][n], array2[n][n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            array2[j][i] = array[i][j];
        }
    }

    printf("\nThe matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
