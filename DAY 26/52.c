Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

  #include<stdio.h>
int main()
{
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        if(i<=3)
         n=2*i-1;
        else
         n=2*(5-i)+1;
        for(j=1;j<=n;j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
