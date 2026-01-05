#include <stdio.h>

int fabonacchi(int n){
    int first=0;
    int second=1;
    if (n>=1){
        printf(" %d",first);
    }
    if (n>=2){
        printf(" %d",second);

    }
    if (n>2){
        int temp=0;
        for (int i=3; i<=n; i++)
        {
            temp=first+second;
            printf(" %d",temp);
            first=second;
            second=temp;
        }
    }

}
int main()
{
    int n;
    printf("enter last number : ");
    scanf("%d",&n);
    fabonacchi(n);
    return 0;
}