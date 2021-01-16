#include<stdio.h>
int main()
{
   int a,b,c,i,n,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
         {
             scanf("%d %d",&a,&b);
             c=0;
             for(j=a;j<=b;j++)
             {
                 if(j%2!=0)
                 {
                     c+=j;
                 }
             }
             printf("Case %d: %d\n",i,c);
         }
    return 0;
}

