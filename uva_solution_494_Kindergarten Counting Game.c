#include <stdio.h>
int main()
{
    char s[1500];
    int a,i,x,y;
    while(gets(s))
    {
        x=0;y=0;
        a=strlen(s);
        for(i=0;i<=a;i++)
        {
            if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a'&& s[i]<='z'))
            {
              x=1;
            }
            else
            {
                y+=x;
                x=0;
            }
        }
        printf("%d\n",y);
    }
    return 0;
}
