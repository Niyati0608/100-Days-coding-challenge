Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
int main()
{
    int n,first,last,digits,power,middle ,result;
    printf("enter a number:");
    scanf("%d",&n);
    last=n%10;
    power=1;
    digits=n;
    while(digits>=10)
    {
        digits=digits/10;
        power=power*10;
    }
    first=digits;
    middle=(n%power)/10;
    result=last*power+middle*10+first;
    printf("number after swappig first and last digit =%d",result);
    return 0;
}
