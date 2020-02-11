#include<stdio.h>
int main(void){
    int a, b, c;
    puts("输入三个整数");
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    printf("整数C：");
    scanf("%d", &c);
    if(a == b){
        if(a == c){
            printf("最小值为%d\n", a);
        }
        else if(a > c){
            printf("最小值为%d\n", c);
        }
        else{
            printf("最小值为%d\n", a);
        }
    }
    else if(a > b){
        if(b == c){
            printf("最小值为%d\n", b);
        }
        else if(b > c){
            printf("最小值为%d\n", c);
        }
        else{
            printf("最小值为%d\n", b);
        }
    }
    else if(a < b){
        if(a == c){
            printf("最小值为%d\n", a);
        }
        else if(a > c){
            printf("最小值为%d\n", c);
        }
        else{
            printf("最小值为%d\n", a);
        }
    }
    return 0;
}