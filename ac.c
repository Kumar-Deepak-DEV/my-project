#include <stdio.h>
int main(){//hi 
    int a,b;
    scanf("%d",&a);
    for (b=0;b<=10;b=b+1){
        int d=a*b;
        printf("%d * %d = %d\n",a,b,d);
    }
    return 0;
}