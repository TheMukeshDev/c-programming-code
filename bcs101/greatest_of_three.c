// WAP to find the greatest of three numbers.
#include <stdio.h>

int main(){
    int a,b,c,greatest;
     int greatest_num(int ,int ,int);
     printf("enter all three numbers : ");
     scanf("%d%d%d",&a,&b,&c);
     greatest=greatest_num(a,b,c);
     printf("%d is greatest number",greatest);
}
int greatest_num(int a, int b, int c)
{
    if (a>b && a>c)
    {
     return a;
    }
    else if (b>c && b>a)
    {
        return b;
    }
    else
    {
        return c;
    }
}