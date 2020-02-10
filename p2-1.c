#include<stdio.h>  
int main(void){  
   int a, b;  
   puts("请输入两个整数");  
   printf("整数1:");  
   scanf("%d", &a);  
   printf("整数2:");  
   scanf("%d", &b);  
   printf("前者是后者的%.0f%%\n", ((double)a / (double)b) * 100);
   return 0;  
}  