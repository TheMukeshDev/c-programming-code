// WAP to find the reverse of a number
#include <stdio.h>

int main()
{
    int num, reverse=0;
    printf("enter the number : ");
    scanf("%d",&num);
    while (num>0)
    {
       int reminder=num%10 ;
    //    printf("reminder is %d\n",reminder);
       reverse=(reverse*10)+reminder;
       num=num/10;
      
    }
    printf("reversed  number is %d",reverse);
    
}