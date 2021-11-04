#include <stdio.h>

int main()
{
    int num;
    printf("Give me some number ");
    scanf("%d",&num);
    if ((100>=num)&&(num>=1)){
        printf("1<=%d<=100",num);
    }
    else {
        printf("Error");
    }
    return 0;
}
