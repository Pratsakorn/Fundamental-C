#include <stdio.h>

int main()
{   
    int number,x,y;
    scanf("%d",&number);
    for(x=1;x<13;x++){
        y=number*x;
        printf("%d X %d = %d\n",number,x,y);
    }

    return 0;
}
