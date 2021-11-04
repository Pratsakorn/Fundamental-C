#include <stdio.h>

int main()
{   
    int number,x;
    scanf("%d",&number);
    for(x=1;x<13;x++){
        printf("%d X %d = %d\n",number,x,number*x);
    }

    return 0;
}
