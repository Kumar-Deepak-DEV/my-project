#include <stdio.h>
int main(){
    int a,b;
/*for(a=0;a<=10; a=a+1){
        printf("%d\n",a);
    }*/
    scanf("%d",&a);
    for (b=0;b<=10;b=b+1){
        int d=a*b;
        printf("%d * %d = %d\n",a,b,d);
    }
    return 0;
}