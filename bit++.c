#include<stdio.h>
int main()
{
    char str[4];
    int value = 0;
    int x;
    scanf("%d",&x);
    getchar();
    for(int i = 0; i<x; i++)
    {
        gets(str);
        for(int j = 0; j<3; j++)
        {
            if(str[j]== '+'){
                value++;
                break;
            }else if(str[j] == '-')
            {
                value--;
                break;
            }
        }

    }
    printf("%d\n",value);
    return 0;
}
