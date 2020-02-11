#include<stdio.h>
int main(void){
    int a, b, c, d;
    puts("输入四个整数");
    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    printf("整数C：");
    scanf("%d", &c);
    printf("整数D：");
    scanf("%d", &d);
    if(a == b){
        if(a == c){
            if(a == d){
                printf("最小值为%d\n", a);
            }
            else if(a > d){
                printf("最小值为%d\n", d);
            }
            else{
                printf("最小值为%d\n", a);
            }
        }
        else if(a > c){
            if(c == d){
                printf("最小值为%d\n", c);
            }
            else if(c > d){
                printf("最小值为%d\n", d);
            }
            else if(c < d){
                printf("最小值为%d\n", c);
            }
        }
        else if(a < c){
            if(a == d){
                printf("最小值为%d\n", a);
            }
            else if(a > d){
                printf("最小值为%d\n", d);
            }
            else if(a < d){
                printf("最小值为%d\n", a);
            }
        }
    }
    else if(a < b){
        if(a == c){
            if(a == d){
                printf("最小值为%d\n", a);
            }
            else if(a > d){
                printf("最小值为%d\n", d);
            }
            else if(a < d){
                printf("最小值为%d\n", a);
            }
        }
        else if(a > c){
            if(c == d){
                printf("最小值为%d\n", c);
            }
            else if(c > d){
                printf("最小值为%d\n", d);
            }
            else if(c < d){
                printf("最小值为%d\n", c);
            }
        }
        else if(a < c){
            if(a == d){
                printf("最小值为%d\n", a);
            }
            else if(a > d){
                printf("最小值为%d\n", d);
            }
            else if(a < d){
                printf("最小值为%d\n", a);
            }
        }
    }
    else if(a > b){
        if(b == c){
            if(b == d){
                printf("最小值为%d\n", b);
            }
            else if(b > d){
                printf("最小值为%d\n", d);
            }
            else if(b < d){
                printf("最小值为%d\n", b);
            }
        }
        else if(b > c){
            if(c == d){
                printf("最小值为%d\n", c);
            }
            else if(c > d){
                printf("最小值为%d\n", d);
            }
            else if(c < d){
                printf("最小值为%d\n", c);
            }
        }
        else if(b < c){
            if(b == d){
                printf("最小值为%d\n", b);
            }
            else if(b > d){
                printf("最小值为%d\n", d);
            }
            else if(b < d){
                printf("最小值为%d\n", b);
            }
        }
    }
    return 0;
}