#include <stdio.h>

int main() {
    int a, b;
    printf("请输入第一个数：");
    scanf("%d", &a);
    printf("请输入第二个数：");
    scanf("%d", &b);
    int sum = 0;

    int x = a;

    do {
        sum = sum + x;
        x = x + 1;
    } while(x <= b);

    printf("sum is %d\n", sum);
    return 0;
}