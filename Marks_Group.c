#include<stdio.h>
#define MVAL 50
#define COUNT 11
int main()
{
    float val[MVAL];
    int i,low,high;
    int grp[COUNT]={0};
    for ( i = 0; i < MVAL; i++)
    {
        scanf("%f",&val[i]);
        ++grp[(int) (val[i])/10];
    }
    printf("\n");
    printf("Group    Range    Frequency\n\n");
    for ( i = 0; i < COUNT; i++)
    {
        low=i*10;
        if(i==10)
        high = 100;
        else
        high = low + 9;
        printf("%d%4d to %d%4d\n",i+1,low,high,grp[i]);
    }
    return 0;
}