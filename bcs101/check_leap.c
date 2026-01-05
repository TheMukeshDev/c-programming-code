// WAP that tells whether a given year is a leap year or not.
#include <stdio.h>
void check_leap(int);
int main()
{
    int year;
    printf("enter the year :");
    scanf("%d",&year);
    check_leap(year);
}
void check_leap(int year)
{
    if (year%400==0 || (year%4==0 && year%100!=0))
    {
        printf("%d is a leap year ",year);
    }
    else
    {
        printf("%d is not a leap year ",year);
    }
}