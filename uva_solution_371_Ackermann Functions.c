#include<stdio.h>
int main()
{
   long long l,u,i,x,c,t;
   while(scanf("%lld %lld",&l,&u)==2)
   {
     if(l==0 && u==0)
     {
          break;
     }
     else
     {
             if(l>u)
             {
               t=l;
               l=u;
               u=t;
             }
     long long max=0,value=0;
     for(i=l;i<=u;i++)
     {
       x=i;
       c=0;
       while(1)
       {
          c++;
          if(x%2!=0)
          {
              x=3*x+1;
          }
          else
          {
              x=x/2;
          }
          if(x==1)
          {
               break;
          }
       }
       if(c>max)
       {
           max=c;
           value=i;
       }
     }
     printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,u,value,max);
     }
   }
   return 0;
 }
