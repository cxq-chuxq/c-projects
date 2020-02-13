#include<stdio.h>
int main(void){
    int a;
    int i;
    printf("请输入一个整数值：");
    scanf("%d", &a);
    for(i = 1; i <= a; i += 2){
        printf("%d", i);
    }
    putchar('\n');
    return 0;
}