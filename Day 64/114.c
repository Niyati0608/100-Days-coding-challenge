Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[--n] = '\0';
    }

    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int length = 0;

        for (int j = i; j < n; j++) {
            unsigned char c = s[j];

            if (visited[c]) {
                break;
            }

            visited[c] = 1;
            length++;
        }

        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
