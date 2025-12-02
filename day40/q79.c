#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (int start = 0; start < n; start++) {
        int i = start, j = 0;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    for (int start = 1; start < m; start++) {
        int i = n - 1, j = start;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}