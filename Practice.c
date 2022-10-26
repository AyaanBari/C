#include<stdio.h> 
#include<math.h> 
 int main()    
{    
int n,r,temp,i,c=0;
double sum=0;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n; 
i= temp;
while(i>0)
{
    i=i/10;
    c++;
}
while(n>0)    
{    
r=n%10;    
sum=sum+ pow(r,c);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
} 
