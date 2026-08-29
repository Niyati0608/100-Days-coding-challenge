Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
int main()
{
    int n,digit,divisor=1;
    printf("enter a binary number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
        return 0;
    }
    while(n/divisor>=10)
    divisor=divisor*10;
    while(divisor>0)
    {
        digit=n/divisor;
        n=n%divisor;
        if(digit==0)
        printf("1");
        else
        printf("0");
        divisor=divisor/10;
    }
    return 0;
}
