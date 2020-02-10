#include<stdio.h>  
int main(void){  
   int a, b, sum, wa;  
   puts("请输入两个整数");  
   printf("整数1:");  
   scanf("%d", &a);  
   printf("整数2:");  
   scanf("%d", &b); 
   sum = a + b;
   wa = a * b; 
   printf("它们和是%d\n", sum);
   printf("它们的积是%d\n", wa);
   return 0;  
}  