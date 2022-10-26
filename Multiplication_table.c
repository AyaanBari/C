#include<stdio.h>
#define R 4
#define C 4

int main()
{
    int r,c,p[R][C];
    int i,j;
    for(j=1;j<=C;j++)
    printf("%4d",j);
    printf("\n");
    printf("_________________________________________\n");
    for(i=0;i<R;i++)
    {
        r=i+1;
        printf("%2d | ",r);
        for(j=1;j<=C;j++)
        {
            c=j;
            p[i][j]=r*c;;
            printf("%4d",p[i][j]);
        }
    printf("\n");
    }
return 0;
}