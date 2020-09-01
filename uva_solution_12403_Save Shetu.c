#include <stdio.h>
int main()
{
    long long a,p=0,i,x;
    char s[20];
    scanf("%lld",&x);

    for(i=1;i<=x;i++)
    {
        scanf("%s",s);
        if(strcmp(s,"donate")==0)
        {
             scanf("%lld",&a);
             p+=a;
        }
        else
        {
            printf("%lld\n",p);
        }
    }
    return 0;
}
