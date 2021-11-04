#include <stdio.h>

int main()
{   
    int pass;
    do{
    printf("Password? ");
    scanf("%d",&pass);
    }
    while(pass!=1234);
    printf("correct!!\n");
    printf("press 'enter' to unlock");

    return 0;
}
