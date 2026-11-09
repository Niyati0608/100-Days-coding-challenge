Q.138 Print all the enum names abd integer values using a loop.
/*
Sample Test Cases:
input 1:
NO input 
output 1:
red =0
yellow =1
greeen =2
*/ 
#include<stdio.h>
enum color{
    red,
    yellow ,
    green
};
int main(){
    enum color c;
    for(c=red;c<=green;c++){
        if(c==0)
        printf("red=%d\n",c);
        else if(c==1)
        printf("yellow =%d\n",c);
        else if(c==2)
        printf("green= %d\n",c);
    }
    return 0;
}
