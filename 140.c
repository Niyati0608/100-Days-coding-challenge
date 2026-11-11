Q.140 Define a struct wuth enum Gender and print persons gender.
/* 
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male 
*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    scanf("%s", input);

    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    }
    else {
        p.gender = FEMALE;
    }

    if (p.gender == MALE) {
        printf("Male");
    }
    else {
        printf("Female");
    }

    return 0;
}
