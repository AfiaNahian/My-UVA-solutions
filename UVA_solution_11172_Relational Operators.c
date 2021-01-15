#include <stdio.h>
int main()
{
    long long a,b,c,i;
    scanf("%lld",&a);
    for(i=1;i<=a;i++)
      {
         scanf("%lld %lld",&b,&c);
         if(b>c)
            {
               printf(">\n");
            }
         else if(b<c)
            {
               printf("<\n");
            }
        else
            {
               printf("=\n");
            }
      }
    return 0;
}
