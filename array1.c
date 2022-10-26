#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter array lenght");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i <=n ; i++) {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=n ; i++) {
        printf("%d \t",a[n]);
    }
    return 0;
}