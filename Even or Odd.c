#include <stdio.h>

int main()
{
    int no;
    printf("Type number ");
    scanf("%d",&no);
    if (no % 2 == 0){
        printf("Even");
    }
    else {
        printf("Odd");
    }
    return 0;
}
