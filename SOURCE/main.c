#include <stdio.h>
#include <string.h>
int palan(char *str,int start,int end)
{
    while(start < end)
    {
        char c1=str[start];
        char c2=str[end];
        if(c1>='A'&& c1<='Z')
        c1 +=32;
        if(c2>='A'&& c2<='Z')
        c2 +=32;
        if(c1!=c2)
        return 0;
        start++;
        end--;
    }
}

void main()
{
    char str[]="malayalam 12321 abcba kohli gayle";
    //scanf("%s",str);
    int n=strlen(str);
    int cnt=0,start=0,end=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==' '||str[i]=="\n"||str[i]=="\0")
        {
            end=i-1;
            if(palan(str,start,end))
            cnt++;
            start=i+1;
        }
    }
    printf("%d",cnt);
}