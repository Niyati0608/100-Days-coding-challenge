Q.143 Find and print the student highest marks.
/*
Sample Test Cases :
Input 1:
3 Students:Ravi 101 95,Sita 102 85 ,Aman 103 88
Output 1:
Topper:Ravi(marks:95)
*/
#include<stdio.h>
struct Student{
    char name[20];
    int roll;
    int marks;
};
int main()
{
    struct Student s[3];
    int i, top=0;
    for(i=0;i<3;i++)
    {
        scanf("%s %d %d" ,s[i].name,&s[i].roll,&s[i].marks);
    }
    for(i=0;i<3;i++)
    {
        if(s[i].marks>s[top].marks)
        {
            top=i;
        }
    }
    printf("topper:%s(marks:%d)",s[top].name,s[top].marks);
    return 0;
}
