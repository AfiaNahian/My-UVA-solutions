#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> url;
    string s;
    int t,i,j,best,r;
    cin >> t;
    for(i=1;i<=t;i++)
        {
           best = 0;
           url.clear();
           for(j=0;j<10;j++)
               {
                   cin>>s>>r;
                   if(r>best)
                     {
                        best=r;
                        url.clear();
                        url.push_back(s);
                     }
                    else if(r==best)
                    {
                        url.push_back(s);
                    }
               }
        cout << "Case #" << i << ":\n";
        for(int k=0;k<url.size();k++)
        {
             cout << url[k] << '\n';
        }
    }
    return 0;
}
