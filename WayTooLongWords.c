#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char first;
    char last;
    char s;
    scanf("%d",&n);
    getchar();
    for(int i = 1; i<=n; i++){
        char str[100];
        gets(str);
        int len = strlen(str);
        int middleLen = len - 2;

            first = str[0];
            last = str[len - 1];

            if(len>10 && len != NULL){
                 printf("%c%d%c",first,middleLen,last);
            }else{
                for(int i = 0; i<len; i++){
                    printf("%c",str[i]);
                }
            }
            printf("\n");

    }
    return 0;
}
