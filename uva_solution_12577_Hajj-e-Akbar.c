#include <stdio.h>
int main()
{
    char a[10];
    int i,b=1,c;
    while(scanf("%s",&a)==1)
    {
        c=strlen(a);
        if (a[0]=='*')
        {
            break;
        }
       else
       {
                 if(a[0]=='H')
                 {
                      printf("Case %d: Hajj-e-Akbar\n",b);
                      b++;
                 }
                 else if(a[0]=='U')
                 {
                     printf("Case %d: Hajj-e-Asghar\n",b);
                      b++;
                 }
       }
    }
    return 0;
}
