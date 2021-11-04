#include <stdio.h>
/* do-while ทำก่อนค่อยตรวจสอบเงื่อนไข ครอบ doปล่อย while*/
int main()
{
    char ans;
    do{ 
        printf("Do u want to exist? [y]es or [n]o ");
        scanf("%c",&ans);
    }
    while(ans !='y');
    printf("Goodluck");

    return 0;
}
