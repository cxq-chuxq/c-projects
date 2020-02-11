#include<stdio.h>
int main(void){
    int a, b;
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    if(a == b){
        printf("%d\n", 1);
    }
    else{
        printf("%d\n", 0);
    }
    return 0;
}