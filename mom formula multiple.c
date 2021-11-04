#include <stdio.h>

int main()
{   
    int number,x=1,y;
    scanf("%d",&number);
    while(x<13){
        y=number*x;
        printf("%d X %d = %d\n",number,x,y);
        x++;
    }

    return 0;
}
