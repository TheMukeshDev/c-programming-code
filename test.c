#include<stdio.h>
#include<string.h>
int main(void)
{
    int n=10;
char name1[n];
printf("Enter your name: ");
// fgets(name1, n, stdin);
scanf("%s",name1);  // read until space  only limited to one word
printf("Hello, %s", name1);
return 0;


}