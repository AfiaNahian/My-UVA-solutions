#include<stdio.h>
int main()
{
   int a,b,c,d,ans,j;
   while(scanf("%d",&d)==1)
    {
       for(j=1;j<=d;j++)
         {
             scanf("%d %d %d",&a,&b,&c);
             if(a>b && b>c || a<b && b<c)
             {
                 ans=b;
             }
             else if(a>c && c>b || a<c && c<b)
             {
                 ans=c;
             }
             else if(b>a && a>c || b<a && a<c)
             {
                 ans=a;
             }
             printf("Case %d: %d\n",j,ans);
         }
     }
    return 0;
}
