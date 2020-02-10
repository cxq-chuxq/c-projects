#include<stdio.h>
int main(){
    int a;
    int b;
    printf("输入第一个数：");
    scanf("%d", &a);
    printf("输入第二个数：");
    scanf("%d", &b);
    printf("%d减去%d的结果是%d\n", a, b, a - b);
    return 0;
}