#include<stdio.h>  
int main(void){  
   int a, b, c;  
   int wa;  
   puts("请输入两个整数");  
   printf("整数1:");  
   scanf("%d", &a);  
   printf("整数2:");  
   scanf("%d", &b);
   printf("整数3:");  
   scanf("%d", &c);  
   wa = a + b + c;  
   printf("它们的和是%d\n", wa);  
   return 0;  
} 