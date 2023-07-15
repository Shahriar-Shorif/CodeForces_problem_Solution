#include<stdio.h>
#define M 2*1
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res1 = a*b;
    int res2 = res1/M;
    printf("%d\n",res2);
    return 0;
}
