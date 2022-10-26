#include<stdio.h>
int main(){
    int a=5,*x;
    x=&a;
    printf("%d ,%d,%d",(int)x,(int)*x,(int)&x);
    return 0;
}