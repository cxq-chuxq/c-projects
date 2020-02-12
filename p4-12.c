#include <stdio.h>
int main(){
int no,c=0;
do {
printf("请输入一个正整数：");
scanf("%d", &no);
if (no <= 0){
puts("请不要输入非正整数！！！");
        }
    } while (no <= 0);
printf("%d的位数是：",no); 
// while (no > 0) {
//     printf("%d", no % 10);
//     no /= 10;
// }
while(no>0){
        no = no/10;
        c++;
    }
printf("%d",c);
puts("。");
return 0;
}