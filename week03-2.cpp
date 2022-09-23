#include <stdio.h>
int main()
{
    printf("請輸入一個數字:");
    int a;
    scanf("%d",&a);
    if(a>10)printf("大於十\n");
    if(a<10)printf("小於十\n");
    if(a==10)printf("等於十\n");
}
