Q.144 Write a function that accepts a structure as parameter and prints its members.
*/
Sample Test Cases:
Input 1:
Student:Neha 104 92 
Output 1:
Name:Neha|Roll:104|Marks:
92
*/
#include<stdio.h>
struct student{
    char name[20];
    int roll;
    int marks;

};
void display (struct student s)
{
    printf("name:%s|roll:%d|marks:%d",s.name,s.roll,s.marks);
}
int main(){
    struct student s;
    scanf("%s %d %d",s.name,s.roll,&s.marks);
    display (s);
    return 0;
}
