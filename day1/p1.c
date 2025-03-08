
#include<stdio.h>
//# is preprocessor include is to fetch the file stdio.h which contains the header with all the function calls. <> fetches the path of file inside
int main()
//int is the return type: data type of returned val
{
int inputNum = 0;
puts("Enter a number to check if it is Even ");
scanf("%d",&inputNum); // return type ofthis is 1 as it takes only 1 input per run
if (inputNum % 2 == 0)
    printf("%d is even",inputNum);
else
    printf("%d is not even",inputNum);
return 0;
}
// short int 2 bytes long int 4 bytes
