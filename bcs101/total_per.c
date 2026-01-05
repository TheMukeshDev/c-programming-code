// WAP that accepts marks of five subjects and finds percentage and prints
// grades according to the following criteria:
// a. Between 90-100%-----Print ‘A’
// b. 80-90%-----------------Print ‘B’
// c. 60-80%-----------------Print ‘C’
// d. Below 60%-------------Print ‘D’

#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total,percent;
    printf("enter 5 subjects marks :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    // printf("%d",total); 
    percent=(total*100)/500;
    if (percent<=100 && percent>=90 )
    {
     printf("grade :  A  \n with percentage %d",percent);
    }
    else if (percent <=90 && percent>=80 )
    {
       printf("grade : B  \n with percentage %d",percent) ;
    }
    else if (percent <=80 && percent>=60 )
    {
       printf("grade : C  \n with percentage %d",percent) ;
    }

    else if(percent<60)
    {
       printf("grade : D \n with percentage %d",percent) ;
    }
    else
    {
        printf("invalid input")
    }
}