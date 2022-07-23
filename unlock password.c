#include <stdio.h>
/*ทำไปเรื่อยๆตราบเท่าที่เงื่อนไขเป็นจริง แล้วหลุดจากloopทันทีเมื่อเื่อนไขเป็นจริง*/
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
