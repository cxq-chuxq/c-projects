#include <stdio.h>
int main(){
    int n,x=1;
    printf("请输入一个数：");
    scanf("%d",&n);
    while(x<n){
        printf("%d\n",x);
        x*=2;
    }
    return 0;
}