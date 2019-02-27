#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
    vector<int> result;
    cout<<"sdsdfsdc";
    int t;
    cin>>t;
    
    for(int h=0;h<t;h++)
    {
        int m,n,x,y,l;
        cin>>m>>n>>x>>y>>l;
        char path[l];
        
        for (int i=0; i<l; i++) {
            cin>>path[i];
        }
        
        int a=0;//x-axis
        int b=0;//y-axis
        
        for (int j=0; j<l; j++)
        {
            if (path[j] == 'L')
            {
                a--;
            }
            
            if (path[j] == 'R')
            {
                a++;
            }
            
            if (path[j] == 'U')
            {
                b++;
            }
            
            if (path[j] == 'D')
            {
                b--;
            }

        }

        if(a==x && b==y)
        {
            result.push_back(1);
        }
        
        else if((a<0 || a>m) || (b<0 || b>n))
        {
            result.push_back(0);
        }
        
        else if((a>=0 && a<=m) && (b>=0 && b<=n))
        {
            result.push_back(2);
        }

    }

    for (int k=0;k<t;k++)
    {
        if(result[k] == 1)
        {
            cout<<"Case "<<k+1<<": REACHED"<<"\n";
        }
        else if(result[k] == 0)
        {
            cout<<"Case "<<k+1<<": DANGER"<<"\n";
        }
        else if(result[k] == 2)
        {
            cout<<"Case "<<k+1<<": SOMEWHERE"<<"\n";
        }
    }
    return 0;
}
*/
