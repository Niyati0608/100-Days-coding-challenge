Q134.Define an enum with sucess,failure and timeout ,and print message accordingly.
*/
Sample test cases:
input 1:
Failure 
Output 1:
Operation Failed 
*/
#include<stdio.h>
#include<string.h>
enum Status{
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main()
{
    char input[20];
    scanf("%s",input);

    if(strcamp(input ,"SUCCESS")==0){
        printf("operation successful");
    }

    else if (strcamp(input,"FAILURE")==0){
        PRINTF("OPERATION FAILED");
    }
    else if(strcamp(input,"TIMEOUT")==0){
        printf("operation timed out");
    }
    return 0;
}
