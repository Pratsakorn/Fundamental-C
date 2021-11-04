#include <stdio.h>
/* C ใช้ a<X<b(ประโยคเงื่อนไม่ได้) ต้องเขียนเต็มฟอร์ม */
int main()
{
    int grade;
    printf("Tell me your score ");
    scanf("%d",&grade);
    if ((100>=grade)&&(grade>=80)){
        printf("A");
    }
    else if((79>=grade)&&(grade>=70)){
        printf("B");
    }
    else if((69>=grade)&&(grade>=60)){
        printf("C");
    }
    else if((59>=grade)&&(grade>=50)){
        printf("D");
    }
    else {
        printf("F");
    }
    return 0;
}
