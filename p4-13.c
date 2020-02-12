#include<stdio.h>
int main(void){
    int a;
    int sum = 0;
    int i = 0;
    printf("输入一个整数；");
    scanf("%d", &a);
    for(i = 0; i <= a; i++){
        sum += i;
    }
    printf("和为：%d\n", sum);
    return 0;
}