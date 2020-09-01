#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d %d",&a,&b)==2)
    {
        if ((a>=-100)&&(a<=100)&&(b>=0)&&(b<=200))
        {
          c=2*a*b;
          printf("%d\n",c);
        }
    }
    return 0;
}
