#include<stdio.h>
int main(void){
    int a, b, c, max;
    puts("输入三个整数");
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    printf("整数C：");
    scanf("%d", &c);
    printf("A和B种的最小值是：%d\n", a >= b ? max = b : a);
    printf("三个数的最小值是：%d\n", max >= c ? c : max);
    return 0;
}