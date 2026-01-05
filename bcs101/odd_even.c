// WAP that finds whether a given number is even or odd.

#include <stdio.h>

void check_num(int num);

int main()
{
    int num;
    printf(" enter the number : ");
    scanf("%d",&num);
    check_num(num);

}

void check_num(int num)
{
    if (num%2==0)
    {
        printf("%d is even number",num);
    }
    else
    {
        printf("%d is odd number",num);
    }
}