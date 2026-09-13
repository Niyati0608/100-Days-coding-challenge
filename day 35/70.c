Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
  #include <stdio.h>

int main() {
    int n, k, i, j, temp;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (j = 0; j < k; j++) {
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
