#include <iostream>
using namespace std;
int main()
{
    int a[1000];
    int n,m,i,j,x,y;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> m;
        for(j=0;j<m;j++)
        {
            cin >> a[j];
        }
        int swap=0,c=0;
        for(x=0;x<m-1;x++)
        {
            for(y=0;y<m-x-1;y++)
            {
                if(a[y]>a[y+1])
                {
                     c++;
                     swap=a[y];
                     a[y]=a[y+1];
                     a[y+1]=swap;
                }
            }
        }
        cout << "Optimal train swapping takes "<<c<<" swaps.\n";
    }
    return 0;
}
