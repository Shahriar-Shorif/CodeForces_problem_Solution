#include<stdio.h>
int main()
{
    int count = 0;
    int v;
    scanf("%d",&v);
    for(int i = 0; i<v; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if( (a == 1 && b == 1 && c == 1)||(a == 0&&b==1&&c==1)||(a == 1&&b==0&&c==1)||(a == 1 && b== 1&&c==0) )
        {
            count = count+1;
        }
    }
    printf("%d\n",count);
    return 0;
}
