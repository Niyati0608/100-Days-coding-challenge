Q.136 Use enum to represent menu choices (ADD,SUBTRACT,MULTIPLY)and perform operations using switch.
/* 
Sample test cases :
Input 1:
ADD 10 20
Output 1:
30
*/
#include<stdio.h>
#include<string.h>
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int  main(){
    char choice[20];
    int a,b;
    scanf("%s %d %d",choice,&a,&b);
    enum operation op;
    if(strcmp(choice,"ADD")==0)
    op=ADD;
    else if(strcmp(choice,"subtract")==0)
    op=SUBTRACT;
    else
    op=MULTIPLY;
    switch(op){
        case ADD:
        printf("%d",a+b);
        break;
        case SUBTRACT:
        printf("%d,a-b");
        caase MULTIPLY:
        PRINTF("%d",a*b);
        break;

    }
return 0;

}
