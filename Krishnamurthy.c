#include<stdio.h>
int main()
{
int i,n,temp,sum=0,fact = 1,j;
temp=n;
printf("Enter the number");
scanf("%d",&n);
temp=n;
while (temp!=0)
{
   j=temp%10;
   for ( i = 1; i <=j; i++)
   {
       fact = fact *i;
   }
    sum = sum + fact;
    temp = temp/10;
}
if (sum == n)
{
    printf("Krishnamurthy Number");
}
else
printf("the number is not krishnamurthy");
return 0;
}