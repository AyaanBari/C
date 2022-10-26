#include <stdio.h>
#include<stdlib.h>
int main()
{
    int s[10]={0};
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int rem;
    while(n>0)
    {
        rem=n%10;
        if(s[rem]==1)
        break;
        else
        s[rem]=1;
        n=n/10;
    }
    if (n>0)
    {
        printf("Yes");
    }
    else
    printf("No");
    return 0;
    
}