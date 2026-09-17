Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int mat[100][100];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    int distinct = 1;
    int n = (rows < cols) ? rows : cols;  // diagonal length

    for (int i = 0; i < n && distinct; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    printf("%s\n", distinct ? "True" : "False");
    return 0;
}
