#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);
    do{
        if(no % 2 == 0){
            printf("+");
        }
        else{
            printf("-");
        }
    }while (no-- > 0);
    putchar('\n');

    return 0;
}