#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=i*2-1;
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
