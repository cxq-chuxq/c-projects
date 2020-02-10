#include<stdio.h>  
int main(void){  
   double a, b;
   printf("请输入您的身高：");  
   scanf("%lf", &a);
   b = (a - 100) * 0.9;
   printf("您的标准体重是：%f\n", b); 
   return 0;  
} 