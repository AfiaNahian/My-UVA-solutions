#include <stdio.h>
#include <string.h>
int lcs(char *x,char *y,int p,int q)
{
    int L[p+1][q+1],bo;
    int i,j;
    for(i=0;i<=p;i++)
    {
        for(j=0;j<=q;j++)
        {
            if((i==0)||(j==0))
            {
                L[i][j]=0;
            }
            else if(x[i-1]==y[j-1])
            {
                L[i][j]=L[i-1][j-1]+1;
            }
            else
            {
                 L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    printf("%d\n",L[p][q]);

    return L[p][q];
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
int main()
{
    char x[1000],y[1000];
    int m,n,p,q,O;
    while(gets(x))
     {
             gets(y);
             p=strlen(x);
             q=strlen(y);
             lcs(x,y,p,q);
     }

}
