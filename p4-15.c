#include <stdio.h>
int main(){
    int a,b,c;
    double t = 0;
    printf("开始数值（cm）：");     scanf("%d",&a);
    printf("结束数值（cm）：");     scanf("%d",&b);
    printf("间隔数值（cm）：");     scanf("%d",&c);
    for(int i = 0 ;i <= b; i+=c){
        t = (i-100)*0.9;
        printf("%dcm       %.2fkg\n",i,t);
    }
    return 0;
}