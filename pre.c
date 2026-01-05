#include <stdio.h>
int main()
{
    printf("fILE %s\n",__FILE__);
    printf("Time %s\n",__TIME__);
    printf("date %s\n",__DATE__);
    printf("line %d\n",__LINE__);
    printf("standard %d\n",__STDC__);
    return 0;
}