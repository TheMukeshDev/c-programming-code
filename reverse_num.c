#include <stdio.h>

void reverse_num(int num,int remind,int reverse){
    
    while (num!=0)
    {
        
     remind=num%10;
     printf("%d",reverse*10+remind);
     num/=10;
    }
}
int main()
{
    int num;
    int remind,reverse=0;
    void reverse_num(int,int,int);
    printf("enter the number : ");
    scanf("%d",&num);
    reverse_num(num,remind,reverse);

}