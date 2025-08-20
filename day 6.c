#include <stdio.h>

void insert_tuple(int brr[][2], int p, int q, int m) {
    brr[m][0] = p;
    brr[m][1] = q;
}

int sum_zero(int arr[], int n, int brr[][2]) {
    int m = 0;
    int p, q;
    for (int i = 0; i < n; i++) {
        int sum = arr[i];
        if (sum == 0) {
            p = i;
            q = i;
            insert_tuple(brr, p, q, m);
            m++;
        }
        for (int j = i + 1; j < n; j++) {
            sum = sum + arr[j];
            if (sum == 0) {
                p = i;
                q = j;
                insert_tuple(brr, p, q, m);
                m++;
            }
        }
    }
    return m; // number of subarrays found
}

int main() {
    int arr[6] = {1, 2, -3, 3, -1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int brr[100][2];  // allocate large enough array
    int ans = sum_zero(arr, n, brr);

    for (int i = 0; i < ans; i++) {
        printf("(%d,%d),", brr[i][0], brr[i][1]);
    }
    return 0;
}
